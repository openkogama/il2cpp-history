
/* UniversalGizmo+MvVertexSnapState GetMvVertexSnapState() */

UniversalGizmo_MvVertexSnapState__Enum
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvVertexSnapState
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._isMvVertexSnapEnabled == 0) {
    return UniversalGizmo_MvVertexSnapState__Enum_Inactive;
  }
  pGVar1 = (this->fields)._mvVertexSnapDrag;
  if (pGVar1 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return (UniversalGizmo_MvVertexSnapState__Enum)(cVar2 != '\0');
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  UVar4 = (*pcVar3)();
  return UVar4;
}


/* Single GetMvZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor
                (UniversalGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      if (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x24) == '\0') {
        return _UNK_?;
      }
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_4.z = position->z;
        VStack_4.x = position->x;
        VStack_4.y = position->y;
        fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_4,(MethodInfo *)0x0);
        return fVar3;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single GetMvZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor_1
                (UniversalGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      if (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x24) != '\0') {
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        VStack_4.x = position->x;
        VStack_4.y = position->y;
        VStack_4.z = position->z;
        fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_4,(MethodInfo *)0x0);
        return fVar3;
      }
      return _UNK_?;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single GetRtZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor
                (UniversalGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) == '\0') {
      return _UNK_?;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.z = position->z;
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single GetRtZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor_1
                (UniversalGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      VStack_2.z = position->z;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
    return _UNK_?;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single GetScZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor
                (UniversalGizmo *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x90), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) == '\0') {
      return _UNK_?;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.z = position->z;
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single GetScZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor_1
                (UniversalGizmo *this,Vector3 *position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar1 = 0x168;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x90), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_2.x = position->x;
      VStack_2.y = position->y;
      VStack_2.z = position->z;
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_2,(MethodInfo *)0x0);
      return fVar3;
    }
    return _UNK_?;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Void Hide2DModeHandles() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Hide2DModeHandles
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mv2DModeSliders;
  if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
    GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible(pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mv2DModeSliders;
    if (pGVar1 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._mv2DModeDblSlider;
      if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
        pGVar3 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 0;
        (*(pGVar3->vtable).OnVisibilityStateChanged.methodPtr)();
        pGVar2 = (this->fields)._mv2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController,0,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pGVar2->fields)._isBorderVisible == 0) {
            return;
          }
          (pGVar2->fields)._isBorderVisible = 0;
          lVar4 = 0x110;
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar4 = 0x108;
          }
          lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar4);
          if ((lVar4 != 0) &&
             (pIVar5 = (pGVar2->fields)._controllers,
             pIVar5 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar6 = *(uint *)(lVar4 + 0x14);
            if ((uint)pIVar5->max_length <= uVar6) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pIVar5->vector[(int)uVar6] != (IGizmoPlaneSlider2DController *)0x0) {
              FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
              return;
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsDraggingMoveHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingMoveHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    return 0;
  }
  sliderHandleId = (pGVar1->fields)._dragInfo._handleId;
  pGVar4 = (this->fields)._mvAxesSliders;
  if (pGVar4 != (GizmoLineSlider3DCollection *)0x0) {
    bVar3 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                      (pGVar4,sliderHandleId,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    pGVar4 = (this->fields)._mvAxesSliders;
    if (pGVar4 != (GizmoLineSlider3DCollection *)0x0) {
      bVar3 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                        (pGVar4,sliderHandleId,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 1;
      }
      this_00 = (this->fields)._mvDblSliders;
      if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
        bVar3 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                          (this_00,sliderHandleId,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return 1;
        }
        pGVar5 = (this->fields)._mv2DModeSliders;
        if (pGVar5 != (GizmoLineSlider2DCollection *)0x0) {
          bVar3 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
                            (pGVar5,sliderHandleId,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 1;
          }
          pGVar5 = (this->fields)._mv2DModeSliders;
          if (pGVar5 != (GizmoLineSlider2DCollection *)0x0) {
            bVar3 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_ContainsCapId
                              (pGVar5,sliderHandleId,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return 1;
            }
            pGVar6 = (this->fields)._mv2DModeDblSlider;
            if ((pGVar6 != (GizmoPlaneSlider2D *)0x0) &&
               (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
              return (pGVar7->fields)._id == sliderHandleId;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsDraggingRotationHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingRotationHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    return 0;
  }
  sliderHandleId = (pGVar1->fields)._dragInfo._handleId;
  this_00 = (this->fields)._rtAxesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    bVar3 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                      (this_00,sliderHandleId,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    pGVar4 = (this->fields)._rtMidCap;
    if ((pGVar4 != (GizmoCap3D *)0x0) &&
       (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
      if ((pGVar5->fields)._id == sliderHandleId) {
        return 1;
      }
      pGVar6 = (this->fields)._rtCamLookSlider;
      if ((pGVar6 != (GizmoPlaneSlider2D *)0x0) &&
         (pGVar5 = (pGVar6->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
        return (pGVar5->fields)._id == sliderHandleId;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsDraggingScaleHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingScaleHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged == 0) {
      return 0;
    }
    pGVar2 = (this->fields)._scMidCap;
    method = (MethodInfo *)pGVar1;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._._handle, this = (UniversalGizmo *)0x0,
       pGVar3 != (GizmoHandle *)0x0)) {
      return (pGVar3->fields)._id == (pGVar1->fields)._dragInfo._handleId;
    }
  }
  FUN_?(this,method);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsMoveHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsMoveHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvAxesSliders;
  if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
    bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Contains_1
                      (pGVar1,handleId,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    pGVar1 = (this->fields)._mvAxesSliders;
    if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
      bVar2 = GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ContainsCapId
                        (pGVar1,handleId,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      this_00 = (this->fields)._mvDblSliders;
      if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
        bVar2 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                          (this_00,handleId,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 1;
        }
        pGVar3 = (this->fields)._mv2DModeSliders;
        if (pGVar3 != (GizmoLineSlider2DCollection *)0x0) {
          bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Contains_1
                            (pGVar3,handleId,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 1;
          }
          pGVar3 = (this->fields)._mv2DModeSliders;
          if (pGVar3 != (GizmoLineSlider2DCollection *)0x0) {
            bVar2 = GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_ContainsCapId
                              (pGVar3,handleId,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return 1;
            }
            pGVar4 = (this->fields)._mv2DModeDblSlider;
            if ((pGVar4 != (GizmoPlaneSlider2D *)0x0) &&
               (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
              return (pGVar5->fields)._id == handleId;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Boolean IsRotationHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsRotationHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._rtAxesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    bVar1 = GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Contains_1
                      (this_00,handleId,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    pGVar2 = (this->fields)._rtMidCap;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
      if ((pGVar3->fields)._id == handleId) {
        return 1;
      }
      pGVar4 = (this->fields)._rtCamLookSlider;
      if ((pGVar4 != (GizmoPlaneSlider2D *)0x0) &&
         (pGVar3 = (pGVar4->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
        return (pGVar3->fields)._id == handleId;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean IsScaleHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsScaleHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCap;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar2->fields)._id == handleId;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnAttached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar2,pGVar1,0x23,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._mvXYSlider = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._mvXYSlider >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar2,pGVar1,0x24,(MethodInfo *)0x0);
  (this->fields)._mvYZSlider = pGVar2;
  func_?(&(this->fields)._mvYZSlider);
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoPlaneSlider3D *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar2,pGVar1,0x25,(MethodInfo *)0x0);
  (this->fields)._mvZXSlider = pGVar2;
  func_?(&(this->fields)._mvZXSlider);
  pGVar8 = (this->fields)._mvDblSliders;
  if (pGVar8 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
              (pGVar8,(this->fields)._mvXYSlider,(MethodInfo *)0x0);
    pGVar8 = (this->fields)._mvDblSliders;
    if (pGVar8 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar8,(this->fields)._mvYZSlider,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._mvDblSliders;
      if (pGVar8 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar8,(this->fields)._mvZXSlider,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._gizmo;
        pGVar9 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
        GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar9,pGVar1,0x14,0x1a,(MethodInfo *)0x0);
        (this->fields)._mvPXSlider = pGVar9;
        func_?(&(this->fields)._mvPXSlider);
        pGVar9 = (this->fields)._mvPXSlider;
        if (pGVar9 != (GizmoLineSlider3D *)0x0) {
          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                    (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
          pGVar9 = (this->fields)._mvPXSlider;
          if (pGVar9 != (GizmoLineSlider3D *)0x0) {
            bVar10 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged(pGVar9,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              this_00 = (pGVar9->fields)._directionAxisMap;
              if (this_00 == (GizmoTransformAxisMap3D *)0x0) goto code_?;
              GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
                        (this_00,(pGVar9->fields)._transform,0,AxisSign__Enum_Positive,
                         (MethodInfo *)0x0);
            }
            pGVar1 = (this->fields)._._gizmo;
            pGVar9 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
            GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar9,pGVar1,0x17,0x1d,(MethodInfo *)0x0);
            (this->fields)._mvNXSlider = pGVar9;
            func_?(&(this->fields)._mvNXSlider);
            pGVar9 = (this->fields)._mvNXSlider;
            if (pGVar9 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                        (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
              pGVar9 = (this->fields)._mvNXSlider;
              if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                          (pGVar9,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._gizmo;
                pGVar9 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                GizmoLineSlider3D::GizmoLineSlider3D__ctor
                          (pGVar9,pGVar1,0x15,0x1b,(MethodInfo *)0x0);
                (this->fields)._mvPYSlider = pGVar9;
                func_?(&(this->fields)._mvPYSlider);
                pGVar9 = (this->fields)._mvPYSlider;
                if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                            (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                  pGVar9 = (this->fields)._mvPYSlider;
                  if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                              (pGVar9,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._gizmo;
                    pGVar9 = (GizmoLineSlider3D *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                    GizmoLineSlider3D::GizmoLineSlider3D__ctor
                              (pGVar9,pGVar1,0x18,0x1e,(MethodInfo *)0x0);
                    (this->fields)._mvNYSlider = pGVar9;
                    func_?(&(this->fields)._mvNYSlider);
                    pGVar9 = (this->fields)._mvNYSlider;
                    if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                      pGVar9 = (this->fields)._mvNYSlider;
                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                  (pGVar9,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                        pGVar1 = (this->fields)._._gizmo;
                        pGVar9 = (GizmoLineSlider3D *)
                                  FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                        GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                  (pGVar9,pGVar1,0x16,0x1c,(MethodInfo *)0x0);
                        (this->fields)._mvPZSlider = pGVar9;
                        func_?(&(this->fields)._mvPZSlider);
                        pGVar9 = (this->fields)._mvPZSlider;
                        if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                    (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                          pGVar9 = (this->fields)._mvPZSlider;
                          if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                      (pGVar9,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
                            pGVar1 = (this->fields)._._gizmo;
                            pGVar9 = (GizmoLineSlider3D *)
                                      FUN_?(TypeInfo__RTG__GizmoLineSlider3D);
                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                      (pGVar9,pGVar1,0x19,0x1f,(MethodInfo *)0x0);
                            (this->fields)._mvNZSlider = pGVar9;
                            func_?(&(this->fields)._mvNZSlider);
                            pGVar9 = (this->fields)._mvNZSlider;
                            if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                        (pGVar9,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                              pGVar9 = (this->fields)._mvNZSlider;
                              if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                          (pGVar9,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                pGVar11 = (this->fields)._mvAxesSliders;
                                if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                            (pGVar11,(this->fields)._mvPXSlider,(MethodInfo *)0x0);
                                  pGVar11 = (this->fields)._mvAxesSliders;
                                  if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (pGVar11,(this->fields)._mvPYSlider,(MethodInfo *)0x0);
                                    pGVar11 = (this->fields)._mvAxesSliders;
                                    if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (pGVar11,(this->fields)._mvPZSlider,(MethodInfo *)0x0
                                                );
                                      pGVar11 = (this->fields)._mvAxesSliders;
                                      if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (pGVar11,(this->fields)._mvNXSlider,
                                                   (MethodInfo *)0x0);
                                        pGVar11 = (this->fields)._mvAxesSliders;
                                        if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (pGVar11,(this->fields)._mvNYSlider,
                                                     (MethodInfo *)0x0);
                                          pGVar11 = (this->fields)._mvAxesSliders;
                                          if (pGVar11 != (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (pGVar11,(this->fields)._mvNZSlider,
                                                       (MethodInfo *)0x0);
                                            pGVar2 = (this->fields)._mvXYSlider;
                                            if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                (pGVar12 = (pGVar2->fields)._._handle,
                                                pGVar12 != (GizmoHandle *)0x0)) &&
                                               (pGVar11 = (this->fields)._mvAxesSliders,
                                               pGVar11 != (GizmoLineSlider3DCollection *)0x0)) {
                                              GizmoLineSlider3DCollection::
                                              GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                        (pGVar11,(pGVar12->fields)._hoverPriority3D,
                                                         (MethodInfo *)0x0);
                                              pGVar2 = (this->fields)._mvYZSlider;
                                              if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                  (pGVar12 = (pGVar2->fields)._._handle,
                                                  pGVar12 != (GizmoHandle *)0x0)) &&
                                                 (pGVar11 = (this->fields)._mvAxesSliders,
                                                 pGVar11 != (GizmoLineSlider3DCollection *)0x0)) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar11,(pGVar12->fields)._hoverPriority3D,
                                                           (MethodInfo *)0x0);
                                                pGVar2 = (this->fields)._mvZXSlider;
                                                if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                    (pGVar12 = (pGVar2->fields)._._handle,
                                                    pGVar12 != (GizmoHandle *)0x0)) &&
                                                   (pGVar11 = (this->fields)._mvAxesSliders,
                                                   pGVar11 != (GizmoLineSlider3DCollection *)0x0)) {
                                                  GizmoLineSlider3DCollection::
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar11,(pGVar12->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._._gizmo;
                                                  pGVar13 = (GizmoCap2D *)
                                                            FUN_?(TypeInfo__RTG__GizmoCap2D)
                                                  ;
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (pGVar13,pGVar1,200,(MethodInfo *)0x0);
                                                  (this->fields)._mvVertSnapCap = pGVar13;
                                                  func_?(&(this->fields)._mvVertSnapCap
                                                                     );
                                                  pGVar13 = (this->fields)._mvVertSnapCap;
                                                  if (pGVar13 != (GizmoCap2D *)0x0) {
                                                    if ((pGVar13->fields)._._isVisible != 0) {
                                                      pGVar14 = pGVar13->klass;
                                                      (pGVar13->fields)._._isVisible = 0;
                                                      (*(pGVar14->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar13,(pGVar14->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                    }
                                                    pGVar15 = (GizmoCap3D *)
                                                              (this->fields)._mvVertSnapCap;
                                                    if (pGVar15 != (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (pGVar15,(IGizmoDragSession *)
                                                                         (this->fields).
                                                                         _mvVertexSnapDrag,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      if ((pGVar1 != (Gizmo *)0x0) &&
                                                         (pGVar16 = (this->fields)._mvVertexSnapDrag,
                                                         pGVar16 != (GizmoObjectVertexSnapDrag3D *)
                                                                   0x0)) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  ((GizmoDragSession *)pGVar16,
                                                                   (pGVar1->fields)._transform,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar17 = (GizmoPlaneSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider2D);
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar17,pGVar1,0x2e,(MethodInfo *)0x0);
                                                  (this->fields)._mv2DModeDblSlider = pGVar17;
                                                  func_?(&(this->fields).
                                                                       _mv2DModeDblSlider);
                                                  pGVar17 = (this->fields)._mv2DModeDblSlider;
                                                  if (pGVar17 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar17,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar17 = (this->fields)._mv2DModeDblSlider;
                                                    if (pGVar17 != (GizmoPlaneSlider2D *)0x0) {
                                                      pGVar18 = pGVar17->klass;
                                                      (pGVar17->fields)._._isVisible = 0;
                                                      (*(pGVar18->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar17,(pGVar18->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      pGVar19 = (GizmoLineSlider2D *)
                                                                FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,0x26,0x2a,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._mvP2DModeXSlider = pGVar19;
                                                  func_?(&(this->fields).
                                                                       _mvP2DModeXSlider);
                                                  pGVar19 = (this->fields)._mvP2DModeXSlider;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar19,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar19 = (this->fields)._mvP2DModeXSlider;
                                                    if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar19,0,AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      pGVar19 = (this->fields)._mvP2DModeXSlider;
                                                      if (((((pGVar19 != (GizmoLineSlider2D *)0x0)
                                                            && (pGVar12 = (pGVar19->fields)._._handle
                                                               , pGVar12 != (GizmoHandle *)0x0)) &&
                                                           (pGVar17 = (this->fields).
                                                                      _mv2DModeDblSlider,
                                                           pGVar17 != (GizmoPlaneSlider2D *)0x0)) &&
                                                          ((pGVar20 = (pGVar17->fields)._._handle,
                                                           pGVar20 != (GizmoHandle *)0x0 &&
                                                           (pPVar21 = (pGVar12->fields).
                                                                      _hoverPriority2D,
                                                           pPVar21 != (Priority *)0x0)))) &&
                                                         (pPVar22 = (pGVar20->fields).
                                                                    _hoverPriority2D,
                                                         pPVar22 != (Priority *)0x0)) {
                                                        (pPVar21->fields)._priority =
                                                             (pPVar22->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar19 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,0x27,0x2b,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._mvP2DModeYSlider = pGVar19;
                                                  func_?(&(this->fields).
                                                                       _mvP2DModeYSlider);
                                                  pGVar19 = (this->fields)._mvP2DModeYSlider;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar19,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar19 = (this->fields)._mvP2DModeYSlider;
                                                    if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar19,1,AxisSign__Enum_Positive,
                                                                 (MethodInfo *)0x0);
                                                      pGVar19 = (this->fields)._mvP2DModeYSlider;
                                                      if (((pGVar19 != (GizmoLineSlider2D *)0x0) &&
                                                          (pGVar12 = (pGVar19->fields)._._handle,
                                                          pGVar12 != (GizmoHandle *)0x0)) &&
                                                         ((pGVar17 = (this->fields).
                                                                     _mv2DModeDblSlider,
                                                          pGVar17 != (GizmoPlaneSlider2D *)0x0 &&
                                                          (((pGVar20 = (pGVar17->fields)._._handle,
                                                            pGVar20 != (GizmoHandle *)0x0 &&
                                                            (pPVar21 = (pGVar12->fields).
                                                                       _hoverPriority2D,
                                                            pPVar21 != (Priority *)0x0)) &&
                                                           (pPVar22 = (pGVar20->fields).
                                                                      _hoverPriority2D,
                                                           pPVar22 != (Priority *)0x0)))))) {
                                                        (pPVar21->fields)._priority =
                                                             (pPVar22->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar19 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,0x28,0x2c,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._mvN2DModeXSlider = pGVar19;
                                                  func_?(&(this->fields).
                                                                       _mvN2DModeXSlider);
                                                  pGVar19 = (this->fields)._mvN2DModeXSlider;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar19,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar19 = (this->fields)._mvN2DModeXSlider;
                                                    if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar19,0,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pGVar19 = (this->fields)._mvN2DModeXSlider;
                                                      if ((((pGVar19 != (GizmoLineSlider2D *)0x0) &&
                                                           (pGVar12 = (pGVar19->fields)._._handle,
                                                           pGVar12 != (GizmoHandle *)0x0)) &&
                                                          ((pGVar17 = (this->fields).
                                                                      _mv2DModeDblSlider,
                                                           pGVar17 != (GizmoPlaneSlider2D *)0x0 &&
                                                           ((pGVar20 = (pGVar17->fields)._._handle,
                                                            pGVar20 != (GizmoHandle *)0x0 &&
                                                            (pPVar21 = (pGVar12->fields).
                                                                       _hoverPriority2D,
                                                            pPVar21 != (Priority *)0x0)))))) &&
                                                         (pPVar22 = (pGVar20->fields).
                                                                    _hoverPriority2D,
                                                         pPVar22 != (Priority *)0x0)) {
                                                        (pPVar21->fields)._priority =
                                                             (pPVar22->fields)._priority + 1;
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar19 = (GizmoLineSlider2D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoLineSlider2D);
                                                  method_00 = (MethodInfo *)0x0;
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,0x29,0x2d,
                                                             (MethodInfo *)0x0);
                                                  (this->fields)._mvN2DModeYSlider = pGVar19;
                                                  func_?(&(this->fields).
                                                                       _mvN2DModeYSlider);
                                                  pGVar19 = (this->fields)._mvN2DModeYSlider;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (pGVar19,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar19 = (this->fields)._mvN2DModeYSlider;
                                                    if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (pGVar19,1,AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      pGVar19 = (this->fields)._mvN2DModeYSlider;
                                                      if ((((pGVar19 != (GizmoLineSlider2D *)0x0) &&
                                                           (pGVar12 = (pGVar19->fields)._._handle,
                                                           pGVar12 != (GizmoHandle *)0x0)) &&
                                                          (pGVar17 = (this->fields).
                                                                     _mv2DModeDblSlider,
                                                          pGVar17 != (GizmoPlaneSlider2D *)0x0)) &&
                                                         (((pGVar20 = (pGVar17->fields)._._handle,
                                                           pGVar20 != (GizmoHandle *)0x0 &&
                                                           (pPVar21 = (pGVar12->fields).
                                                                      _hoverPriority2D,
                                                           pPVar21 != (Priority *)0x0)) &&
                                                          (pPVar22 = (pGVar20->fields).
                                                                     _hoverPriority2D,
                                                          pPVar22 != (Priority *)0x0)))) {
                                                        (pPVar21->fields)._priority =
                                                             (pPVar22->fields)._priority + 1;
                                                        pGVar23 = (this->fields)._mv2DModeSliders;
                                                        if (pGVar23 !=
                                                            (GizmoLineSlider2DCollection *)0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar23,(this->fields).
                                                                             _mvP2DModeXSlider,
                                                                     (MethodInfo *)0x0);
                                                          pGVar23 = (this->fields)._mv2DModeSliders;
                                                          if (pGVar23 !=
                                                              (GizmoLineSlider2DCollection *)0x0) {
                                                            GizmoLineSlider2DCollection::
                                                            GizmoLineSlider2DCollection_Add
                                                                      (pGVar23,(this->fields).
                                                                               _mvP2DModeYSlider,
                                                                       (MethodInfo *)0x0);
                                                            pGVar23 = (this->fields).
                                                                      _mv2DModeSliders;
                                                            if (pGVar23 !=
                                                                (GizmoLineSlider2DCollection *)0x0)
                                                            {
                                                              GizmoLineSlider2DCollection::
                                                              GizmoLineSlider2DCollection_Add
                                                                        (pGVar23,(this->fields).
                                                                                 _mvN2DModeXSlider,
                                                                         (MethodInfo *)0x0);
                                                              pGVar23 = (this->fields).
                                                                        _mv2DModeSliders;
                                                              if (pGVar23 !=
                                                                  (GizmoLineSlider2DCollection *)0x0
                                                                 ) {
                                                                GizmoLineSlider2DCollection::
                                                                GizmoLineSlider2DCollection_Add
                                                                          (pGVar23,(this->fields).
                                                                                   _mvN2DModeYSlider
                                                                           ,(MethodInfo *)0x0);
                                                                UniversalGizmo_Hide2DModeHandles
                                                                          (this,(MethodInfo *)0x0);
                                                                pGVar1 = (this->fields)._._gizmo;
                                                                pGVar15 = (GizmoCap3D *)
                                                                          FUN_?(
                                                  TypeInfo__RTG__GizmoCap3D);
                                                  GizmoCap3D::GizmoCap3D__ctor
                                                            (pGVar15,pGVar1,0x2f,(MethodInfo *)0x0);
                                                  (this->fields)._rtMidCap = pGVar15;
                                                  func_?(&(this->fields)._rtMidCap);
                                                  pGVar15 = (this->fields)._rtMidCap;
                                                  if (pGVar15 != (GizmoCap3D *)0x0) {
                                                    GizmoCap3D::GizmoCap3D_set_DragSession
                                                              (pGVar15,(IGizmoDragSession *)
                                                                       (this->fields).
                                                                       _rtCamXYRotationDrag,
                                                               (MethodInfo *)0x0);
                                                    pGVar1 = (this->fields)._._gizmo;
                                                    if ((pGVar1 != (Gizmo *)0x0) &&
                                                       (this_01 = (this->fields).
                                                                  _rtCamXYRotationDrag,
                                                       this_01 != (GizmoDblAxisRotationDrag3D *)0x0)
                                                       ) {
                                                      GizmoDragSession::
                                                      GizmoDragSession_AddTargetTransform
                                                                ((GizmoDragSession *)this_01,
                                                                 (pGVar1->fields)._transform,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      pGVar2 = (GizmoPlaneSlider3D *)
                                                                FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar2,pGVar1,0x20,(MethodInfo *)0x0);
                                                  (this->fields)._rtXSlider = pGVar2;
                                                  func_?(&(this->fields)._rtXSlider);
                                                  pGVar2 = (this->fields)._rtXSlider;
                                                  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar2,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar2 = (this->fields)._rtXSlider;
                                                  pQVar24 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::Quaternion_Euler
                                                                      (&QStack_25,0.0,_UNK_?
                                                                       ,0.0,method_00);
                                                  if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pGVar26 = (pGVar2->fields)._transform,
                                                     pGVar26 != (GizmoTransform *)0x0)) {
                                                    QStack_25.x = pQVar24->x;
                                                    QStack_25.y = pQVar24->y;
                                                    QStack_25.z = pQVar24->z;
                                                    QStack_25.w = pQVar24->w;
                                                    GizmoTransform::
                                                    GizmoTransform_set_LocalRotation3D
                                                              (pGVar26,&QStack_25,(MethodInfo *)0x0)
                                                    ;
                                                    pGVar2 = (this->fields)._rtXSlider;
                                                    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar27 = pGVar2->klass;
                                                      (pGVar2->fields)._._isVisible = 0;
                                                      (*(pGVar27->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar2,(pGVar27->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                      pGVar8 = (this->fields)._rtAxesSliders;
                                                      if (pGVar8 != (GizmoPlaneSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (pGVar8,(this->fields)._rtXSlider,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar2 = (GizmoPlaneSlider3D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar2,pGVar1,0x21,(MethodInfo *)0x0);
                                                  (this->fields)._rtYSlider = pGVar2;
                                                  func_?(&(this->fields)._rtYSlider);
                                                  pGVar2 = (this->fields)._rtYSlider;
                                                  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar2,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar2 = (this->fields)._rtYSlider;
                                                  pQVar24 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::Quaternion_Euler
                                                                      (&QStack_25,_UNK_?,0.0
                                                                       ,0.0,method_00);
                                                  if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                     (pGVar26 = (pGVar2->fields)._transform,
                                                     pGVar26 != (GizmoTransform *)0x0)) {
                                                    QStack_25.x = pQVar24->x;
                                                    QStack_25.y = pQVar24->y;
                                                    QStack_25.z = pQVar24->z;
                                                    QStack_25.w = pQVar24->w;
                                                    GizmoTransform::
                                                    GizmoTransform_set_LocalRotation3D
                                                              (pGVar26,&QStack_25,(MethodInfo *)0x0)
                                                    ;
                                                    pGVar2 = (this->fields)._rtYSlider;
                                                    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar27 = pGVar2->klass;
                                                      (pGVar2->fields)._._isVisible = 0;
                                                      (*(pGVar27->vtable).OnVisibilityStateChanged.
                                                        methodPtr)(pGVar2,(pGVar27->vtable).
                                                                           OnVisibilityStateChanged.
                                                                           method);
                                                      pGVar8 = (this->fields)._rtAxesSliders;
                                                      if (pGVar8 != (GizmoPlaneSlider3DCollection *)
                                                                    0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (pGVar8,(this->fields)._rtYSlider,
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = (this->fields)._._gizmo;
                                                        pGVar2 = (GizmoPlaneSlider3D *)
                                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider3D);
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar2,pGVar1,0x22,(MethodInfo *)0x0);
                                                  (this->fields)._rtZSlider = pGVar2;
                                                  func_?(&(this->fields)._rtZSlider);
                                                  pGVar2 = (this->fields)._rtZSlider;
                                                  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar2,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar2 = (this->fields)._rtZSlider;
                                                  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar27 = pGVar2->klass;
                                                    (pGVar2->fields)._._isVisible = 0;
                                                    (*(pGVar27->vtable).OnVisibilityStateChanged.
                                                      methodPtr)(pGVar2,(pGVar27->vtable).
                                                                         OnVisibilityStateChanged.
                                                                         method);
                                                    pGVar8 = (this->fields)._rtAxesSliders;
                                                    if (pGVar8 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                      GizmoPlaneSlider3DCollection_Add
                                                                (pGVar8,(this->fields)._rtZSlider,
                                                                 (MethodInfo *)0x0);
                                                      pGVar1 = (this->fields)._._gizmo;
                                                      pGVar17 = (GizmoPlaneSlider2D *)
                                                                FUN_?(
                                                  TypeInfo__RTG__GizmoPlaneSlider2D);
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar17,pGVar1,0x30,(MethodInfo *)0x0);
                                                  (this->fields)._rtCamLookSlider = pGVar17;
                                                  func_?(&(this->fields).
                                                                       _rtCamLookSlider);
                                                  pGVar17 = (this->fields)._rtCamLookSlider;
                                                  if (pGVar17 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar17,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar17 = (this->fields)._rtCamLookSlider;
                                                  if (pGVar17 != (GizmoPlaneSlider2D *)0x0) {
                                                    pGVar18 = pGVar17->klass;
                                                    (pGVar17->fields)._._isVisible = 0;
                                                    (*(pGVar18->vtable).OnVisibilityStateChanged.
                                                      methodPtr)(pGVar17,(pGVar18->vtable).
                                                                         OnVisibilityStateChanged.
                                                                         method);
                                                    pGVar1 = (this->fields)._._gizmo;
                                                    pGVar15 = (GizmoCap3D *)
                                                              FUN_?(
                                                  TypeInfo__RTG__GizmoCap3D);
                                                  GizmoCap3D::GizmoCap3D__ctor
                                                            (pGVar15,pGVar1,0xc9,(MethodInfo *)0x0);
                                                  (this->fields)._scMidCap = pGVar15;
                                                  func_?(&(this->fields)._scMidCap);
                                                  pGVar15 = (this->fields)._scMidCap;
                                                  if (pGVar15 != (GizmoCap3D *)0x0) {
                                                    GizmoCap3D::GizmoCap3D_set_DragSession
                                                              (pGVar15,(IGizmoDragSession *)
                                                                       (this->fields).
                                                                       _scUnformScaleDrag,
                                                               (MethodInfo *)0x0);
                                                    pGVar15 = (this->fields)._rtMidCap;
                                                    if (((pGVar15 != (GizmoCap3D *)0x0) &&
                                                        (pGVar12 = (pGVar15->fields)._._handle,
                                                        pGVar12 != (GizmoHandle *)0x0)) &&
                                                       (pGVar8 = (this->fields)._rtAxesSliders,
                                                       pGVar8 != (GizmoPlaneSlider3DCollection *)0x0
                                                       )) {
                                                      GizmoPlaneSlider3DCollection::
                                                                                                            
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar8,(pGVar12->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar2 = (this->fields)._rtXSlider;
                                                  if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                                                      (pGVar12 = (pGVar2->fields)._._handle,
                                                      pGVar12 != (GizmoHandle *)0x0)) &&
                                                     (pGVar11 = (this->fields)._mvAxesSliders,
                                                     pGVar11 != (GizmoLineSlider3DCollection *)0x0))
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar11,(pGVar12->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar9 = (this->fields)._mvPXSlider;
                                                  if (((pGVar9 != (GizmoLineSlider3D *)0x0) &&
                                                      (pGVar12 = (pGVar9->fields)._._handle,
                                                      pGVar12 != (GizmoHandle *)0x0)) &&
                                                     (pGVar8 = (this->fields)._mvDblSliders,
                                                     pGVar8 != (GizmoPlaneSlider3DCollection *)0x0))
                                                  {
                                                    GizmoPlaneSlider3DCollection::
                                                                                                        
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar8,(pGVar12->fields).
                                                                    _hoverPriority3D,
                                                             (MethodInfo *)0x0);
                                                  pGVar15 = (this->fields)._scMidCap;
                                                  if (((((pGVar15 != (GizmoCap3D *)0x0) &&
                                                        (pGVar12 = (pGVar15->fields)._._handle,
                                                        pGVar12 != (GizmoHandle *)0x0)) &&
                                                       (pGVar2 = (this->fields)._mvXYSlider,
                                                       pGVar2 != (GizmoPlaneSlider3D *)0x0)) &&
                                                      ((pGVar20 = (pGVar2->fields)._._handle,
                                                       pGVar20 != (GizmoHandle *)0x0 &&
                                                       (pPVar21 = (pGVar12->fields)._hoverPriority3D,
                                                       pPVar21 != (Priority *)0x0)))) &&
                                                     (pPVar22 = (pGVar20->fields)._hoverPriority3D,
                                                     pPVar22 != (Priority *)0x0)) {
                                                    (pPVar21->fields)._priority =
                                                         (pPVar22->fields)._priority + -1;
                                                    UniversalGizmo_SetupSharedLookAndFeel
                                                              (this,(MethodInfo *)0x0);
                                                    lVar28 = 0x140;
                                                    lVar29 = 0x140;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (UniversalGizmoSettings3D *)0x0) {
                                                      lVar29 = 0x148;
                                                    }
                                                    lVar29 = *(longlong *)
                                                              ((longlong)&this->klass + lVar29);
                                                    if (lVar29 != 0) {
                                                      lVar29 = *(longlong *)(lVar29 + 0x38);
                                                      pGVar9 = (this->fields)._mvPXSlider;
                                                      if (lVar29 != 0) {
                                                        if (*(int *)(lVar29 + 0x18) == 0) {
code_?:
                                                          FUN_?();
                                                          pcVar30 = (code *)swi(3);
                                                          (*pcVar30)();
                                                          return;
                                                        }
                                                        if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                          (pGVar9->fields)._sharedSettings =
                                                               *(GizmoLineSlider3DSettings **)
                                                                (lVar29 + 0x20);
                                                          if (iRam_? != 0) {
                                                            uVar4 = (uint)((ulonglong)
                                                                            &(pGVar9->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar29 = (ulonglong)
                                                                     ((uVar4 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                        (lVar29 + 0xADDR);
                                                              puVar7 = (ulonglong *)
                                                                       (lVar29 + 0xADDR);
                                                              LOCK();
                                                              bVar3 = uVar5 == *puVar7;
                                                              if (bVar3) {
                                                                *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar3);
                                                  }
                                                  iVar31 = iRam_?;
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    pGVar9 = (this->fields)._mvPYSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar9->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar29 + 0x28);
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar9->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    pGVar9 = (this->fields)._mvPZSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar9->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar29 + 0x30);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar9->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    pGVar9 = (this->fields)._mvNXSlider;
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar9->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar29 + 0x38);
                                                        iVar31 = 0;
                                                        if (iVar32 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar9->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    pGVar9 = (this->fields)._mvNYSlider;
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 5)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar9->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar29 + 0x40);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar9->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    pGVar9 = (this->fields)._mvNZSlider;
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 6)
                                                      goto code_?;
                                                      if (pGVar9 != (GizmoLineSlider3D *)0x0) {
                                                        (pGVar9->fields)._sharedSettings =
                                                             *(GizmoLineSlider3DSettings **)
                                                              (lVar29 + 0x48);
                                                        iVar31 = 0;
                                                        if (iVar32 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar9->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x40);
                                                    pGVar2 = (this->fields)._mvXYSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(int *)(lVar29 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar2->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar29 + 0x20);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar2->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x40);
                                                    pGVar2 = (this->fields)._mvYZSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar2->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar29 + 0x28);
                                                        iVar31 = 0;
                                                        if (iVar32 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar2->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x40);
                                                    pGVar2 = (this->fields)._mvZXSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar2->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar29 + 0x30);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar2->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar33 = 0x130;
                                                  lVar29 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar29 = 0x138;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    pGVar19 = (this->fields)._mvP2DModeXSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(int *)(lVar29 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar19->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar29 + 0x20);
                                                        iVar31 = 0;
                                                        if (iVar32 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar19->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar29 = 0x138;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    pGVar19 = (this->fields)._mvP2DModeYSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar19->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar29 + 0x28);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar19->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar29 = 0x138;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    pGVar19 = (this->fields)._mvN2DModeXSlider;
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar19->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar29 + 0x30);
                                                        iVar31 = 0;
                                                        if (iVar32 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar19->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar31 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  lVar29 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar29 = 0x138;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    pGVar19 = (this->fields)._mvN2DModeYSlider;
                                                    lVar29 = *(longlong *)(lVar29 + 0x38);
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar19->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar29 + 0x38);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar19->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar33 = 0x138;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar33);
                                                  if ((lVar29 != 0) &&
                                                     (pGVar17 = (this->fields)._mv2DModeDblSlider,
                                                     pGVar17 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar17->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar29 + 0x30);
                                                    iVar31 = 0;
                                                    if (iVar32 != 0) {
                                                      uVar4 = (uint)((ulonglong)
                                                                      &(pGVar17->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar29 = (ulonglong)((uVar4 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)
                                                                  (lVar29 + 0xADDR);
                                                        puVar7 = (ulonglong *)(lVar29 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar3 = uVar5 == *puVar7;
                                                        if (bVar3) {
                                                          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar31 = iRam_?;
                                                      } while (!bVar3);
                                                    }
                                                    lVar29 = 0x140;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (UniversalGizmoSettings3D *)0x0) {
                                                      lVar29 = 0x148;
                                                    }
                                                    lVar29 = *(longlong *)
                                                              ((longlong)&this->klass + lVar29);
                                                    if ((lVar29 != 0) &&
                                                       (pGVar16 = (this->fields)._mvVertexSnapDrag,
                                                       pGVar16 != (GizmoObjectVertexSnapDrag3D *)0x0)
                                                       ) {
                                                      pGVar34 = *(GizmoObjectVertexSnapSettings **)
                                                                 (lVar29 + 0x30);
                                                      if ((pGVar34 !=
                                                           (GizmoObjectVertexSnapSettings *)0x0) &&
                                                         ((pGVar16->fields)._settings = pGVar34,
                                                         iVar31 != 0)) {
                                                        uVar4 = (uint)((ulonglong)
                                                                        &(pGVar16->fields)._settings
                                                                       >> 0xc);
                                                        lVar29 = (ulonglong)
                                                                 ((uVar4 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                    (lVar29 + 0xADDR);
                                                          puVar7 = (ulonglong *)
                                                                   (lVar29 + 0xADDR);
                                                          LOCK();
                                                          bVar3 = uVar5 == *puVar7;
                                                          if (bVar3) {
                                                            *puVar7 = uVar5 | 1L << (uVar4 & 0x3f)
                                                            ;
                                                          }
                                                          UNLOCK();
                                                          iVar31 = iRam_?;
                                                        } while (!bVar3);
                                                      }
                                                      lVar29 = 0x140;
                                                      if ((this->fields)._sharedSettings3D !=
                                                          (UniversalGizmoSettings3D *)0x0) {
                                                        lVar29 = 0x148;
                                                      }
                                                      lVar29 = *(longlong *)
                                                                ((longlong)&this->klass + lVar29);
                                                      if (lVar29 != 0) {
                                                        lVar29 = *(longlong *)(lVar29 + 0x50);
                                                        pGVar2 = (this->fields)._rtXSlider;
                                                        if (lVar29 != 0) {
                                                          if (*(int *)(lVar29 + 0x18) == 0)
                                                          goto code_?;
                                                          if (pGVar2 != (GizmoPlaneSlider3D *)0x0)
                                                          {
                                                            (pGVar2->fields)._sharedSettings =
                                                                 *(GizmoPlaneSlider3DSettings **)
                                                                  (lVar29 + 0x20);
                                                            iVar32 = 0;
                                                            if (iVar31 != 0) {
                                                              uVar4 = (uint)((ulonglong)
                                                                              &(pGVar2->fields).
                                                                               _sharedSettings >>
                                                                             0xc);
                                                              lVar29 = (ulonglong)
                                                                       ((uVar4 & 0x1fffff) >> 6) *
                                                                       8;
                                                              do {
                                                                uVar5 = *(ulonglong *)
                                                                          (lVar29 + 0xADDR);
                                                                puVar7 = (ulonglong *)
                                                                         (lVar29 + 0xADDR);
                                                                LOCK();
                                                                bVar3 = uVar5 == *puVar7;
                                                                if (bVar3) {
                                                                  *puVar7 = uVar5 | 1L << (uVar4 &
                                                                                           0x3f);
                                                                }
                                                                UNLOCK();
                                                                iVar32 = iRam_?;
                                                              } while (!bVar3);
                                                            }
                                                            lVar29 = 0x140;
                                                            if ((this->fields)._sharedSettings3D !=
                                                                (UniversalGizmoSettings3D *)0x0) {
                                                              lVar29 = 0x148;
                                                            }
                                                            lVar29 = *(longlong *)
                                                                      ((longlong)&this->klass +
                                                                      lVar29);
                                                            if (lVar29 != 0) {
                                                              lVar29 = *(longlong *)(lVar29 + 0x50);
                                                              pGVar2 = (this->fields)._rtYSlider;
                                                              if (lVar29 != 0) {
                                                                if (*(uint *)(lVar29 + 0x18) < 2)
                                                                goto code_?;
                                                                if (pGVar2 !=
                                                                    (GizmoPlaneSlider3D *)0x0) {
                                                                  (pGVar2->fields)._sharedSettings
                                                                       = *(
                                                  GizmoPlaneSlider3DSettings **)(lVar29 + 0x28);
                                                  iVar31 = 0;
                                                  if (iVar32 != 0) {
                                                    uVar4 = (uint)((ulonglong)
                                                                    &(pGVar2->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar29 = (ulonglong)((uVar4 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar29 + 0xADDR);
                                                      puVar7 = (ulonglong *)(lVar29 + 0xADDR);
                                                      LOCK();
                                                      bVar3 = uVar5 == *puVar7;
                                                      if (bVar3) {
                                                        *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar31 = iRam_?;
                                                    } while (!bVar3);
                                                  }
                                                  lVar29 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar29 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar29);
                                                  if (lVar29 != 0) {
                                                    lVar29 = *(longlong *)(lVar29 + 0x50);
                                                    pGVar2 = (this->fields)._rtZSlider;
                                                    if (lVar29 != 0) {
                                                      if (*(uint *)(lVar29 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar2->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar29 + 0x30);
                                                        iVar32 = 0;
                                                        if (iVar31 != 0) {
                                                          uVar4 = (uint)((ulonglong)
                                                                          &(pGVar2->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar29 = (ulonglong)
                                                                   ((uVar4 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                      (lVar29 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar29 + 0xADDR);
                                                            LOCK();
                                                            bVar3 = uVar5 == *puVar7;
                                                            if (bVar3) {
                                                              *puVar7 = uVar5 | 1L << (uVar4 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar32 = iRam_?;
                                                  } while (!bVar3);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar28 = 0x148;
                                                  }
                                                  lVar29 = *(longlong *)
                                                            ((longlong)&this->klass + lVar28);
                                                  if ((lVar29 != 0) &&
                                                     (pGVar17 = (this->fields)._rtCamLookSlider,
                                                     pGVar17 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar17->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar29 + 0x58);
                                                    if (iVar32 != 0) {
                                                      uVar4 = (uint)((ulonglong)
                                                                      &(pGVar17->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar29 = (ulonglong)((uVar4 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)
                                                                  (lVar29 + 0xADDR);
                                                        puVar7 = (ulonglong *)(lVar29 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar3 = uVar5 == *puVar7;
                                                        if (bVar3) {
                                                          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar3);
                                                    }
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
                                                  pcVar30 = (code *)swi(3);
                                                  (*pcVar30)();
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDetached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      source = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = source == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = source;
        }
        UNLOCK();
        pGVar5 = source;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != source;
        source = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDisabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      source = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = source == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = source;
        }
        UNLOCK();
        pGVar5 = source;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != source;
        source = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnEnabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pGVar2 = (pGVar1->fields)._transform;
    this_00 = (Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)
              FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
    Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
              (this_00,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (pGVar2 != (GizmoTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = &pGVar2->fields;
      a = (pGVar2->fields).Changed;
      do {
        pGVar4 = (GizmoEntityTransformChangedHandler *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pGVar5 = (GizmoEntityTransformChangedHandler *)0x0;
        if (pGVar4 != (GizmoEntityTransformChangedHandler *)0x0) {
          if (pGVar4->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
            pGVar5 = pGVar4;
          }
          if (pGVar5 == (GizmoEntityTransformChangedHandler *)0x0) {
            FUN_?(pGVar4);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pGVar4 = pGVar3->Changed;
        bVar7 = a == pGVar4;
        if (bVar7) {
          pGVar3->Changed = pGVar5;
          pGVar4 = a;
        }
        UNLOCK();
        pGVar5 = a;
        if (!bVar7) {
          pGVar5 = pGVar4;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)pGVar3 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pGVar5 != a;
        a = pGVar5;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoAttemptHandleDragBegin
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    if (handleId == (pGVar2->fields)._id) {
      pGVar3 = (this->fields)._._gizmo;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      uStack_6._0_4_ = 0.0;
      uStack_6._4_4_ = 0.0;
      fStack_7 = 0.0;
      fStack_8 = 0.0;
      if (((pGVar3 != (Gizmo *)0x0) &&
          (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
          pCVar9 != (Camera *)0x0)) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar9,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)
         ) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&VStack_12,pTVar10,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._._gizmo;
        uStack_6._0_4_ = pVVar11->x;
        uStack_6._4_4_ = pVVar11->y;
        fStack_7 = pVVar11->z;
        if (((pGVar3 != (Gizmo *)0x0) &&
            (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
            pCVar9 != (Camera *)0x0)) &&
           (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar9,(MethodInfo *)0x0),
           pTVar10 != (Transform *)0x0)) {
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&VStack_12,pTVar10,(MethodInfo *)0x0);
          uVar13 = pVVar11->x;
          uVar14 = pVVar11->y;
          fStack_5 = pVVar11->z;
          fStack_8 = (float)uVar13;
          fStack_4 = (float)uVar14;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_12.x = (pVVar15->rightVector).x;
          VStack_12.y = (pVVar15->rightVector).y;
          fStack_16 = (pVVar15->rightVector).z;
          VStack_17.y = (float)((uint)VStack_12.y ^ _UNK_?);
          VStack_17.x = (float)((uint)VStack_12.x ^ _UNK_?);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_12.x = (pVVar15->upVector).x;
          VStack_12.y = (pVVar15->upVector).y;
          fStack_16 = (pVVar15->upVector).z;
          lVar18 = 0x140;
          if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
            lVar18 = 0x148;
          }
          lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
          VStack_19 = VStack_12;
          if ((lVar18 != 0) && (lVar18 = *(longlong *)(lVar18 + 0x50), lVar18 != 0)) {
            if (*(int *)(lVar18 + 0x18) == 0) {
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            if (*(longlong *)(lVar18 + 0x20) != 0) {
              uStack_21 = *(undefined4 *)(*(longlong *)(lVar18 + 0x20) + 0x34);
              uVar22 = 0x140;
              if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                uVar22 = 0x148;
              }
              lVar18 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar22);
              if (lVar18 != 0) {
                uStack_23 = *(undefined4 *)(lVar18 + 0x4c);
                lVar18 = 0x140;
                if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                  lVar18 = 0x148;
                }
                lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
                if (lVar18 != 0) {
                  pGVar24 = (this->fields)._rtCamXYRotationDrag;
                  fVar25 = *(float *)(lVar18 + 0x48);
                  if (pGVar24 != (GizmoDblAxisRotationDrag3D *)0x0) {
                    cVar26 = (*(pGVar24->klass->vtable).get_IsActive_1.methodPtr)
                                       (pGVar24,(pGVar24->klass->vtable).get_IsActive_1.method);
                    if (cVar26 != '\0') {
                      return;
                    }
                    (pGVar24->fields)._workData.ScreenAxis0 = VStack_17;
                    (pGVar24->fields)._workData.ScreenAxis1 = VStack_19;
                    (pGVar24->fields)._workData.Axis0.x = (float)uStack_6;
                    (pGVar24->fields)._workData.Axis0.y = uStack_6._4_4_;
                    *(ulonglong *)&(pGVar24->fields)._workData.Axis0.z =
                         CONCAT44(fStack_8,fStack_7);
                    (pGVar24->fields)._workData.Axis1.y = fStack_4;
                    (pGVar24->fields)._workData.Axis1.z = fStack_5;
                    (pGVar24->fields)._workData.SnapMode = uStack_21;
                    (pGVar24->fields)._workData.SnapStep0 = (float)uStack_23;
                    (pGVar24->fields)._workData.SnapStep1 = fVar25;
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
      pGVar1 = (this->fields)._scMidCap;
      if ((pGVar1 != (GizmoCap3D *)0x0) &&
         (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
        if (handleId != (pGVar2->fields)._id) {
          return;
        }
        uStack_27 = 0;
        pGVar1 = (this->fields)._scMidCap;
        VStack_28.x = 0.0;
        VStack_28.y = 0.0;
        VStack_28.z = 0.0;
        fStack_29 = 0.0;
        fStack_30 = 0.0;
        fStack_31 = 0.0;
        uStack_32 = 0;
        if ((pGVar1 != (GizmoCap3D *)0x0) &&
           (pGVar33 = (pGVar1->fields)._transform, pGVar33 != (GizmoTransform *)0x0)) {
          uStack_32._0_4_ = (pGVar33->fields)._position3D.x;
          uStack_32._4_4_ = (pGVar33->fields)._position3D.y;
          pGVar3 = (this->fields)._._gizmo;
          uStack_27 = (ulonglong)(uint)(pGVar33->fields)._position3D.z;
          if ((pGVar3 != (Gizmo *)0x0) &&
             ((pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
              pCVar9 != (Camera *)0x0 &&
              (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pCVar9,(MethodInfo *)0x0),
              pTVar10 != (Transform *)0x0)))) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&VStack_12,pTVar10,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._._gizmo;
            VStack_28.x = pVVar11->x;
            VStack_28.y = pVVar11->y;
            VStack_28.z = pVVar11->z;
            if ((pGVar3 != (Gizmo *)0x0) &&
               ((pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
                pCVar9 != (Camera *)0x0 &&
                (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pCVar9,(MethodInfo *)0x0),
                pTVar10 != (Transform *)0x0)))) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&VStack_12,pTVar10,(MethodInfo *)0x0);
              uVar34 = pVVar11->x;
              uVar35 = pVVar11->y;
              fStack_31 = pVVar11->z;
              lVar18 = 0x140;
              if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                lVar18 = 0x148;
              }
              lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
              fStack_29 = (float)uVar34;
              fStack_30 = (float)uVar35;
              if (lVar18 != 0) {
                this_00 = (this->fields)._scUnformScaleDrag;
                fVar25 = *(float *)(lVar18 + 0x60);
                uStack_27 = CONCAT44(fVar25,(float)uStack_27);
                if (this_00 != (GizmoUniformScaleDrag3D *)0x0) {
                  VStack_19.y = (float)uVar34;
                  VStack_19.x = VStack_28.z;
                  uStack_6._4_4_ = fStack_31;
                  uStack_6._0_4_ = (float)uVar35;
                  VStack_17.x = VStack_28.x;
                  VStack_17.y = VStack_28.y;
                  fStack_4 = (float)uStack_27;
                  fStack_7 = (float)uStack_32;
                  fStack_8 = (float)((ulonglong)uStack_32 >> 0x20);
                  fStack_5 = fVar25;
                  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                            (this_00,(GizmoUniformScaleDrag3D_WorkData *)&VStack_17,
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
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnGizmoDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragBegin
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = UniversalGizmo_IsMoveHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UniversalGizmo_IsRotationHandle(this,handleId,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = (this->fields)._scMidCap;
      if ((pGVar2 != (GizmoCap3D *)0x0) &&
         (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
        if ((pGVar3->fields)._id != handleId) {
          return;
        }
        UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
        this_00 = (this->fields)._rtAxesSliders;
        if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetBorderVisible
                    (this_00,0,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._rtMidCap;
          if (pGVar2 != (GizmoCap3D *)0x0) {
            if ((pGVar2->fields)._._isVisible != 0) {
              pGVar4 = pGVar2->klass;
              (pGVar2->fields)._._isVisible = 0;
              (*(pGVar4->vtable).OnVisibilityStateChanged.methodPtr)
                        (pGVar2,(pGVar4->vtable).OnVisibilityStateChanged.method);
            }
            pGVar5 = (this->fields)._rtCamLookSlider;
            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController,0,0,in_R9,unaff_RDI);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pGVar5->fields)._isBorderVisible == 0) {
                return;
              }
              (pGVar5->fields)._isBorderVisible = 0;
              lVar6 = 0x110;
              if ((pGVar5->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                lVar6 = 0x108;
              }
              lVar6 = *(longlong *)((longlong)&pGVar5->klass + lVar6);
              if ((lVar6 != 0) &&
                 (pIVar7 = (pGVar5->fields)._controllers,
                 pIVar7 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
                uVar8 = *(uint *)(lVar6 + 0x14);
                if ((uint)pIVar7->max_length <= uVar8) {
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (pIVar7->vector[(int)uVar8] != (IGizmoPlaneSlider2DController *)0x0) {
                  FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
                  return;
                }
              }
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      goto code_?;
    }
    UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
  }
  else {
    UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
  }
  pGVar2 = (this->fields)._scMidCap;
  if (pGVar2 != (GizmoCap3D *)0x0) {
    if ((pGVar2->fields)._._isVisible != 0) {
      (pGVar2->fields)._._isVisible = 0;
      (*(pGVar2->klass->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar2,(pGVar2->klass->vtable).OnVisibilityStateChanged.method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragEnd
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCap;
  if ((pGVar1 == (GizmoCap3D *)0x0) ||
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 == (GizmoHandle *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((pGVar2->fields)._id != handleId) && ((this->fields)._is2DModeEnabled == 0)) &&
     (pGVar1 = (this->fields)._scMidCap, (pGVar1->fields)._._isVisible != 1)) {
    pGVar4 = pGVar1->klass;
    (pGVar1->fields)._._isVisible = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar4->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar1,(pGVar4->vtable).OnVisibilityStateChanged.method);
    return;
  }
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragUpdate
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  if ((this->fields)._isMvVertexSnapEnabled != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (pGVar1->fields)._dragInfo._relativeOffset.x;
    uVar4 = (pGVar1->fields)._dragInfo._relativeOffset.y;
    uVar5 = (this->fields)._mvPostVSnapPosRestore.x;
    uVar6 = (this->fields)._mvPostVSnapPosRestore.y;
    fVar7 = (pGVar1->fields)._dragInfo._relativeOffset.z;
    fVar8 = (this->fields)._mvPostVSnapPosRestore.z;
    (this->fields)._mvPostVSnapPosRestore.x = (float)uVar3 + (float)uVar5;
    (this->fields)._mvPostVSnapPosRestore.y = (float)uVar4 + (float)uVar6;
    (this->fields)._mvPostVSnapPosRestore.z = fVar7 + fVar8;
  }
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoRender
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Camera>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar1[7].monitor != (MonitorData *)0x0) {
      if (1 < *(int *)(pOVar1[7].monitor + 0x18)) {
        pGVar2 = (this->fields)._mvAxesSliders;
        if (pGVar2 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
                  (pGVar2,camera,(MethodInfo *)0x0);
        if (((this->fields)._isMvVertexSnapEnabled == 0) && ((this->fields)._is2DModeEnabled == 0))
        {
          pGVar3 = (this->fields)._mvDblSliders;
          if (pGVar3 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
          GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                    (pGVar3,camera,(MethodInfo *)0x0);
          UniversalGizmo_PlaceMvDblSlidersInSliderPlanes(this,camera,(MethodInfo *)0x0);
        }
        UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
        if ((this->fields)._is2DModeEnabled != 0) {
          UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields)._rtMidCap;
        if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
        GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._rtAxesSliders;
        if (pGVar3 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_ApplyZoomFactor
                  (pGVar3,camera,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._rtCamLookSlider;
        if (pGVar5 == (GizmoPlaneSlider2D *)0x0) goto code_?;
        if ((pGVar5->fields)._isBorderVisible != 0) {
          UniversalGizmo_UpdateRtCamLookSlider(this,camera,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields)._scMidCap;
        if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
        GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera,(MethodInfo *)0x0);
      }
      pGVar6 = (this->fields)._rtXSlider;
      if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
        (*(pGVar6->klass->vtable).Render_1.methodPtr)
                  (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
        pGVar6 = (this->fields)._rtYSlider;
        if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
          (*(pGVar6->klass->vtable).Render_1.methodPtr)
                    (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
          pGVar6 = (this->fields)._rtZSlider;
          if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
            (*(pGVar6->klass->vtable).Render_1.methodPtr)
                      (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
            pGVar4 = (this->fields)._rtMidCap;
            if (pGVar4 != (GizmoCap3D *)0x0) {
              (*(pGVar4->klass->vtable).Render_1.methodPtr)(pGVar4,camera);
              pGVar2 = (this->fields)._mvAxesSliders;
              if ((pGVar2 != (GizmoLineSlider3DCollection *)0x0) &&
                 (pLVar7 = GizmoLineSlider3DCollection::
                            GizmoLineSlider3DCollection_GetRenderSortedSliders
                                      (pGVar2,camera,(MethodInfo *)0x0),
                 pLVar7 != (List_1_RTG_GizmoLineSlider3D_ *)0x0)) {
                if (iRam_? != 0) {
                  uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
                  puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar11 = *puVar10;
                    LOCK();
                    uVar12 = *puVar10;
                    if (uVar11 == uVar12) {
                      *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar11 != uVar12);
                }
                pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
                uStack_14 = 0;
                LStack_15._8_8_ = pLStack_13;
                LStack_15._current = (Object *)0x0;
                uStack_9 = 0;
                pLStack_13 = &LStack_15;
                LStack_15._list = (List_1_System_Object_ *)pLVar7;
                while (bVar16 = mscorlib.dll::System::Collections::Generic::
                                List`1[T]+Enumerator[System::Object]::
                                List_1_T_Enumerator_System_Object__MoveNext
                                          (&LStack_15,
                                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                                          ), bVar16 != 0) {
                  if (LStack_15._current == (Object *)0x0) goto code_?;
                  (*(code *)(LStack_15._current)->klass[1]._0.nestedTypes)
                            (LStack_15._current,camera,
                             (LStack_15._current)->klass[1]._0.implementedInterfaces);
                }
                pGVar5 = (this->fields)._rtCamLookSlider;
                if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                  (*(pGVar5->klass->vtable).Render_1.methodPtr)
                            (pGVar5,camera,(pGVar5->klass->vtable).Render_1.method);
                  pGVar6 = (this->fields)._mvXYSlider;
                  if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                    (*(pGVar6->klass->vtable).Render_1.methodPtr)
                              (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
                    pGVar6 = (this->fields)._mvYZSlider;
                    if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                      (*(pGVar6->klass->vtable).Render_1.methodPtr)
                                (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
                      pGVar6 = (this->fields)._mvZXSlider;
                      if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                        (*(pGVar6->klass->vtable).Render_1.methodPtr)
                                  (pGVar6,camera,(pGVar6->klass->vtable).Render_1.method);
                        pGVar4 = (this->fields)._scMidCap;
                        if (pGVar4 != (GizmoCap3D *)0x0) {
                          (*(pGVar4->klass->vtable).Render_1.methodPtr)
                                    (pGVar4,camera,(pGVar4->klass->vtable).Render_1.method);
                          pGVar17 = (this->fields)._mvVertSnapCap;
                          if (pGVar17 != (GizmoCap2D *)0x0) {
                            (*(pGVar17->klass->vtable).Render_1.methodPtr)(pGVar17,camera);
                            this_00 = (this->fields)._mv2DModeSliders;
                            if (this_00 != (GizmoLineSlider2DCollection *)0x0) {
                              GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
                                        (this_00,camera,(MethodInfo *)0x0);
                              pGVar5 = (this->fields)._mv2DModeDblSlider;
                              if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                                (*(pGVar5->klass->vtable).Render_1.methodPtr)
                                          (pGVar5,camera,(pGVar5->klass->vtable).Render_1.method);
                                lVar18 = 0x160;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                  lVar18 = 0x168;
                                }
                                lVar18 = *(longlong *)((longlong)&this->klass + lVar18);
                                if (lVar18 != 0) {
                                  if (*(char *)(lVar18 + 0xc0) != '\0') {
                                    pGVar19 = (this->fields)._._gizmo;
                                    if (pGVar19 == (Gizmo *)0x0) goto code_?;
                                    if ((pGVar19->fields)._dragInfo._isDragged != 0) {
                                      pGVar4 = (this->fields)._scMidCap;
                                      if ((pGVar4 == (GizmoCap3D *)0x0) ||
                                         (pGVar20 = (pGVar4->fields)._._handle,
                                         pGVar20 == (GizmoHandle *)0x0)) goto code_?;
                                      if ((pGVar20->fields)._id ==
                                          (pGVar19->fields)._dragInfo._handleId) {
                                        this_01 = (this->fields)._scScaleGuide;
                                        gameObjects = (this->fields)._scScaleGuideTargetObjects;
                                        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c ==
                                            0) {
                                          FUN_?();
                                        }
                                        gameObjects_00 =
                                             GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                                       (gameObjects,(MethodInfo *)0x0);
                                        if (this_01 == (GizmoScaleGuide *)0x0)
                                        goto code_?;
                                        GizmoScaleGuide::GizmoScaleGuide_Render
                                                  (this_01,(IEnumerable_1_UnityEngine_GameObject_ *)
                                                           gameObjects_00,camera,(MethodInfo *)0x0);
                                      }
                                    }
                                  }
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
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoTransformChanged
               (UniversalGizmo *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  if ((changeData.ChangeReason == 1) || (iStackX_1c = changeData.TRSDimension, iStackX_1c == 2)) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    UniversalGizmo_UpdateRtCamLookSlider(this,camera,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoUpdateBegin
               (UniversalGizmo *this,MethodInfo *method)

{
  lVar1 = 0x170;
  if ((this->fields)._use2DModeEnableHotkey != 0) {
    lVar2 = 0x170;
    if ((this->fields)._sharedHotkeys != (UniversalGizmoHotkeys *)0x0) {
      lVar2 = 0x178;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if ((lVar2 == 0) || (pHVar3 = *(Hotkeys **)(lVar2 + 0x28), pHVar3 == (Hotkeys *)0x0))
    goto code_?;
    bVar4 = Hotkeys::Hotkeys_IsActive(pHVar3,1,(MethodInfo *)0x0);
    UniversalGizmo_Set2DModeEnabled(this,bVar4,(MethodInfo *)0x0);
  }
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  fVar5 = _UNK_?;
  bVar6 = false;
  lVar2 = 0x160;
  if ((this->fields)._is2DModeEnabled == 0) {
    bVar4 = (this->fields)._isMvVertexSnapEnabled;
    if (bVar4 == 0) {
      pGVar7 = (this->fields)._._gizmo;
      if ((pGVar7 == (Gizmo *)0x0) ||
         (pGVar8 = (pGVar7->fields)._transform, pGVar8 == (GizmoTransform *)0x0))
      goto code_?;
      fVar9 = (pGVar8->fields)._position3D.y;
      fVar10 = (pGVar8->fields)._position3D.z;
      (this->fields)._mvPostVSnapPosRestore.x = (pGVar8->fields)._position3D.x;
      (this->fields)._mvPostVSnapPosRestore.y = fVar9;
      (this->fields)._mvPostVSnapPosRestore.z = fVar10;
    }
    if ((this->fields)._useVertSnapEnableHotkey != 0) {
      if ((this->fields)._sharedHotkeys != (UniversalGizmoHotkeys *)0x0) {
        lVar1 = 0x178;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 == 0) || (pHVar3 = *(Hotkeys **)(lVar1 + 0x30), pHVar3 == (Hotkeys *)0x0))
      goto code_?;
      bVar11 = Hotkeys::Hotkeys_IsActive(pHVar3,1,(MethodInfo *)0x0);
      if (((this->fields)._isMvVertexSnapEnabled != bVar11) &&
         (((this->fields)._is2DModeEnabled == 0 && ((this->fields)._._isEnabled != 0)))) {
        pGVar7 = (this->fields)._._gizmo;
        if (pGVar7 == (Gizmo *)0x0) goto code_?;
        if ((pGVar7->fields)._dragInfo._isDragged == 0) {
          pGVar12 = (this->fields)._mvVertSnapCap;
          if (bVar11 == 0) {
            if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
            if ((pGVar12->fields)._._isVisible != 0) {
              pGVar13 = pGVar12->klass;
              (pGVar12->fields)._._isVisible = 0;
              (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)();
            }
            pGVar14 = (this->fields)._scMidCap;
            if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
            if ((pGVar14->fields)._._isVisible != 1) {
              (pGVar14->fields)._._isVisible = 1;
code_?:
              (*(pGVar14->klass->vtable).OnVisibilityStateChanged.methodPtr)();
            }
          }
          else {
            if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
            if ((pGVar12->fields)._._isVisible != 1) {
              pGVar13 = pGVar12->klass;
              (pGVar12->fields)._._isVisible = 1;
              (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)();
            }
            this_00 = (this->fields)._mvDblSliders;
            if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                      (this_00,0,1,(MethodInfo *)0x0);
            UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
            pGVar14 = (this->fields)._scMidCap;
            if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
            if ((pGVar14->fields)._._isVisible != 0) {
              (pGVar14->fields)._._isVisible = 0;
              goto code_?;
            }
          }
          (this->fields)._isMvVertexSnapEnabled = bVar11;
        }
      }
    }
    if ((bVar4 != 0) && ((this->fields)._isMvVertexSnapEnabled == 0)) {
      pGVar7 = (this->fields)._._gizmo;
      if ((pGVar7 == (Gizmo *)0x0) ||
         (pGVar8 = (pGVar7->fields)._transform, pGVar8 == (GizmoTransform *)0x0))
      goto code_?;
      if ((pGVar8->fields)._firingChanged3DEvent == 0) {
        uVar15 = (pGVar8->fields)._position3D.x;
        uVar16 = (pGVar8->fields)._position3D.y;
        uVar17 = (this->fields)._mvPostVSnapPosRestore.x;
        uVar18 = (this->fields)._mvPostVSnapPosRestore.y;
        fVar10 = (pGVar8->fields)._position3D.z - (this->fields)._mvPostVSnapPosRestore.z;
        if (fVar5 <= ((float)uVar16 - (float)uVar18) * ((float)uVar16 - (float)uVar18) +
                      ((float)uVar15 - (float)uVar17) * ((float)uVar15 - (float)uVar17) +
                      fVar10 * fVar10) {
          fVar9 = (this->fields)._mvPostVSnapPosRestore.y;
          fVar10 = (this->fields)._mvPostVSnapPosRestore.z;
          (pGVar8->fields)._position3D.x = (this->fields)._mvPostVSnapPosRestore.x;
          (pGVar8->fields)._position3D.y = fVar9;
          (pGVar8->fields)._position3D.z = fVar10;
          GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar8,(MethodInfo *)0x0);
        }
      }
    }
    pGVar7 = (this->fields)._._gizmo;
    if (pGVar7 == (Gizmo *)0x0) goto code_?;
    if ((pGVar7->fields)._dragInfo._isDragged != 0) {
      bVar4 = UniversalGizmo_IsMoveHandle
                         (this,(pGVar7->fields)._dragInfo._handleId,(MethodInfo *)0x0);
      if (bVar4 == 0) goto code_?;
    }
    pGVar19 = (this->fields)._mvPXSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x20) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvPXSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x20) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar19 = (this->fields)._mvPYSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x21) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvPYSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x21) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar19 = (this->fields)._mvPZSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x22) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvPZSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x22) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar19 = (this->fields)._mvNXSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 4) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x23) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvNXSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 4) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x23) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar19 = (this->fields)._mvNYSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 5) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x24) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvNYSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 5) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x24) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar19 = (this->fields)._mvNZSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 6) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    pGVar20 = pGVar19->klass;
    (pGVar19->fields)._._isVisible = *(char *)(lVar1 + 0x25) != '\0';
    (*(pGVar20->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar19,(pGVar20->vtable).OnVisibilityStateChanged.method);
    pGVar19 = (this->fields)._mvNZSlider;
    lVar1 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar1 = 0x168;
    }
    lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0))
    goto code_?;
    if (*(uint *)(lVar1 + 0x18) < 6) goto code_?;
    if (pGVar19 == (GizmoLineSlider3D *)0x0) goto code_?;
    bVar21 = *(char *)(lVar1 + 0x25) != '\0';
    pGVar14 = (pGVar19->fields)._cap3D;
    if (pGVar14 == (GizmoCap3D *)0x0) goto code_?;
    if ((bool)(pGVar14->fields)._._isVisible != bVar21) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar21;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
  }
code_?:
  if ((this->fields)._isMvVertexSnapEnabled == 0) {
    if ((this->fields)._is2DModeEnabled == 0) {
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 == (Gizmo *)0x0) goto code_?;
      if ((pGVar7->fields)._dragInfo._isDragged != 0) {
        bVar4 = UniversalGizmo_IsMoveHandle
                           (this,(pGVar7->fields)._dragInfo._handleId,(MethodInfo *)0x0);
        if (bVar4 == 0) goto code_?;
      }
      pGVar23 = (this->fields)._mvXYSlider;
      lVar1 = 0x160;
      if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
        lVar1 = 0x168;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
      goto code_?;
      if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      pGVar24 = pGVar23->klass;
      (pGVar23->fields)._._isVisible = *(char *)(lVar1 + 0x20) != '\0';
      (*(pGVar24->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar23,(pGVar24->vtable).OnVisibilityStateChanged.method);
      pGVar23 = (this->fields)._mvXYSlider;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                ((this->fields)._mvXYSlider,(pGVar23->fields)._._isVisible,(MethodInfo *)0x0);
      pGVar23 = (this->fields)._mvYZSlider;
      lVar1 = 0x160;
      if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
        lVar1 = 0x168;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
      goto code_?;
      if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      pGVar24 = pGVar23->klass;
      (pGVar23->fields)._._isVisible = *(char *)(lVar1 + 0x21) != '\0';
      (*(pGVar24->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar23,(pGVar24->vtable).OnVisibilityStateChanged.method);
      pGVar23 = (this->fields)._mvYZSlider;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                ((this->fields)._mvYZSlider,(pGVar23->fields)._._isVisible,(MethodInfo *)0x0);
      pGVar23 = (this->fields)._mvZXSlider;
      lVar1 = 0x160;
      if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
        lVar1 = 0x168;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
      goto code_?;
      if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      pGVar24 = pGVar23->klass;
      (pGVar23->fields)._._isVisible = *(char *)(lVar1 + 0x22) != '\0';
      (*(pGVar24->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar23,(pGVar24->vtable).OnVisibilityStateChanged.method);
      pGVar23 = (this->fields)._mvZXSlider;
      if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                ((this->fields)._mvZXSlider,(pGVar23->fields)._._isVisible,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 == (Gizmo *)0x0) goto code_?;
      pCVar25 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
      UniversalGizmo_PlaceMvDblSlidersInSliderPlanes(this,pCVar25,(MethodInfo *)0x0);
    }
    else {
      if ((this->fields)._isMvVertexSnapEnabled != 0) goto code_?;
      if ((this->fields)._is2DModeEnabled != 0) {
        pGVar7 = (this->fields)._._gizmo;
        if (pGVar7 == (Gizmo *)0x0) goto code_?;
        if ((pGVar7->fields)._dragInfo._isDragged != 0) {
          bVar4 = UniversalGizmo_IsMoveHandle
                             (this,(pGVar7->fields)._dragInfo._handleId,(MethodInfo *)0x0);
          if (bVar4 == 0) goto code_?;
        }
        pGVar26 = (this->fields)._mvP2DModeXSlider;
        lVar27 = 0x150;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
        goto code_?;
        if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        pGVar28 = pGVar26->klass;
        (pGVar26->fields)._._isVisible = *(char *)(lVar1 + 0x20) != '\0';
        (*(pGVar28->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar26,(pGVar28->vtable).OnVisibilityStateChanged.method);
        pGVar26 = (this->fields)._mvP2DModeXSlider;
        uVar29 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          uVar29 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar29);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 == 0))
        goto code_?;
        if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        bVar21 = *(char *)(lVar1 + 0x20) != '\0';
        pGVar12 = (pGVar26->fields)._cap2D;
        if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
        if ((bool)(pGVar12->fields)._._isVisible != bVar21) {
          pGVar13 = pGVar12->klass;
          (pGVar12->fields)._._isVisible = bVar21;
          (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar12,(pGVar13->vtable).OnVisibilityStateChanged.method);
        }
        pGVar26 = (this->fields)._mvP2DModeYSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        pGVar28 = pGVar26->klass;
        (pGVar26->fields)._._isVisible = *(char *)(lVar1 + 0x21) != '\0';
        (*(pGVar28->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar26,(pGVar28->vtable).OnVisibilityStateChanged.method);
        pGVar26 = (this->fields)._mvP2DModeYSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 2) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        bVar21 = *(char *)(lVar1 + 0x21) != '\0';
        pGVar12 = (pGVar26->fields)._cap2D;
        if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
        if ((bool)(pGVar12->fields)._._isVisible != bVar21) {
          pGVar13 = pGVar12->klass;
          (pGVar12->fields)._._isVisible = bVar21;
          (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar12,(pGVar13->vtable).OnVisibilityStateChanged.method);
        }
        pGVar26 = (this->fields)._mvN2DModeXSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        pGVar28 = pGVar26->klass;
        (pGVar26->fields)._._isVisible = *(char *)(lVar1 + 0x22) != '\0';
        (*(pGVar28->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar26,(pGVar28->vtable).OnVisibilityStateChanged.method);
        pGVar26 = (this->fields)._mvN2DModeXSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 3) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        bVar21 = *(char *)(lVar1 + 0x22) != '\0';
        pGVar12 = (pGVar26->fields)._cap2D;
        if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
        if ((bool)(pGVar12->fields)._._isVisible != bVar21) {
          pGVar13 = pGVar12->klass;
          (pGVar12->fields)._._isVisible = bVar21;
          (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar12,(pGVar13->vtable).OnVisibilityStateChanged.method);
        }
        pGVar26 = (this->fields)._mvN2DModeYSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 4) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        pGVar28 = pGVar26->klass;
        (pGVar26->fields)._._isVisible = *(char *)(lVar1 + 0x23) != '\0';
        (*(pGVar28->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar26,(pGVar28->vtable).OnVisibilityStateChanged.method);
        pGVar26 = (this->fields)._mvN2DModeYSlider;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 == 0))
        goto code_?;
        if (*(uint *)(lVar1 + 0x18) < 4) goto code_?;
        if (pGVar26 == (GizmoLineSlider2D *)0x0) goto code_?;
        bVar21 = *(char *)(lVar1 + 0x23) != '\0';
        pGVar12 = (pGVar26->fields)._cap2D;
        if (pGVar12 == (GizmoCap2D *)0x0) goto code_?;
        if ((bool)(pGVar12->fields)._._isVisible != bVar21) {
          pGVar13 = pGVar12->klass;
          (pGVar12->fields)._._isVisible = bVar21;
          (*(pGVar13->vtable).OnVisibilityStateChanged.methodPtr)
                    (pGVar12,(pGVar13->vtable).OnVisibilityStateChanged.method);
        }
        pGVar30 = (this->fields)._mv2DModeDblSlider;
        if (pGVar30 == (GizmoPlaneSlider2D *)0x0) goto code_?;
        bVar4 = (pGVar30->fields)._._isVisible;
        lVar1 = 0x150;
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar1 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if (lVar1 == 0) goto code_?;
        pGVar30 = (this->fields)._mv2DModeDblSlider;
        pGVar31 = pGVar30->klass;
        (pGVar30->fields)._._isVisible = *(bool *)(lVar1 + 0x40);
        (*(pGVar31->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar30,(pGVar31->vtable).OnVisibilityStateChanged.method);
        if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
          lVar27 = 0x158;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar27);
        if ((lVar1 == 0) ||
           (pGVar30 = (this->fields)._mv2DModeDblSlider, pGVar30 == (GizmoPlaneSlider2D *)0x0))
        goto code_?;
        GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
                  (pGVar30,*(bool *)(lVar1 + 0x40),(MethodInfo *)0x0);
        if (bVar4 == 0) {
          pGVar30 = (this->fields)._mv2DModeDblSlider;
          if (pGVar30 == (GizmoPlaneSlider2D *)0x0) goto code_?;
          if ((pGVar30->fields)._._isVisible != 0) {
            UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  else {
code_?:
    pGVar32 = (this->fields)._mvVertexSnapDrag;
    if (pGVar32 == (GizmoObjectVertexSnapDrag3D *)0x0) goto code_?;
    cVar33 = (*(pGVar32->klass->vtable).get_IsActive_1.methodPtr)
                       (pGVar32,(pGVar32->klass->vtable).get_IsActive_1.method);
    if (cVar33 == '\0') {
      pGVar32 = (this->fields)._mvVertexSnapDrag;
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar32 == (GizmoObjectVertexSnapDrag3D *)0x0) goto code_?;
      if ((pGVar32->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
        cVar33 = (*(pGVar32->klass->vtable).get_IsActive_1.methodPtr)(pGVar32);
        if (cVar33 == '\0') {
          if (pGVar7 == (Gizmo *)0x0) goto code_?;
          pCVar25 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
          bVar4 = GizmoObjectVertexSnapDrag3D::
                   GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                             (pGVar32,pCVar25,(pGVar32->fields)._targetObjects,
                              &(pGVar32->fields)._snapPivot,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pGVar7 = (this->fields)._._gizmo;
            if (((pGVar7 == (Gizmo *)0x0) ||
                (pGVar32 = (this->fields)._mvVertexSnapDrag,
                pGVar32 == (GizmoObjectVertexSnapDrag3D *)0x0)) ||
               (pGVar8 = (pGVar7->fields)._transform, pGVar8 == (GizmoTransform *)0x0))
            goto code_?;
            if ((pGVar8->fields)._firingChanged3DEvent == 0) {
              uVar34 = (pGVar8->fields)._position3D.x;
              uVar35 = (pGVar8->fields)._position3D.y;
              uVar36 = (pGVar32->fields)._snapPivot.x;
              uVar37 = (pGVar32->fields)._snapPivot.y;
              fVar10 = (pGVar8->fields)._position3D.z - (pGVar32->fields)._snapPivot.z;
              if (fVar5 <= ((float)uVar35 - (float)uVar37) * ((float)uVar35 - (float)uVar37) +
                            ((float)uVar34 - (float)uVar36) * ((float)uVar34 - (float)uVar36) +
                            fVar10 * fVar10) {
                fVar10 = (pGVar32->fields)._snapPivot.y;
                fVar5 = (pGVar32->fields)._snapPivot.z;
                (pGVar8->fields)._position3D.x = (pGVar32->fields)._snapPivot.x;
                (pGVar8->fields)._position3D.y = fVar10;
                (pGVar8->fields)._position3D.z = fVar5;
                GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar8,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  fVar5 = _UNK_?;
  lVar1 = 0x140;
  if (((this->fields)._is2DModeEnabled == 0) && ((this->fields)._isMvVertexSnapEnabled == 0)) {
    pGVar7 = (this->fields)._._gizmo;
    if (pGVar7 == (Gizmo *)0x0) goto code_?;
    if ((pGVar7->fields)._dragInfo._isDragged != 0) {
      bVar4 = UniversalGizmo_IsRotationHandle
                         (this,(pGVar7->fields)._dragInfo._handleId,(MethodInfo *)0x0);
      if (bVar4 == 0) goto code_?;
    }
    lVar27 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar27 = 0x168;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) || (pGVar14 = (this->fields)._rtMidCap, pGVar14 == (GizmoCap3D *)0x0))
    goto code_?;
    bVar4 = *(bool *)(lVar27 + 0x60);
    if ((pGVar14->fields)._._isVisible != bVar4) {
      pGVar22 = pGVar14->klass;
      (pGVar14->fields)._._isVisible = bVar4;
      (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
    }
    pGVar38 = (this->fields)._rtCamXYRotationDrag;
    lVar27 = 0x140;
    if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
      lVar27 = 0x148;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) || (lVar27 = *(longlong *)(lVar27 + 0x50), lVar27 == 0))
    goto code_?;
    if (*(int *)(lVar27 + 0x18) == 0) goto code_?;
    if ((*(longlong *)(lVar27 + 0x20) == 0) || (pGVar38 == (GizmoDblAxisRotationDrag3D *)0x0))
    goto code_?;
    fVar10 = *(float *)(*(longlong *)(lVar27 + 0x20) + 0x4c);
    fVar9 = fVar5;
    if (fVar5 <= fVar10) {
      fVar9 = fVar10;
    }
    (pGVar38->fields)._._sensitivity = fVar9;
    pGVar23 = (this->fields)._rtXSlider;
    lVar27 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar27 = 0x168;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) || (lVar27 = *(longlong *)(lVar27 + 0x70), lVar27 == 0))
    goto code_?;
    if (*(int *)(lVar27 + 0x18) == 0) goto code_?;
    if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
    GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
              (pGVar23,*(char *)(lVar27 + 0x20) != '\0',(MethodInfo *)0x0);
    pGVar23 = (this->fields)._rtYSlider;
    lVar27 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar27 = 0x168;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) || (lVar27 = *(longlong *)(lVar27 + 0x70), lVar27 == 0))
    goto code_?;
    if (*(uint *)(lVar27 + 0x18) < 2) goto code_?;
    if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
    GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
              (pGVar23,*(char *)(lVar27 + 0x21) != '\0',(MethodInfo *)0x0);
    pGVar23 = (this->fields)._rtZSlider;
    lVar27 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar27 = 0x168;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) || (lVar27 = *(longlong *)(lVar27 + 0x70), lVar27 == 0))
    goto code_?;
    if (*(uint *)(lVar27 + 0x18) < 3) goto code_?;
    if (pGVar23 == (GizmoPlaneSlider3D *)0x0) goto code_?;
    GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
              (pGVar23,*(char *)(lVar27 + 0x22) != '\0',(MethodInfo *)0x0);
    lVar27 = 0x160;
    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
      lVar27 = 0x168;
    }
    lVar27 = *(longlong *)((longlong)&this->klass + lVar27);
    if ((lVar27 == 0) ||
       (pGVar30 = (this->fields)._rtCamLookSlider, pGVar30 == (GizmoPlaneSlider2D *)0x0))
    goto code_?;
    GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
              (pGVar30,*(bool *)(lVar27 + 0x80),(MethodInfo *)0x0);
    pGVar30 = (this->fields)._rtCamLookSlider;
    if (pGVar30 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    if ((pGVar30->fields)._isBorderVisible != 0) {
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 == (Gizmo *)0x0) goto code_?;
      pCVar25 = Gizmo::Gizmo_get_FocusCamera(pGVar7,(MethodInfo *)0x0);
      UniversalGizmo_UpdateRtCamLookSlider(this,pCVar25,(MethodInfo *)0x0);
    }
  }
code_?:
  pGVar14 = (this->fields)._scMidCap;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0x168;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xb0) != '\0') {
      bVar6 = (this->fields)._is2DModeEnabled == 0;
    }
    if (pGVar14 != (GizmoCap3D *)0x0) {
      if ((bool)(pGVar14->fields)._._isVisible != bVar6) {
        pGVar22 = pGVar14->klass;
        (pGVar14->fields)._._isVisible = bVar6;
        (*(pGVar22->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar14,(pGVar22->vtable).OnVisibilityStateChanged.method);
      }
      pGVar39 = (this->fields)._scUnformScaleDrag;
      if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
        lVar1 = 0x148;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar40 = (code *)swi(3);
          (*pcVar40)();
          return;
        }
        if ((*(longlong *)(lVar1 + 0x20) != 0) && (pGVar39 != (GizmoUniformScaleDrag3D *)0x0)) {
          fVar10 = *(float *)(*(longlong *)(lVar1 + 0x20) + 0x34);
          if (fVar5 <= fVar10) {
            fVar5 = fVar10;
          }
          (pGVar39->fields)._._sensitivity = fVar5;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OwnsHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = UniversalGizmo_IsMoveHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = UniversalGizmo_IsRotationHandle(this,handleId,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = (this->fields)._scMidCap;
      if ((pGVar2 != (GizmoCap3D *)0x0) &&
         (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
        return (pGVar3->fields)._id == handleId;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar1 = (*pcVar4)();
      return bVar1;
    }
  }
  return 1;
}


/* Void PlaceMvDblSlidersInSliderPlanes(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvXYSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar1->fields)._._isVisible != 0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 == (Gizmo *)0x0) goto code_?;
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                ((this->fields)._mvXYSlider,(pGVar2->fields)._transform,PlaneId__Enum_XY,
                 (this->fields)._mvPXSlider,(this->fields)._mvPYSlider,camera,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._mvYZSlider;
    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != 0) {
        pGVar2 = (this->fields)._._gizmo;
        if (pGVar2 == (Gizmo *)0x0) goto code_?;
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                  ((this->fields)._mvYZSlider,(pGVar2->fields)._transform,PlaneId__Enum_YZ,
                   (this->fields)._mvPYSlider,(this->fields)._mvPZSlider,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._mvZXSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar1->fields)._._isVisible != 0) {
          pGVar2 = (this->fields)._._gizmo;
          if (pGVar2 == (Gizmo *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                    ((this->fields)._mvZXSlider,(pGVar2->fields)._transform,PlaneId__Enum_ZX,
                     (this->fields)._mvPZSlider,(this->fields)._mvPXSlider,camera,(MethodInfo *)0x0)
          ;
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set2DModeEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Set2DModeEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._is2DModeEnabled != isEnabled) &&
      ((this->fields)._isMvVertexSnapEnabled == 0)) && ((this->fields)._._isEnabled != 0)) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    if (isEnabled == 0) {
      UniversalGizmo_Hide2DModeHandles(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._scMidCap;
      if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
      if ((pGVar2->fields)._._isVisible != 1) {
        pGVar3 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 1;
        (*(pGVar3->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar2,(pGVar3->vtable).OnVisibilityStateChanged.method);
        (this->fields)._is2DModeEnabled = 0;
        return;
      }
    }
    else {
      pGVar4 = (this->fields)._mv2DModeSliders;
      if (pGVar4 == (GizmoLineSlider2DCollection *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
                (pGVar4,1,(MethodInfo *)0x0);
      pGVar4 = (this->fields)._mv2DModeSliders;
      if (pGVar4 == (GizmoLineSlider2DCollection *)0x0) goto code_?;
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                (pGVar4,1,(MethodInfo *)0x0);
      pGVar6 = (this->fields)._mv2DModeDblSlider;
      if (pGVar6 == (GizmoPlaneSlider2D *)0x0) goto code_?;
      pGVar7 = pGVar6->klass;
      (pGVar6->fields)._._isVisible = 1;
      (*(pGVar7->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar6,(pGVar7->vtable).OnVisibilityStateChanged.method);
      pGVar6 = (this->fields)._mv2DModeDblSlider;
      if (pGVar6 == (GizmoPlaneSlider2D *)0x0) goto code_?;
      GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar6,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._gizmo;
      if (((pGVar1 == (Gizmo *)0x0) ||
          (pGVar8 = (pGVar1->fields)._transform, pGVar8 == (GizmoTransform *)0x0)) ||
         (pGVar4 = (this->fields)._mv2DModeSliders, pGVar4 == (GizmoLineSlider2DCollection *)0x0))
      goto code_?;
      VStack_9.x = (pGVar8->fields)._position3D.x;
      VStack_9.y = (pGVar8->fields)._position3D.y;
      VStack_9.z = (pGVar8->fields)._position3D.z;
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetOffsetDragOrigin
                (pGVar4,&VStack_9,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._gizmo;
      if (((pGVar1 == (Gizmo *)0x0) ||
          (pGVar8 = (pGVar1->fields)._transform, pGVar8 == (GizmoTransform *)0x0)) ||
         (pGVar6 = (this->fields)._mv2DModeDblSlider, pGVar6 == (GizmoPlaneSlider2D *)0x0))
      goto code_?;
      fVar10 = (pGVar8->fields)._position3D.y;
      fVar11 = (pGVar8->fields)._position3D.z;
      (pGVar6->fields)._offsetDragOrigin.x = (pGVar8->fields)._position3D.x;
      (pGVar6->fields)._offsetDragOrigin.y = fVar10;
      (pGVar6->fields)._offsetDragOrigin.z = fVar11;
      UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
      UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._scMidCap;
      if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
      if ((pGVar2->fields)._._isVisible != 0) {
        pGVar3 = pGVar2->klass;
        (pGVar2->fields)._._isVisible = 0;
        (*(pGVar3->vtable).OnVisibilityStateChanged.methodPtr)();
      }
      UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
      UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
    }
    (this->fields)._is2DModeEnabled = isEnabled;
  }
  return;
}


/* Void SetMoveHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMoveHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  this_00 = (this->fields)._mvDblSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
              (this_00,visible,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mvAxesSliders;
    if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetVisible
                (pGVar1,visible,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvAxesSliders;
      if (pGVar1 != (GizmoLineSlider3DCollection *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                        ,visible,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        LStack_2._list = (List_1_System_Object_ *)(pGVar1->fields)._sliders;
        if ((List_1_RTG_GizmoLineSlider3D_ *)LStack_2._list == (List_1_RTG_GizmoLineSlider3D_ *)0x0
           ) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        puStack_9 = (undefined1 *)
                     ((ulonglong)
                      (uint)(((List_1_RTG_GizmoLineSlider3D_ *)LStack_2._list)->fields)._version <<
                     0x20);
        puStack_10 = (undefined *)0x0;
        LStack_2._8_8_ = puStack_9;
        LStack_2._current = (Object *)0x0;
        uStack_5 = 0;
        puStack_9 = (undefined1 *)&LStack_2;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                            );
          if (bVar11 == 0) {
            return;
          }
          if (LStack_2._current == (Object *)0x0) break;
          pOVar12 = LStack_2._current[10].klass;
          if (pOVar12 == (Object__Class *)0x0) {
            FUN_?();
            break;
          }
          if (*(bool *)&(pOVar12->_0).byval_arg.data != visible) {
            *(bool *)&(pOVar12->_0).byval_arg.data = visible;
            pIVar13 = (pOVar12->_0).image;
            uVar14._0_4_ = pIVar13[7].typeCount;
            uVar14._4_4_ = pIVar13[7].exportedTypeCount;
            (*(code *)pIVar13[7].assembly)(pOVar12,uVar14);
          }
        }
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvAxesLinesHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvAxesLinesHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvPXSlider;
  if (pGVar1 != (GizmoLineSlider3D *)0x0) {
    (pGVar1->fields)._._isHoverable = hoverable;
    (*(pGVar1->klass->vtable).OnHoverableStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnHoverableStateChanged.method);
    pGVar1 = (this->fields)._mvNXSlider;
    if (pGVar1 != (GizmoLineSlider3D *)0x0) {
      pGVar2 = pGVar1->klass;
      (pGVar1->fields)._._isHoverable = hoverable;
      (*(pGVar2->vtable).OnHoverableStateChanged.methodPtr)
                (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.method);
      pGVar1 = (this->fields)._mvPYSlider;
      if (pGVar1 != (GizmoLineSlider3D *)0x0) {
        pGVar2 = pGVar1->klass;
        (pGVar1->fields)._._isHoverable = hoverable;
        (*(pGVar2->vtable).OnHoverableStateChanged.methodPtr)
                  (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.method);
        pGVar1 = (this->fields)._mvNYSlider;
        if (pGVar1 != (GizmoLineSlider3D *)0x0) {
          pGVar2 = pGVar1->klass;
          (pGVar1->fields)._._isHoverable = hoverable;
          (*(pGVar2->vtable).OnHoverableStateChanged.methodPtr)
                    (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.method);
          pGVar1 = (this->fields)._mvPZSlider;
          if (pGVar1 != (GizmoLineSlider3D *)0x0) {
            pGVar2 = pGVar1->klass;
            (pGVar1->fields)._._isHoverable = hoverable;
            (*(pGVar2->vtable).OnHoverableStateChanged.methodPtr)
                      (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.method);
            pGVar1 = (this->fields)._mvNZSlider;
            if (pGVar1 != (GizmoLineSlider3D *)0x0) {
              pGVar2 = pGVar1->klass;
              (pGVar1->fields)._._isHoverable = hoverable;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pGVar2->vtable).OnHoverableStateChanged.methodPtr)
                        (pGVar1,(pGVar2->vtable).OnHoverableStateChanged.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvVertexSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((this->fields)._isMvVertexSnapEnabled == isEnabled) {
    return;
  }
  if ((this->fields)._is2DModeEnabled != 0) {
    return;
  }
  if ((this->fields)._._isEnabled == 0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) goto code_?;
  if ((pGVar1->fields)._dragInfo._isDragged != 0) {
    return;
  }
  pGVar2 = (this->fields)._mvVertSnapCap;
  if (isEnabled == 0) {
    if (pGVar2 == (GizmoCap2D *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pGVar2->fields)._._isVisible != 0) {
      (pGVar2->fields)._._isVisible = 0;
      (*(pGVar2->klass->vtable).OnVisibilityStateChanged.methodPtr)
                (pGVar2,(pGVar2->klass->vtable).OnVisibilityStateChanged.method);
    }
    pGVar4 = (this->fields)._scMidCap;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    if ((pGVar4->fields)._._isVisible == 1) goto code_?;
    (pGVar4->fields)._._isVisible = 1;
  }
  else {
    if (pGVar2 == (GizmoCap2D *)0x0) goto code_?;
    if ((pGVar2->fields)._._isVisible != 1) {
      pGVar5 = pGVar2->klass;
      (pGVar2->fields)._._isVisible = 1;
      (*(pGVar5->vtable).OnVisibilityStateChanged.methodPtr)();
    }
    this_00 = (this->fields)._mvDblSliders;
    if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
              (this_00,0,1,(MethodInfo *)0x0);
    UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._scMidCap;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    if ((pGVar4->fields)._._isVisible == 0) goto code_?;
    (pGVar4->fields)._._isVisible = 0;
  }
  (*(pGVar4->klass->vtable).OnVisibilityStateChanged.methodPtr)
            (pGVar4,(pGVar4->klass->vtable).OnVisibilityStateChanged.method);
code_?:
  (this->fields)._isMvVertexSnapEnabled = isEnabled;
  return;
}


/* Void SetMvVertexSnapTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
               (UniversalGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertexSnapDrag;
  if (pGVar1 == (GizmoObjectVertexSnapDrag3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                    (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method,0);
  if ((cVar3 == '\0') &&
     (bVar4 = iRam_? != 0, (pGVar1->fields)._targetObjects = targetObjects, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pGVar1->fields)._targetObjects >> 0xc);
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
  return;
}


/* Void SetRotationHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetRotationHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  this_00 = (this->fields)._rtAxesSliders;
  if (this_00 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetBorderVisible
              (this_00,visible,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._rtMidCap;
    if (pGVar1 != (GizmoCap3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != visible) {
        pGVar2 = pGVar1->klass;
        (pGVar1->fields)._._isVisible = visible;
        (*(pGVar2->vtable).OnVisibilityStateChanged.methodPtr)
                  (pGVar1,(pGVar2->vtable).OnVisibilityStateChanged.method);
      }
      pGVar3 = (this->fields)._rtCamLookSlider;
      if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController,visible,0,in_R9,unaff_RDI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (visible == (pGVar3->fields)._isBorderVisible) {
          return;
        }
        (pGVar3->fields)._isBorderVisible = visible;
        lVar4 = 0x110;
        if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
          lVar4 = 0x108;
        }
        lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
        if ((lVar4 != 0) &&
           (pIVar5 = (pGVar3->fields)._controllers,
           pIVar5 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
          uVar6 = *(uint *)(lVar4 + 0x14);
          if ((uint)pIVar5->max_length <= uVar6) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (pIVar5->vector[(int)uVar6] != (IGizmoPlaneSlider2DController *)0x0) {
            FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
            return;
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetRtMidCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetRtMidCapHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if (pGVar1 == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._._isHoverable != hoverable) {
    (pGVar1->fields)._._isHoverable = hoverable;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable).OnHoverableStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnHoverableStateChanged.method);
    return;
  }
  return;
}


/* Void SetScaleHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetScaleHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  pGVar1 = (this->fields)._scMidCap;
  if (pGVar1 == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._._isVisible != visible) {
    (pGVar1->fields)._._isVisible = visible;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnVisibilityStateChanged.method);
    return;
  }
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetSnapEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  this_00 = (this->fields)._mvAxesSliders;
  if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
              (this_00,isEnabled,(MethodInfo *)0x0);
    this_01 = (this->fields)._mv2DModeSliders;
    if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                (this_01,isEnabled,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvDblSliders;
      if (pGVar1 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                  (pGVar1,isEnabled,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._mv2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          (*(pGVar2->klass->vtable).SetSnapEnabled_1.methodPtr)(pGVar2,(ulonglong)isEnabled);
          pGVar1 = (this->fields)._rtAxesSliders;
          if (pGVar1 != (GizmoPlaneSlider3DCollection *)0x0) {
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                      (pGVar1,isEnabled,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._rtCamXYRotationDrag;
            if (pGVar3 != (GizmoDblAxisRotationDrag3D *)0x0) {
              (pGVar3->fields)._._isSnapEnabled = isEnabled;
              pGVar2 = (this->fields)._rtCamLookSlider;
              if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
                (*(pGVar2->klass->vtable).SetSnapEnabled_1.methodPtr)
                          (pGVar2,(ulonglong)isEnabled,
                           (pGVar2->klass->vtable).SetSnapEnabled_1.method);
                pGVar4 = (this->fields)._scUnformScaleDrag;
                if (pGVar4 != (GizmoUniformScaleDrag3D *)0x0) {
                  (pGVar4->fields)._._isSnapEnabled = isEnabled;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedLookAndFeel
               (UniversalGizmo *this,MethodInfo *method)

{
  lVar1 = 0x160;
  lVar2 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar2 = 0x168;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x50);
    pGVar3 = (this->fields)._mvPXSlider;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        bVar5 = iRam_? != 0;
        (pGVar3->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x20);
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
          lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar8 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar5 = uVar7 == *puVar8;
            if (bVar5) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar3,(MethodInfo *)0x0);
        lVar2 = 0x160;
        if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
          lVar2 = 0x168;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x50);
          pGVar3 = (this->fields)._mvPYSlider;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              bVar5 = iRam_? != 0;
              (pGVar3->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x28);
              if (bVar5) {
                uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar5 = uVar7 == *puVar8;
                  if (bVar5) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar3,(MethodInfo *)0x0);
              lVar2 = 0x160;
              if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                lVar2 = 0x168;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x50);
                pGVar3 = (this->fields)._mvPZSlider;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    bVar5 = iRam_? != 0;
                    (pGVar3->fields)._sharedLookAndFeel =
                         *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x30);
                    if (bVar5) {
                      uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                      lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                        LOCK();
                        bVar5 = uVar7 == *puVar8;
                        if (bVar5) {
                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                              (pGVar3,(MethodInfo *)0x0);
                    lVar2 = 0x160;
                    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                      lVar2 = 0x168;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._mvNXSlider;
                      lVar2 = *(longlong *)(lVar2 + 0x50);
                      if (lVar2 != 0) {
                        if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          bVar5 = iRam_? != 0;
                          (pGVar3->fields)._sharedLookAndFeel =
                               *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x38);
                          if (bVar5) {
                            uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >> 0xc);
                            lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                              puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                              LOCK();
                              bVar5 = uVar7 == *puVar8;
                              if (bVar5) {
                                *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar5);
                          }
                          GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                    (pGVar3,(MethodInfo *)0x0);
                          lVar2 = 0x160;
                          if ((this->fields)._sharedLookAndFeel3D !=
                              (UniversalGizmoLookAndFeel3D *)0x0) {
                            lVar2 = 0x168;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._mvNYSlider;
                            lVar2 = *(longlong *)(lVar2 + 0x50);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                bVar5 = iRam_? != 0;
                                (pGVar3->fields)._sharedLookAndFeel =
                                     *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x40);
                                if (bVar5) {
                                  uVar6 = (uint)((ulonglong)&(pGVar3->fields)._sharedLookAndFeel >>
                                                 0xc);
                                  lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                    puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                    LOCK();
                                    bVar5 = uVar7 == *puVar8;
                                    if (bVar5) {
                                      *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar5);
                                }
                                GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                          (pGVar3,(MethodInfo *)0x0);
                                lVar2 = 0x160;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                  lVar2 = 0x168;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._mvNZSlider;
                                  lVar2 = *(longlong *)(lVar2 + 0x50);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      bVar5 = iRam_? != 0;
                                      (pGVar3->fields)._sharedLookAndFeel =
                                           *(GizmoLineSlider3DLookAndFeel **)(lVar2 + 0x48);
                                      if (bVar5) {
                                        uVar6 = (uint)((ulonglong)
                                                        &(pGVar3->fields)._sharedLookAndFeel >> 0xc)
                                        ;
                                        lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                          puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                          LOCK();
                                          bVar5 = uVar7 == *puVar8;
                                          if (bVar5) {
                                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar5);
                                      }
                                      GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                                (pGVar3,(MethodInfo *)0x0);
                                      iVar9 = iRam_?;
                                      lVar2 = 0x160;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                        lVar2 = 0x168;
                                      }
                                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                      if (lVar2 != 0) {
                                        lVar2 = *(longlong *)(lVar2 + 0x58);
                                        pGVar10 = (this->fields)._mvXYSlider;
                                        if (lVar2 != 0) {
                                          if (*(int *)(lVar2 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar10->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar2 + 0x20);
                                            if (iVar9 != 0) {
                                              uVar6 = (uint)((ulonglong)
                                                              &(pGVar10->fields)._sharedLookAndFeel
                                                             >> 0xc);
                                              lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                                puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                                LOCK();
                                                bVar5 = uVar7 == *puVar8;
                                                if (bVar5) {
                                                  *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                }
                                                UNLOCK();
                                                iVar9 = iRam_?;
                                              } while (!bVar5);
                                            }
                                            lVar2 = 0x160;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (UniversalGizmoLookAndFeel3D *)0x0) {
                                              lVar2 = 0x168;
                                            }
                                            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                            if (lVar2 != 0) {
                                              lVar2 = *(longlong *)(lVar2 + 0x58);
                                              pGVar10 = (this->fields)._mvYZSlider;
                                              if (lVar2 != 0) {
                                                if (*(uint *)(lVar2 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar10->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar2 + 0x28);
                                                  iVar11 = 0;
                                                  if (iVar9 != 0) {
                                                    uVar6 = (uint)((ulonglong)
                                                                    &(pGVar10->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                                                      LOCK();
                                                      bVar5 = uVar7 == *puVar8;
                                                      if (bVar5) {
                                                        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar11 = iRam_?;
                                                    } while (!bVar5);
                                                  }
                                                  lVar2 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar2 = 0x168;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x58);
                                                    pGVar10 = (this->fields)._mvZXSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar10->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar2 + 0x30);
                                                        iVar9 = 0;
                                                        if (iVar11 != 0) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar10->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar2 = (ulonglong)
                                                                   ((uVar6 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar7 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar8 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar5 = uVar7 == *puVar8;
                                                            if (bVar5) {
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar9 = iRam_?;
                                                          } while (!bVar5);
                                                        }
                                                        lVar2 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar2 = 0x168;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar12 = (this->fields)._mvVertSnapCap,
                                                           pGVar12 != (GizmoCap2D *)0x0)) {
                                                          (pGVar12->fields)._sharedLookAndFeel =
                                                               *(GizmoCap2DLookAndFeel **)
                                                                (lVar2 + 0x30);
                                                          iVar11 = 0;
                                                          if (iVar9 != 0) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar12->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar2 = (ulonglong)
                                                                     ((uVar6 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar7 = *(ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              puVar8 = (ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              LOCK();
                                                              bVar5 = uVar7 == *puVar8;
                                                              if (bVar5) {
                                                                *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar11 = iRam_?;
                                                  } while (!bVar5);
                                                  }
                                                  lVar13 = 0x150;
                                                  lVar2 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar2 = 0x158;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x38);
                                                    pGVar14 = (this->fields)._mvP2DModeXSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(int *)(lVar2 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar14->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar2 + 0x20);
                                                        if (iVar11 != 0) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar2 = (ulonglong)
                                                                   ((uVar6 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar7 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar8 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar5 = uVar7 == *puVar8;
                                                            if (bVar5) {
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar5);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar14,(MethodInfo *)0x0);
                                                        lVar2 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar2 = 0x158;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          lVar2 = *(longlong *)(lVar2 + 0x38);
                                                          pGVar14 = (this->fields)._mvP2DModeYSlider;
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 2)
                                                            goto code_?;
                                                            if (pGVar14 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar5 = iRam_? != 0;
                                                              (pGVar14->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar2 + 0x28);
                                                              if (bVar5) {
                                                                uVar6 = (uint)((ulonglong)
                                                                                &(pGVar14->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar6 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar7 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar8 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar5 = uVar7 == *puVar8;
                                                                  if (bVar5) {
                                                                    *puVar8 = uVar7 | 1L << (uVar6 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar14,(MethodInfo *)0x0);
                                                  lVar2 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar2 = 0x158;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    pGVar14 = (this->fields)._mvN2DModeXSlider;
                                                    lVar2 = *(longlong *)(lVar2 + 0x38);
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider2D *)0x0) {
                                                        bVar5 = iRam_? != 0;
                                                        (pGVar14->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar2 + 0x30);
                                                        if (bVar5) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar14->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar2 = (ulonglong)
                                                                   ((uVar6 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar7 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar8 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar5 = uVar7 == *puVar8;
                                                            if (bVar5) {
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar5);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar14,(MethodInfo *)0x0);
                                                        lVar2 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar2 = 0x158;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          pGVar14 = (this->fields)._mvN2DModeYSlider;
                                                          lVar2 = *(longlong *)(lVar2 + 0x38);
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 4)
                                                            goto code_?;
                                                            if (pGVar14 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar5 = iRam_? != 0;
                                                              (pGVar14->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar2 + 0x38);
                                                              if (bVar5) {
                                                                uVar6 = (uint)((ulonglong)
                                                                                &(pGVar14->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar6 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar7 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar8 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar5 = uVar7 == *puVar8;
                                                                  if (bVar5) {
                                                                    *puVar8 = uVar7 | 1L << (uVar6 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar14,(MethodInfo *)0x0);
                                                  iVar9 = iRam_?;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar13 = 0x158;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar13);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar15 = (this->fields)._mv2DModeDblSlider,
                                                     pGVar15 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar15->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar2 + 0x30);
                                                    if (iVar9 != 0) {
                                                      uVar6 = (uint)((ulonglong)
                                                                      &(pGVar15->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar7 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar8 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar5 = uVar7 == *puVar8;
                                                        if (bVar5) {
                                                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar9 = iRam_?;
                                                      } while (!bVar5);
                                                    }
                                                    lVar2 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar2 = 0x168;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if (lVar2 != 0) {
                                                      lVar2 = *(longlong *)(lVar2 + 0x78);
                                                      pGVar10 = (this->fields)._rtXSlider;
                                                      if (lVar2 != 0) {
                                                        if (*(int *)(lVar2 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar10->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider3DLookAndFeel **)
                                                                (lVar2 + 0x20);
                                                          iVar11 = 0;
                                                          if (iVar9 != 0) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar10->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar2 = (ulonglong)
                                                                     ((uVar6 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar7 = *(ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              puVar8 = (ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              LOCK();
                                                              bVar5 = uVar7 == *puVar8;
                                                              if (bVar5) {
                                                                *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar11 = iRam_?;
                                                  } while (!bVar5);
                                                  }
                                                  lVar2 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar2 = 0x168;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x78);
                                                    pGVar10 = (this->fields)._rtYSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar10 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar10->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar2 + 0x28);
                                                        iVar9 = 0;
                                                        if (iVar11 != 0) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar10->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar2 = (ulonglong)
                                                                   ((uVar6 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar7 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar8 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar5 = uVar7 == *puVar8;
                                                            if (bVar5) {
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar9 = iRam_?;
                                                          } while (!bVar5);
                                                        }
                                                        lVar2 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar2 = 0x168;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          lVar2 = *(longlong *)(lVar2 + 0x78);
                                                          pGVar10 = (this->fields)._rtZSlider;
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar10 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar10->fields)._sharedLookAndFeel =
                                                                   *(GizmoPlaneSlider3DLookAndFeel
                                                                     **)(lVar2 + 0x30);
                                                              iVar11 = 0;
                                                              if (iVar9 != 0) {
                                                                uVar6 = (uint)((ulonglong)
                                                                                &(pGVar10->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar6 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar7 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar8 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar5 = uVar7 == *puVar8;
                                                                  if (bVar5) {
                                                                    *puVar8 = uVar7 | 1L << (uVar6 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar11 = iRam_?;
                                                  } while (!bVar5);
                                                  }
                                                  lVar2 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar2 = 0x168;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar15 = (this->fields)._rtCamLookSlider,
                                                     pGVar15 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar15->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar2 + 0x88);
                                                    iVar9 = 0;
                                                    if (iVar11 != 0) {
                                                      uVar6 = (uint)((ulonglong)
                                                                      &(pGVar15->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar7 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar8 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar5 = uVar7 == *puVar8;
                                                        if (bVar5) {
                                                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar9 = iRam_?;
                                                      } while (!bVar5);
                                                    }
                                                    lVar2 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar2 = 0x168;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if ((lVar2 != 0) &&
                                                       (pGVar16 = (this->fields)._rtMidCap,
                                                       pGVar16 != (GizmoCap3D *)0x0)) {
                                                      (pGVar16->fields)._sharedLookAndFeel =
                                                           *(GizmoCap3DLookAndFeel **)
                                                            (lVar2 + 0x68);
                                                      iVar11 = 0;
                                                      if (iVar9 != 0) {
                                                        uVar6 = (uint)((ulonglong)
                                                                        &(pGVar16->fields).
                                                                         _sharedLookAndFeel >> 0xc);
                                                        lVar2 = (ulonglong)
                                                                 ((uVar6 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar7 = *(ulonglong *)
                                                                   (lVar2 + 0xADDR);
                                                          puVar8 = (ulonglong *)
                                                                   (lVar2 + 0xADDR);
                                                          LOCK();
                                                          bVar5 = uVar7 == *puVar8;
                                                          if (bVar5) {
                                                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                          iVar11 = iRam_?;
                                                        } while (!bVar5);
                                                      }
                                                      lVar2 = 0x160;
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                                        lVar2 = 0x168;
                                                      }
                                                      lVar2 = *(longlong *)
                                                                ((longlong)&this->klass + lVar2);
                                                      if ((lVar2 != 0) &&
                                                         (pGVar16 = (this->fields)._scMidCap,
                                                         pGVar16 != (GizmoCap3D *)0x0)) {
                                                        (pGVar16->fields)._sharedLookAndFeel =
                                                             *(GizmoCap3DLookAndFeel **)
                                                              (lVar2 + 0x90);
                                                        iVar9 = 0;
                                                        if (iVar11 != 0) {
                                                          uVar6 = (uint)((ulonglong)
                                                                          &(pGVar16->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar2 = (ulonglong)
                                                                   ((uVar6 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar7 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar8 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar5 = uVar7 == *puVar8;
                                                            if (bVar5) {
                                                              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar9 = iRam_?;
                                                          } while (!bVar5);
                                                        }
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar1 = 0x168;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar1);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar17 = (this->fields)._scScaleGuide,
                                                           pGVar17 != (GizmoScaleGuide *)0x0)) {
                                                          (pGVar17->fields)._sharedLookAndFeel =
                                                               *(GizmoScaleGuideLookAndFeel **)
                                                                (lVar2 + 0xb8);
                                                          if (iVar9 != 0) {
                                                            uVar6 = (uint)((ulonglong)
                                                                            &(pGVar17->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar2 = (ulonglong)
                                                                     ((uVar6 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar7 = *(ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              puVar8 = (ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              LOCK();
                                                              bVar5 = uVar7 == *puVar8;
                                                              if (bVar5) {
                                                                *puVar8 = uVar7 | 1L << (uVar6 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar5);
                                                  }
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedSettings
               (UniversalGizmo *this,MethodInfo *method)

{
  lVar1 = 0x140;
  lVar2 = 0x140;
  if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
    lVar2 = 0x148;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    pGVar3 = (this->fields)._mvPXSlider;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        (pGVar3->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar2 + 0x20);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
          lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar7 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar9 = iRam_?;
        lVar2 = 0x140;
        if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
          lVar2 = 0x148;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x38);
          pGVar3 = (this->fields)._mvPYSlider;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              (pGVar3->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar2 + 0x28);
              if (iVar9 != 0) {
                uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                  iVar9 = iRam_?;
                } while (!bVar8);
              }
              lVar2 = 0x140;
              if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                lVar2 = 0x148;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
              if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x38);
                pGVar3 = (this->fields)._mvPZSlider;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    (pGVar3->fields)._sharedSettings =
                         *(GizmoLineSlider3DSettings **)(lVar2 + 0x30);
                    iVar10 = 0;
                    if (iVar9 != 0) {
                      uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                        puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                        LOCK();
                        bVar8 = uVar6 == *puVar7;
                        if (bVar8) {
                          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                        }
                        UNLOCK();
                        iVar10 = iRam_?;
                      } while (!bVar8);
                    }
                    lVar2 = 0x140;
                    if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                      lVar2 = 0x148;
                    }
                    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                    if (lVar2 != 0) {
                      pGVar3 = (this->fields)._mvNXSlider;
                      lVar2 = *(longlong *)(lVar2 + 0x38);
                      if (lVar2 != 0) {
                        if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          (pGVar3->fields)._sharedSettings =
                               *(GizmoLineSlider3DSettings **)(lVar2 + 0x38);
                          iVar9 = 0;
                          if (iVar10 != 0) {
                            uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >> 0xc);
                            lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                              puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                              LOCK();
                              bVar8 = uVar6 == *puVar7;
                              if (bVar8) {
                                *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                              iVar9 = iRam_?;
                            } while (!bVar8);
                          }
                          lVar2 = 0x140;
                          if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                            lVar2 = 0x148;
                          }
                          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                          if (lVar2 != 0) {
                            pGVar3 = (this->fields)._mvNYSlider;
                            lVar2 = *(longlong *)(lVar2 + 0x38);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                (pGVar3->fields)._sharedSettings =
                                     *(GizmoLineSlider3DSettings **)(lVar2 + 0x40);
                                iVar10 = 0;
                                if (iVar9 != 0) {
                                  uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings >>
                                                 0xc);
                                  lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                    puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                    LOCK();
                                    bVar8 = uVar6 == *puVar7;
                                    if (bVar8) {
                                      *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                    }
                                    UNLOCK();
                                    iVar10 = iRam_?;
                                  } while (!bVar8);
                                }
                                lVar2 = 0x140;
                                if ((this->fields)._sharedSettings3D !=
                                    (UniversalGizmoSettings3D *)0x0) {
                                  lVar2 = 0x148;
                                }
                                lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                if (lVar2 != 0) {
                                  pGVar3 = (this->fields)._mvNZSlider;
                                  lVar2 = *(longlong *)(lVar2 + 0x38);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar3->fields)._sharedSettings =
                                           *(GizmoLineSlider3DSettings **)(lVar2 + 0x48);
                                      iVar9 = 0;
                                      if (iVar10 != 0) {
                                        uVar5 = (uint)((ulonglong)&(pGVar3->fields)._sharedSettings
                                                       >> 0xc);
                                        lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                          puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                          LOCK();
                                          bVar8 = uVar6 == *puVar7;
                                          if (bVar8) {
                                            *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                          }
                                          UNLOCK();
                                          iVar9 = iRam_?;
                                        } while (!bVar8);
                                      }
                                      lVar2 = 0x140;
                                      if ((this->fields)._sharedSettings3D !=
                                          (UniversalGizmoSettings3D *)0x0) {
                                        lVar2 = 0x148;
                                      }
                                      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                      if (lVar2 != 0) {
                                        lVar2 = *(longlong *)(lVar2 + 0x40);
                                        pGVar11 = (this->fields)._mvXYSlider;
                                        if (lVar2 != 0) {
                                          if (*(int *)(lVar2 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedSettings =
                                                 *(GizmoPlaneSlider3DSettings **)(lVar2 + 0x20);
                                            iVar10 = 0;
                                            if (iVar9 != 0) {
                                              uVar5 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedSettings >>
                                                             0xc);
                                              lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                                puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                                LOCK();
                                                bVar8 = uVar6 == *puVar7;
                                                if (bVar8) {
                                                  *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                                }
                                                UNLOCK();
                                                iVar10 = iRam_?;
                                              } while (!bVar8);
                                            }
                                            lVar2 = 0x140;
                                            if ((this->fields)._sharedSettings3D !=
                                                (UniversalGizmoSettings3D *)0x0) {
                                              lVar2 = 0x148;
                                            }
                                            lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
                                            if (lVar2 != 0) {
                                              lVar2 = *(longlong *)(lVar2 + 0x40);
                                              pGVar11 = (this->fields)._mvYZSlider;
                                              if (lVar2 != 0) {
                                                if (*(uint *)(lVar2 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedSettings =
                                                       *(GizmoPlaneSlider3DSettings **)
                                                        (lVar2 + 0x28);
                                                  iVar9 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar5 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                                      puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                                      LOCK();
                                                      bVar8 = uVar6 == *puVar7;
                                                      if (bVar8) {
                                                        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar9 = iRam_?;
                                                    } while (!bVar8);
                                                  }
                                                  lVar2 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar2 = 0x148;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x40);
                                                    pGVar11 = (this->fields)._mvZXSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar2 + 0x30);
                                                        iVar10 = 0;
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar2 = (ulonglong)
                                                                   ((uVar5 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar8 = uVar6 == *puVar7;
                                                            if (bVar8) {
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        lVar12 = 0x130;
                                                        lVar2 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar2 = 0x138;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          lVar2 = *(longlong *)(lVar2 + 0x38);
                                                          pGVar13 = (this->fields)._mvP2DModeXSlider;
                                                          if (lVar2 != 0) {
                                                            if (*(int *)(lVar2 + 0x18) == 0)
                                                            goto code_?;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   *(GizmoLineSlider2DSettings **)
                                                                    (lVar2 + 0x20);
                                                              iVar9 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar5 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar8 = uVar6 == *puVar7;
                                                                  if (bVar8) {
                                                                    *puVar7 = uVar6 | 1L << (uVar5 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar2 = 0x138;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x38);
                                                    pGVar13 = (this->fields)._mvP2DModeYSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar2 + 0x28);
                                                        iVar10 = 0;
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar2 = (ulonglong)
                                                                   ((uVar5 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar8 = uVar6 == *puVar7;
                                                            if (bVar8) {
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        lVar2 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar2 = 0x138;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          pGVar13 = (this->fields)._mvN2DModeXSlider;
                                                          lVar2 = *(longlong *)(lVar2 + 0x38);
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   *(GizmoLineSlider2DSettings **)
                                                                    (lVar2 + 0x30);
                                                              iVar9 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar5 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar8 = uVar6 == *puVar7;
                                                                  if (bVar8) {
                                                                    *puVar7 = uVar6 | 1L << (uVar5 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar2 = 0x138;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    pGVar13 = (this->fields)._mvN2DModeYSlider;
                                                    lVar2 = *(longlong *)(lVar2 + 0x38);
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 4)
                                                      goto code_?;
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             *(GizmoLineSlider2DSettings **)
                                                              (lVar2 + 0x38);
                                                        iVar10 = 0;
                                                        if (iVar9 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar2 = (ulonglong)
                                                                   ((uVar5 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar8 = uVar6 == *puVar7;
                                                            if (bVar8) {
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x138;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar2 != 0) &&
                                                           (pGVar14 = (this->fields).
                                                                     _mv2DModeDblSlider,
                                                           pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar2 + 0x30);
                                                          iVar9 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar5 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar2 = (ulonglong)
                                                                     ((uVar5 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar6 = *(ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              puVar7 = (ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              LOCK();
                                                              bVar8 = uVar6 == *puVar7;
                                                              if (bVar8) {
                                                                *puVar7 = uVar6 | 1L << (uVar5 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar9 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar2 = 0x148;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar15 = (this->fields)._mvVertexSnapDrag,
                                                     pGVar15 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar16 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar2 + 0x30);
                                                    if ((pGVar16 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar15->fields)._settings = pGVar16,
                                                       iVar9 != 0)) {
                                                      uVar5 = (uint)((ulonglong)
                                                                      &(pGVar15->fields)._settings >>
                                                                     0xc);
                                                      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar6 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar7 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar8 = uVar6 == *puVar7;
                                                        if (bVar8) {
                                                          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar9 = iRam_?;
                                                      } while (!bVar8);
                                                    }
                                                    lVar2 = 0x140;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (UniversalGizmoSettings3D *)0x0) {
                                                      lVar2 = 0x148;
                                                    }
                                                    lVar2 = *(longlong *)
                                                              ((longlong)&this->klass + lVar2);
                                                    if (lVar2 != 0) {
                                                      lVar2 = *(longlong *)(lVar2 + 0x50);
                                                      pGVar11 = (this->fields)._rtXSlider;
                                                      if (lVar2 != 0) {
                                                        if (*(int *)(lVar2 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar11->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider3DSettings **)
                                                                (lVar2 + 0x20);
                                                          iVar10 = 0;
                                                          if (iVar9 != 0) {
                                                            uVar5 = (uint)((ulonglong)
                                                                            &(pGVar11->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar2 = (ulonglong)
                                                                     ((uVar5 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar6 = *(ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              puVar7 = (ulonglong *)
                                                                       (lVar2 + 0xADDR);
                                                              LOCK();
                                                              bVar8 = uVar6 == *puVar7;
                                                              if (bVar8) {
                                                                *puVar7 = uVar6 | 1L << (uVar5 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar10 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  lVar2 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar2 = 0x148;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar2);
                                                  if (lVar2 != 0) {
                                                    lVar2 = *(longlong *)(lVar2 + 0x50);
                                                    pGVar11 = (this->fields)._rtYSlider;
                                                    if (lVar2 != 0) {
                                                      if (*(uint *)(lVar2 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar2 + 0x28);
                                                        iVar9 = 0;
                                                        if (iVar10 != 0) {
                                                          uVar5 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar2 = (ulonglong)
                                                                   ((uVar5 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar6 = *(ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            puVar7 = (ulonglong *)
                                                                     (lVar2 + 0xADDR);
                                                            LOCK();
                                                            bVar8 = uVar6 == *puVar7;
                                                            if (bVar8) {
                                                              *puVar7 = uVar6 | 1L << (uVar5 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar9 = iRam_?;
                                                          } while (!bVar8);
                                                        }
                                                        lVar2 = 0x140;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (UniversalGizmoSettings3D *)0x0) {
                                                          lVar2 = 0x148;
                                                        }
                                                        lVar2 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar2);
                                                        if (lVar2 != 0) {
                                                          lVar2 = *(longlong *)(lVar2 + 0x50);
                                                          pGVar11 = (this->fields)._rtZSlider;
                                                          if (lVar2 != 0) {
                                                            if (*(uint *)(lVar2 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar11 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar11->fields)._sharedSettings =
                                                                   *(GizmoPlaneSlider3DSettings **)
                                                                    (lVar2 + 0x30);
                                                              iVar10 = 0;
                                                              if (iVar9 != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &(pGVar11->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar2 = (ulonglong)
                                                                         ((uVar5 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar6 = *(ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  puVar7 = (ulonglong *)
                                                                           (lVar2 + 0xADDR);
                                                                  LOCK();
                                                                  bVar8 = uVar6 == *puVar7;
                                                                  if (bVar8) {
                                                                    *puVar7 = uVar6 | 1L << (uVar5 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar10 = iRam_?;
                                                  } while (!bVar8);
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar1 = 0x148;
                                                  }
                                                  lVar2 = *(longlong *)
                                                            ((longlong)&this->klass + lVar1);
                                                  if ((lVar2 != 0) &&
                                                     (pGVar14 = (this->fields)._rtCamLookSlider,
                                                     pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar14->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar2 + 0x58);
                                                    if (iVar10 != 0) {
                                                      uVar5 = (uint)((ulonglong)
                                                                      &(pGVar14->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar6 = *(ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        puVar7 = (ulonglong *)(lVar2 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar8 = uVar6 == *puVar7;
                                                        if (bVar8) {
                                                          *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar8);
                                                    }
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update2DGizmoPosition() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DGizmoPosition
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    obj = Gizmo::Gizmo_GetWorkCamera((this->fields)._._gizmo,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (((pGVar1 != (Gizmo *)0x0) &&
        (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (obj != (Camera *)0x0)) {
      uStack_3._0_4_ = (pGVar2->fields)._position3D.x;
      uStack_3._4_4_ = (pGVar2->fields)._position3D.y;
      fStack_4 = (pGVar2->fields)._position3D.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      uStack_6 = 0;
      pvVar7 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&uStack_3,2,&uStack_5);
      if (this_00 != (GizmoTransform *)0x0) {
        if (((this_00->fields)._firingChanged2DEvent == 0) &&
           (fVar10 = (this_00->fields)._position2D.x - (float)uStack_5,
           fVar11 = (this_00->fields)._position2D.y - uStack_5._4_4_,
           _UNK_? <= fVar11 * fVar11 + fVar10 * fVar10)) {
          (this_00->fields)._position2D.x = (float)uStack_5;
          (this_00->fields)._position2D.y = uStack_5._4_4_;
          GizmoTransform::GizmoTransform_OnPosition2DChanged(this_00,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DModeHandlePositions
               (UniversalGizmo *this,MethodInfo *method)

{
  lVar1 = 0x150;
  if ((this->fields)._sharedLookAndFeel2D != (UniversalGizmoLookAndFeel2D *)0x0) {
    lVar1 = 0x158;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x40) == '\0') {
      pGVar2 = (this->fields)._._gizmo;
      if ((pGVar2 != (Gizmo *)0x0) &&
         (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
        pGVar4 = (this->fields)._mvP2DModeXSlider;
        fVar5 = (pGVar3->fields)._position2D.y;
        if (pGVar4 != (GizmoLineSlider2D *)0x0) {
          fVar6 = (pGVar3->fields)._position2D.x;
          value.y = fVar5;
          value.x = fVar6;
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar4,value,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._mvP2DModeYSlider;
          if (pGVar4 != (GizmoLineSlider2D *)0x0) {
            value_00.y = fVar5;
            value_00.x = fVar6;
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                      (pGVar4,value_00,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._mvN2DModeXSlider;
            if (pGVar4 != (GizmoLineSlider2D *)0x0) {
              value_01.y = fVar5;
              value_01.x = fVar6;
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar4,value_01,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._mvN2DModeYSlider;
              if (pGVar4 != (GizmoLineSlider2D *)0x0) {
                VVar7.y = fVar5;
                VVar7.x = fVar6;
code_?:
                pGVar3 = (pGVar4->fields)._transform;
                if (pGVar3 == (GizmoTransform *)0x0) {
                  FUN_?(0,VVar7,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((pGVar3->fields)._firingChanged2DEvent == 0) {
                  fVar5 = (pGVar3->fields)._position2D.x - VVar7.x;
                  fVar6 = (pGVar3->fields)._position2D.y - VVar7.y;
                  if (_UNK_? <= fVar6 * fVar6 + fVar5 * fVar5) {
                    (pGVar3->fields)._position2D.x = VVar7.x;
                    (pGVar3->fields)._position2D.y = VVar7.y;
                    if ((pGVar3->fields)._parent == (GizmoTransform *)0x0) {
                      fVar5 = (pGVar3->fields)._position2D.x;
                      fVar6 = (pGVar3->fields)._position2D.y;
                    }
                    else {
                      pGVar9 = (pGVar3->fields)._parent;
                      fStack_10 = (pGVar9->fields)._rotation2D.x;
                      fStack_11 = (pGVar9->fields)._rotation2D.y;
                      fStack_12 = (pGVar9->fields)._rotation2D.z;
                      fStack_13 = (pGVar9->fields)._rotation2D.w;
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                        uVar14 = func_?(&UNK_?);
                        FUN_?(uVar14,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(&fStack_10);
                      pGVar9 = (pGVar3->fields)._parent;
                      if (pGVar9 == (GizmoTransform *)0x0) {
                        FUN_?();
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      fVar6 = (pGVar3->fields)._position2D.x - (pGVar9->fields)._position2D.x;
                      fVar15 = (pGVar3->fields)._position2D.y - (pGVar9->fields)._position2D.y;
                      uStack_16 = (undefined *)CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
                      fVar5 = (_UNK_? - 0.0) * fVar6 + fVar15 * 0.0 + 0.0;
                      fVar6 = (_UNK_? - 0.0) * fVar15 + fVar6 * 0.0 + 0.0;
                    }
                    (pGVar3->fields)._localPosition2D.x = fVar5;
                    (pGVar3->fields)._localPosition2D.y = fVar6;
                    GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar3,(MethodInfo *)0x0)
                    ;
                    pGVar17 = (pGVar3->fields).Changed;
                    (pGVar3->fields)._firingChanged2DEvent = 1;
                    if (pGVar17 != (GizmoEntityTransformChangedHandler *)0x0) {
                      (*(pGVar17->fields)._._.invoke_impl)
                                ((pGVar17->fields)._._.method_code,pGVar3,0x100000000,
                                 (pGVar17->fields)._._.method);
                    }
                    (pGVar3->fields)._firingChanged2DEvent = 0;
                    return;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
    else {
      pGVar18 = (this->fields)._mv2DModeDblSlider;
      pGVar4 = (this->fields)._mvP2DModeXSlider;
      if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
        VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar18,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
        if (pGVar4 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar4,VVar7,(MethodInfo *)0x0);
          pGVar18 = (this->fields)._mv2DModeDblSlider;
          pGVar4 = (this->fields)._mvP2DModeYSlider;
          if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
            VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar18,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
            if (pGVar4 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                        (pGVar4,VVar7,(MethodInfo *)0x0);
              pGVar18 = (this->fields)._mv2DModeDblSlider;
              pGVar4 = (this->fields)._mvN2DModeXSlider;
              if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                  (pGVar18,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0);
                if (pGVar4 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                            (pGVar4,VVar7,(MethodInfo *)0x0);
                  pGVar18 = (this->fields)._mv2DModeDblSlider;
                  pGVar4 = (this->fields)._mvN2DModeYSlider;
                  if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
                    VVar7 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                      (pGVar18,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0);
                    if (pGVar4 != (GizmoLineSlider2D *)0x0) goto code_?;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateRtCamLookSlider(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_UpdateRtCamLookSlider
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    lVar2 = 0xa0;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar2 = 0x98;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar2 + 0x20) != '\0') {
        this_00 = (pGVar1->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      pGVar3 = (this->fields)._._gizmo;
      this_01 = (this->fields)._rtCamLookSlider;
      if ((pGVar3 != (Gizmo *)0x0) &&
         (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
        pGVar1 = (this->fields)._rtMidCap;
        uVar5._0_4_ = (pGVar4->fields)._position3D.x;
        uVar5._4_4_ = (pGVar4->fields)._position3D.y;
        fVar6 = (pGVar4->fields)._position3D.z;
        if (pGVar1 != (GizmoCap3D *)0x0) {
          fVar7 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar1,zoomFactor,(MethodInfo *)0x0);
          lVar2 = 0x160;
          if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
            lVar2 = 0x168;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
          if ((lVar2 != 0) && (this_01 != (GizmoPlaneSlider2D *)0x0)) {
            aVStack_8[0]._0_8_ = uVar5;
            aVStack_8[0].z = fVar6;
            GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
                      (this_01,aVStack_8,zoomFactor * *(float *)(lVar2 + 0x84) + fVar7,100,camera,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* UniversalGizmo() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo__ctor
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoScaleGuide);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoSettings2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmoSettings3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GizmoLineSlider3DCollection *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DCollection)
  ;
  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._mvAxesSliders = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvAxesSliders >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar6 = (GizmoPlaneSlider3DCollection *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar6,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._mvDblSliders = pGVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvDblSliders >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (GizmoObjectVertexSnapDrag3D *)FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D)
  ;
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._mvVertexSnapDrag = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvVertexSnapDrag >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (GizmoLineSlider2DCollection *)FUN_?(TypeInfo__RTG__GizmoLineSlider2DCollection)
  ;
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._mv2DModeSliders = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mv2DModeSliders >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar6 = (GizmoPlaneSlider3DCollection *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar6,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._rtAxesSliders = pGVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._rtAxesSliders >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_03 = (GizmoDblAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
  (this_03->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_03,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._rtCamXYRotationDrag = this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._rtCamXYRotationDrag >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_04 = (GizmoUniformScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  (this_04->fields)._relativeScale = 1.0;
  (this_04->fields)._totalScale = 1.0;
  (this_04->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_04,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._scUnformScaleDrag = this_04;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._scUnformScaleDrag >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_05 = (GizmoScaleGuide *)FUN_?(TypeInfo__RTG__GizmoScaleGuide);
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_05,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._scScaleGuide = this_05;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._scScaleGuide >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_06 = (UniversalGizmoSettings2D *)FUN_?(TypeInfo__RTG__UniversalGizmoSettings2D);
  UniversalGizmoSettings2D::UniversalGizmoSettings2D__ctor(this_06,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings2D = this_06;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings2D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_07 = (UniversalGizmoSettings3D *)FUN_?(TypeInfo__RTG__UniversalGizmoSettings3D);
  UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor(this_07,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._settings3D = this_07;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._settings3D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_08 = (UniversalGizmoLookAndFeel2D *)FUN_?(TypeInfo__RTG__UniversalGizmoLookAndFeel2D)
  ;
  UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor(this_08,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel2D = this_08;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel2D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_09 = (UniversalGizmoLookAndFeel3D *)FUN_?(TypeInfo__RTG__UniversalGizmoLookAndFeel3D)
  ;
  UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor(this_09,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._lookAndFeel3D = this_09;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._lookAndFeel3D >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_10 = (UniversalGizmoHotkeys *)FUN_?(TypeInfo__RTG__UniversalGizmoHotkeys);
  UniversalGizmoHotkeys::UniversalGizmoHotkeys__ctor(this_10,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._hotkeys = this_10;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._hotkeys >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._useSnapEnableHotkey = 1;
  (this->fields)._useVertSnapEnableHotkey = 1;
  (this->fields)._use2DModeEnableHotkey = 1;
  (this->fields)._._isEnabled = 1;
  return;
}


/* UniversalGizmoHotkeys get_Hotkeys() */

UniversalGizmoHotkeys *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Hotkeys
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (UniversalGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* UniversalGizmoLookAndFeel2D get_LookAndFeel2D() */

UniversalGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel2D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel2D == (UniversalGizmoLookAndFeel2D *)0x0) {
    return (this->fields)._lookAndFeel2D;
  }
  return (this->fields)._sharedLookAndFeel2D;
}


/* UniversalGizmoLookAndFeel3D get_LookAndFeel3D() */

UniversalGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel3D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel3D == (UniversalGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return (this->fields)._sharedLookAndFeel3D;
}


/* UniversalGizmoSettings2D get_Settings2D() */

UniversalGizmoSettings2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings2D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings2D == (UniversalGizmoSettings2D *)0x0) {
    return (this->fields)._settings2D;
  }
  return (this->fields)._sharedSettings2D;
}


/* UniversalGizmoSettings3D get_Settings3D() */

UniversalGizmoSettings3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings3D
          (UniversalGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings3D == (UniversalGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return (this->fields)._sharedSettings3D;
}


/* Boolean get_Use2DModeEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Use2DModeEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._use2DModeEnableHotkey;
}


/* Boolean get_UseSnapEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_UseSnapEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._useSnapEnableHotkey;
}


/* Boolean get_UseVertSnapEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_UseVertSnapEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._useVertSnapEnableHotkey;
}


/* Void set_SharedLookAndFeel2D(UniversalGizmoLookAndFeel2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel2D
               (UniversalGizmo *this,UniversalGizmoLookAndFeel2D *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._sharedLookAndFeel2D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel2D >> 0xc);
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
  lVar6 = 0x160;
  lVar7 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0x168;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x50);
    pGVar8 = (this->fields)._mvPXSlider;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        bVar1 = iRam_? != 0;
        (pGVar8->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x20);
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
          lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar3 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *puVar3;
            if (bVar1) {
              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
        lVar7 = 0x160;
        if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0x168;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x50);
          pGVar8 = (this->fields)._mvPYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              bVar1 = iRam_? != 0;
              (pGVar8->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x28);
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *puVar3;
                  if (bVar1) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
              }
              GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
              lVar7 = 0x160;
              if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0x168;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x50);
                pGVar8 = (this->fields)._mvPZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    bVar1 = iRam_? != 0;
                    (pGVar8->fields)._sharedLookAndFeel =
                         *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x30);
                    if (bVar1) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *puVar3;
                        if (bVar1) {
                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                    }
                    GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                              (pGVar8,(MethodInfo *)0x0);
                    lVar7 = 0x160;
                    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0x168;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._mvNXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x50);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          bVar1 = iRam_? != 0;
                          (pGVar8->fields)._sharedLookAndFeel =
                               *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x38);
                          if (bVar1) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                              puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar1 = uVar5 == *puVar3;
                              if (bVar1) {
                                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                          }
                          GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                    (pGVar8,(MethodInfo *)0x0);
                          lVar7 = 0x160;
                          if ((this->fields)._sharedLookAndFeel3D !=
                              (UniversalGizmoLookAndFeel3D *)0x0) {
                            lVar7 = 0x168;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._mvNYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x50);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                bVar1 = iRam_? != 0;
                                (pGVar8->fields)._sharedLookAndFeel =
                                     *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x40);
                                if (bVar1) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >>
                                                 0xc);
                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                    puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar5 == *puVar3;
                                    if (bVar1) {
                                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                }
                                GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                          (pGVar8,(MethodInfo *)0x0);
                                lVar7 = 0x160;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                  lVar7 = 0x168;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._mvNZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x50);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      bVar1 = iRam_? != 0;
                                      (pGVar8->fields)._sharedLookAndFeel =
                                           *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x48);
                                      if (bVar1) {
                                        uVar2 = (uint)((ulonglong)
                                                        &(pGVar8->fields)._sharedLookAndFeel >> 0xc)
                                        ;
                                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                          puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                          LOCK();
                                          bVar1 = uVar5 == *puVar3;
                                          if (bVar1) {
                                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar1);
                                      }
                                      GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                                (pGVar8,(MethodInfo *)0x0);
                                      iVar10 = iRam_?;
                                      lVar7 = 0x160;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                        lVar7 = 0x168;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x58);
                                        pGVar11 = (this->fields)._mvXYSlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x20);
                                            if (iVar10 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedLookAndFeel
                                                             >> 0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar5 == *puVar3;
                                                if (bVar1) {
                                                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                                iVar10 = iRam_?;
                                              } while (!bVar1);
                                            }
                                            lVar7 = 0x160;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (UniversalGizmoLookAndFeel3D *)0x0) {
                                              lVar7 = 0x168;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x58);
                                              pGVar11 = (this->fields)._mvYZSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar7 + 0x28);
                                                  iVar12 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *puVar3;
                                                      if (bVar1) {
                                                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar12 = iRam_?;
                                                    } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x58);
                                                    pGVar11 = (this->fields)._mvZXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar13 = (this->fields)._mvVertSnapCap,
                                                           pGVar13 != (GizmoCap2D *)0x0)) {
                                                          (pGVar13->fields)._sharedLookAndFeel =
                                                               *(GizmoCap2DLookAndFeel **)
                                                                (lVar7 + 0x30);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar13->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar14 = 0x150;
                                                  lVar7 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar15 = (this->fields)._mvP2DModeXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(int *)(lVar7 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x20);
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x158;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          pGVar15 = (this->fields)._mvP2DModeYSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 2)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x28);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar15 = (this->fields)._mvN2DModeXSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x158;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar15 = (this->fields)._mvN2DModeYSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 4)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x38);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  iVar10 = iRam_?;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar14 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar14);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._mv2DModeDblSlider,
                                                     pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar16->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar7 + 0x30);
                                                    if (iVar10 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar7 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar7 = 0x168;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x78);
                                                      pGVar11 = (this->fields)._rtXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar11->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider3DLookAndFeel **)
                                                                (lVar7 + 0x20);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar11->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x78);
                                                    pGVar11 = (this->fields)._rtYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x28);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x78);
                                                          pGVar11 = (this->fields)._rtZSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar11 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar11->fields)._sharedLookAndFeel =
                                                                   *(GizmoPlaneSlider3DLookAndFeel
                                                                     **)(lVar7 + 0x30);
                                                              iVar12 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar11->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._rtCamLookSlider,
                                                     pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar16->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar7 + 0x88);
                                                    iVar10 = 0;
                                                    if (iVar12 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar7 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar7 = 0x168;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (pGVar17 = (this->fields)._rtMidCap,
                                                       pGVar17 != (GizmoCap3D *)0x0)) {
                                                      (pGVar17->fields)._sharedLookAndFeel =
                                                           *(GizmoCap3DLookAndFeel **)
                                                            (lVar7 + 0x68);
                                                      iVar12 = 0;
                                                      if (iVar10 != 0) {
                                                        uVar2 = (uint)((ulonglong)
                                                                        &(pGVar17->fields).
                                                                         _sharedLookAndFeel >> 0xc);
                                                        lVar7 = (ulonglong)
                                                                 ((uVar2 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          puVar3 = (ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          LOCK();
                                                          bVar1 = uVar5 == *puVar3;
                                                          if (bVar1) {
                                                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                          iVar12 = iRam_?;
                                                        } while (!bVar1);
                                                      }
                                                      lVar7 = 0x160;
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                                        lVar7 = 0x168;
                                                      }
                                                      lVar7 = *(longlong *)
                                                                ((longlong)&this->klass + lVar7);
                                                      if ((lVar7 != 0) &&
                                                         (pGVar17 = (this->fields)._scMidCap,
                                                         pGVar17 != (GizmoCap3D *)0x0)) {
                                                        (pGVar17->fields)._sharedLookAndFeel =
                                                             *(GizmoCap3DLookAndFeel **)
                                                              (lVar7 + 0x90);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar17->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar6 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar6);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar18 = (this->fields)._scScaleGuide,
                                                           pGVar18 != (GizmoScaleGuide *)0x0)) {
                                                          (pGVar18->fields)._sharedLookAndFeel =
                                                               *(GizmoScaleGuideLookAndFeel **)
                                                                (lVar7 + 0xb8);
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar18->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_SharedLookAndFeel3D(UniversalGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel3D
               (UniversalGizmo *this,UniversalGizmoLookAndFeel3D *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._sharedLookAndFeel3D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel3D >> 0xc);
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
  lVar6 = 0x160;
  lVar7 = 0x160;
  if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
    lVar7 = 0x168;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x50);
    pGVar8 = (this->fields)._mvPXSlider;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        bVar1 = iRam_? != 0;
        (pGVar8->fields)._sharedLookAndFeel = *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x20);
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
          lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar3 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *puVar3;
            if (bVar1) {
              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
        lVar7 = 0x160;
        if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
          lVar7 = 0x168;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x50);
          pGVar8 = (this->fields)._mvPYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              bVar1 = iRam_? != 0;
              (pGVar8->fields)._sharedLookAndFeel =
                   *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x28);
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *puVar3;
                  if (bVar1) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
              }
              GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel(pGVar8,(MethodInfo *)0x0);
              lVar7 = 0x160;
              if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                lVar7 = 0x168;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x50);
                pGVar8 = (this->fields)._mvPZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    bVar1 = iRam_? != 0;
                    (pGVar8->fields)._sharedLookAndFeel =
                         *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x30);
                    if (bVar1) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *puVar3;
                        if (bVar1) {
                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                    }
                    GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                              (pGVar8,(MethodInfo *)0x0);
                    lVar7 = 0x160;
                    if ((this->fields)._sharedLookAndFeel3D != (UniversalGizmoLookAndFeel3D *)0x0) {
                      lVar7 = 0x168;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._mvNXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x50);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          bVar1 = iRam_? != 0;
                          (pGVar8->fields)._sharedLookAndFeel =
                               *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x38);
                          if (bVar1) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >> 0xc);
                            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                              puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar1 = uVar5 == *puVar3;
                              if (bVar1) {
                                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                          }
                          GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                    (pGVar8,(MethodInfo *)0x0);
                          lVar7 = 0x160;
                          if ((this->fields)._sharedLookAndFeel3D !=
                              (UniversalGizmoLookAndFeel3D *)0x0) {
                            lVar7 = 0x168;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._mvNYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x50);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                bVar1 = iRam_? != 0;
                                (pGVar8->fields)._sharedLookAndFeel =
                                     *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x40);
                                if (bVar1) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedLookAndFeel >>
                                                 0xc);
                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                    puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar5 == *puVar3;
                                    if (bVar1) {
                                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                }
                                GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                          (pGVar8,(MethodInfo *)0x0);
                                lVar7 = 0x160;
                                if ((this->fields)._sharedLookAndFeel3D !=
                                    (UniversalGizmoLookAndFeel3D *)0x0) {
                                  lVar7 = 0x168;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._mvNZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x50);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      bVar1 = iRam_? != 0;
                                      (pGVar8->fields)._sharedLookAndFeel =
                                           *(GizmoLineSlider3DLookAndFeel **)(lVar7 + 0x48);
                                      if (bVar1) {
                                        uVar2 = (uint)((ulonglong)
                                                        &(pGVar8->fields)._sharedLookAndFeel >> 0xc)
                                        ;
                                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                          puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                          LOCK();
                                          bVar1 = uVar5 == *puVar3;
                                          if (bVar1) {
                                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar1);
                                      }
                                      GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
                                                (pGVar8,(MethodInfo *)0x0);
                                      iVar10 = iRam_?;
                                      lVar7 = 0x160;
                                      if ((this->fields)._sharedLookAndFeel3D !=
                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                        lVar7 = 0x168;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x58);
                                        pGVar11 = (this->fields)._mvXYSlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedLookAndFeel =
                                                 *(GizmoPlaneSlider3DLookAndFeel **)(lVar7 + 0x20);
                                            if (iVar10 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedLookAndFeel
                                                             >> 0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              do {
                                                uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar5 == *puVar3;
                                                if (bVar1) {
                                                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                                iVar10 = iRam_?;
                                              } while (!bVar1);
                                            }
                                            lVar7 = 0x160;
                                            if ((this->fields)._sharedLookAndFeel3D !=
                                                (UniversalGizmoLookAndFeel3D *)0x0) {
                                              lVar7 = 0x168;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x58);
                                              pGVar11 = (this->fields)._mvYZSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedLookAndFeel =
                                                       *(GizmoPlaneSlider3DLookAndFeel **)
                                                        (lVar7 + 0x28);
                                                  iVar12 = 0;
                                                  if (iVar10 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedLookAndFeel >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *puVar3;
                                                      if (bVar1) {
                                                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                      iVar12 = iRam_?;
                                                    } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x58);
                                                    pGVar11 = (this->fields)._mvZXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar13 = (this->fields)._mvVertSnapCap,
                                                           pGVar13 != (GizmoCap2D *)0x0)) {
                                                          (pGVar13->fields)._sharedLookAndFeel =
                                                               *(GizmoCap2DLookAndFeel **)
                                                                (lVar7 + 0x30);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar13->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar14 = 0x150;
                                                  lVar7 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar15 = (this->fields)._mvP2DModeXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(int *)(lVar7 + 0x18) == 0)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x20);
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x158;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          pGVar15 = (this->fields)._mvP2DModeYSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 2)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x28);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  lVar7 = 0x150;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar7 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar15 = (this->fields)._mvN2DModeXSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar15 != (GizmoLineSlider2D *)0x0) {
                                                        bVar1 = iRam_? != 0;
                                                        (pGVar15->fields)._sharedLookAndFeel =
                                                             *(GizmoLineSlider2DLookAndFeel **)
                                                              (lVar7 + 0x30);
                                                        if (bVar1) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar15->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                        }
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetupSharedLookAndFeel
                                                                  (pGVar15,(MethodInfo *)0x0);
                                                        lVar7 = 0x150;
                                                        if ((this->fields)._sharedLookAndFeel2D !=
                                                            (UniversalGizmoLookAndFeel2D *)0x0) {
                                                          lVar7 = 0x158;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar15 = (this->fields)._mvN2DModeYSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 4)
                                                            goto code_?;
                                                            if (pGVar15 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              bVar1 = iRam_? != 0;
                                                              (pGVar15->fields)._sharedLookAndFeel =
                                                                   *(GizmoLineSlider2DLookAndFeel **
                                                                    )(lVar7 + 0x38);
                                                              if (bVar1) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar15->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
                                                  GizmoLineSlider2D::
                                                  GizmoLineSlider2D_SetupSharedLookAndFeel
                                                            (pGVar15,(MethodInfo *)0x0);
                                                  iVar10 = iRam_?;
                                                  if ((this->fields)._sharedLookAndFeel2D !=
                                                      (UniversalGizmoLookAndFeel2D *)0x0) {
                                                    lVar14 = 0x158;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar14);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._mv2DModeDblSlider,
                                                     pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar16->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar7 + 0x30);
                                                    if (iVar10 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar7 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar7 = 0x168;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x78);
                                                      pGVar11 = (this->fields)._rtXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar11->fields)._sharedLookAndFeel =
                                                               *(GizmoPlaneSlider3DLookAndFeel **)
                                                                (lVar7 + 0x20);
                                                          iVar12 = 0;
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar11->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x78);
                                                    pGVar11 = (this->fields)._rtYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedLookAndFeel =
                                                             *(GizmoPlaneSlider3DLookAndFeel **)
                                                              (lVar7 + 0x28);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        lVar7 = 0x160;
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar7 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x78);
                                                          pGVar11 = (this->fields)._rtZSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar11 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar11->fields)._sharedLookAndFeel =
                                                                   *(GizmoPlaneSlider3DLookAndFeel
                                                                     **)(lVar7 + 0x30);
                                                              iVar12 = 0;
                                                              if (iVar10 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar11->fields).
                                                                                 _sharedLookAndFeel
                                                                               >> 0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (uVar2 
                                                  & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  iVar12 = iRam_?;
                                                  } while (!bVar1);
                                                  }
                                                  lVar7 = 0x160;
                                                  if ((this->fields)._sharedLookAndFeel3D !=
                                                      (UniversalGizmoLookAndFeel3D *)0x0) {
                                                    lVar7 = 0x168;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar16 = (this->fields)._rtCamLookSlider,
                                                     pGVar16 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar16->fields)._sharedLookAndFeel =
                                                         *(GizmoPlaneSlider2DLookAndFeel **)
                                                          (lVar7 + 0x88);
                                                    iVar10 = 0;
                                                    if (iVar12 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar16->fields).
                                                                       _sharedLookAndFeel >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                        iVar10 = iRam_?;
                                                      } while (!bVar1);
                                                    }
                                                    lVar7 = 0x160;
                                                    if ((this->fields)._sharedLookAndFeel3D !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0) {
                                                      lVar7 = 0x168;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if ((lVar7 != 0) &&
                                                       (pGVar17 = (this->fields)._rtMidCap,
                                                       pGVar17 != (GizmoCap3D *)0x0)) {
                                                      (pGVar17->fields)._sharedLookAndFeel =
                                                           *(GizmoCap3DLookAndFeel **)
                                                            (lVar7 + 0x68);
                                                      iVar12 = 0;
                                                      if (iVar10 != 0) {
                                                        uVar2 = (uint)((ulonglong)
                                                                        &(pGVar17->fields).
                                                                         _sharedLookAndFeel >> 0xc);
                                                        lVar7 = (ulonglong)
                                                                 ((uVar2 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          puVar3 = (ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                          LOCK();
                                                          bVar1 = uVar5 == *puVar3;
                                                          if (bVar1) {
                                                            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                          iVar12 = iRam_?;
                                                        } while (!bVar1);
                                                      }
                                                      lVar7 = 0x160;
                                                      if ((this->fields)._sharedLookAndFeel3D !=
                                                          (UniversalGizmoLookAndFeel3D *)0x0) {
                                                        lVar7 = 0x168;
                                                      }
                                                      lVar7 = *(longlong *)
                                                                ((longlong)&this->klass + lVar7);
                                                      if ((lVar7 != 0) &&
                                                         (pGVar17 = (this->fields)._scMidCap,
                                                         pGVar17 != (GizmoCap3D *)0x0)) {
                                                        (pGVar17->fields)._sharedLookAndFeel =
                                                             *(GizmoCap3DLookAndFeel **)
                                                              (lVar7 + 0x90);
                                                        iVar10 = 0;
                                                        if (iVar12 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar17->fields).
                                                                           _sharedLookAndFeel >> 0xc
                                                                         );
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            puVar3 = (ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *puVar3;
                                                            if (bVar1) {
                                                              *puVar3 = uVar5 | 1L << (uVar2 & 0x3f
                                                                                      );
                                                            }
                                                            UNLOCK();
                                                            iVar10 = iRam_?;
                                                          } while (!bVar1);
                                                        }
                                                        if ((this->fields)._sharedLookAndFeel3D !=
                                                            (UniversalGizmoLookAndFeel3D *)0x0) {
                                                          lVar6 = 0x168;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar6);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar18 = (this->fields)._scScaleGuide,
                                                           pGVar18 != (GizmoScaleGuide *)0x0)) {
                                                          (pGVar18->fields)._sharedLookAndFeel =
                                                               *(GizmoScaleGuideLookAndFeel **)
                                                                (lVar7 + 0xb8);
                                                          if (iVar10 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar18->fields).
                                                                             _sharedLookAndFeel >>
                                                                           0xc);
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              puVar3 = (ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *puVar3;
                                                              if (bVar1) {
                                                                *puVar3 = uVar5 | 1L << (uVar2 & 
                                                  0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  }
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_SharedSettings2D(UniversalGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings2D
               (UniversalGizmo *this,UniversalGizmoSettings2D *value,MethodInfo *method)

{
  bVar1 = uRam_? != 0;
  (this->fields)._sharedSettings2D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedSettings2D >> 0xc);
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
  lVar6 = 0x140;
  lVar7 = 0x140;
  if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
    lVar7 = 0x148;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x38);
    pGVar8 = (this->fields)._mvPXSlider;
    if (lVar7 != 0) {
      pUVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pUVar9,this,method);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        (pGVar8->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar7 + 0x20);
        if (uRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
          lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          method = (MethodInfo *)(lVar7 + 0xADDR);
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
            if (bVar1) {
              *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        uVar2 = uRam_?;
        pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
        lVar7 = 0x140;
        if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
          lVar7 = 0x148;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x38);
          pGVar8 = (this->fields)._mvPYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            method = *(MethodInfo **)(lVar7 + 0x28);
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
              if (uVar2 != 0) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                method = (MethodInfo *)(lVar7 + 0xADDR);
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                  if (bVar1) {
                    *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
                pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0x140;
              if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                lVar7 = 0x148;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x38);
                pGVar8 = (this->fields)._mvPZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  method = *(MethodInfo **)(lVar7 + 0x30);
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                    if ((int)pUVar9 != 0) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      method = (MethodInfo *)(lVar7 + 0xADDR);
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                        if (bVar1) {
                          *(ulonglong *)(lVar7 + 0xADDR) =
                               uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                      pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0x140;
                    if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                      lVar7 = 0x148;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._mvNXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x38);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        method = *(MethodInfo **)(lVar7 + 0x38);
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                          if ((int)pUVar9 != 0) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            method = (MethodInfo *)(lVar7 + 0xADDR);
                            do {
                              uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                              if (bVar1) {
                                *(ulonglong *)(lVar7 + 0xADDR) =
                                     uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                            pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                          }
                          lVar7 = 0x140;
                          if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                            lVar7 = 0x148;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._mvNYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x38);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              method = *(MethodInfo **)(lVar7 + 0x40);
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                (pGVar8->fields)._sharedSettings =
                                     (GizmoLineSlider3DSettings *)method;
                                if ((int)pUVar9 != 0) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >>
                                                 0xc);
                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  method = (MethodInfo *)(lVar7 + 0xADDR);
                                  do {
                                    uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                    if (bVar1) {
                                      *(ulonglong *)(lVar7 + 0xADDR) =
                                           uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                  pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                                }
                                lVar7 = 0x140;
                                if ((this->fields)._sharedSettings3D !=
                                    (UniversalGizmoSettings3D *)0x0) {
                                  lVar7 = 0x148;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._mvNZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x38);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    method = *(MethodInfo **)(lVar7 + 0x48);
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar8->fields)._sharedSettings =
                                           (GizmoLineSlider3DSettings *)method;
                                      if ((int)pUVar9 != 0) {
                                        uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings
                                                       >> 0xc);
                                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                        method = (MethodInfo *)(lVar7 + 0xADDR);
                                        do {
                                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                          LOCK();
                                          bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                          if (bVar1) {
                                            *(ulonglong *)(lVar7 + 0xADDR) =
                                                 uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar1);
                                        pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                                      }
                                      lVar7 = 0x140;
                                      if ((this->fields)._sharedSettings3D !=
                                          (UniversalGizmoSettings3D *)0x0) {
                                        lVar7 = 0x148;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x40);
                                        pGVar11 = (this->fields)._mvXYSlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedSettings =
                                                 *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x20);
                                            if ((int)pUVar9 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedSettings >>
                                                             0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              method = (MethodInfo *)(lVar7 + 0xADDR);
                                              do {
                                                uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar5 == *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                if (bVar1) {
                                                  *(ulonglong *)(lVar7 + 0xADDR) =
                                                       uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar1);
                                              pUVar9 = (UniversalGizmo *)
                                                        (ulonglong)uRam_?;
                                            }
                                            lVar7 = 0x140;
                                            if ((this->fields)._sharedSettings3D !=
                                                (UniversalGizmoSettings3D *)0x0) {
                                              lVar7 = 0x148;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x40);
                                              pGVar11 = (this->fields)._mvYZSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedSettings =
                                                       *(GizmoPlaneSlider3DSettings **)
                                                        (lVar7 + 0x28);
                                                  if ((int)pUVar9 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    method = (MethodInfo *)(lVar7 + 0xADDR);
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *(ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                      if (bVar1) {
                                                        *(ulonglong *)(lVar7 + 0xADDR) =
                                                             uVar5 | 1L << (ulonglong)
                                                                           (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar1);
                                                    pUVar9 = (UniversalGizmo *)
                                                              (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x40);
                                                    pGVar11 = (this->fields)._mvZXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x30);
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar12 = 0x130;
                                                        lVar7 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          pGVar13 = (this->fields)._mvP2DModeXSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(int *)(lVar7 + 0x18) == 0)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x20)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x138;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar13 = (this->fields)._mvP2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x28);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar13 = (this->fields)._mvN2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x30)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x138;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar13 = (this->fields)._mvN2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x38);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar14 = (this->fields).
                                                                     _mv2DModeDblSlider,
                                                           pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar7 + 0x30);
                                                          if ((int)pUVar9 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            method = (MethodInfo *)
                                                                     (lVar7 + 0xADDR);
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *(ulonglong *)
                                                                                 (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar15 = (this->fields)._mvVertexSnapDrag,
                                                     pGVar15 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar16 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar7 + 0x30);
                                                    if ((pGVar16 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar15->fields)._settings = pGVar16,
                                                       (int)pUVar9 != 0)) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar15->fields)._settings >>
                                                                     0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      method = (MethodInfo *)(lVar7 + 0xADDR);
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                        if (bVar1) {
                                                          *(ulonglong *)(lVar7 + 0xADDR) =
                                                               uVar5 | 1L << (ulonglong)
                                                                             (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar1);
                                                      pUVar9 = (UniversalGizmo *)
                                                                (ulonglong)uRam_?;
                                                    }
                                                    lVar7 = 0x140;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (UniversalGizmoSettings3D *)0x0) {
                                                      lVar7 = 0x148;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x50);
                                                      pGVar11 = (this->fields)._rtXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar11->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider3DSettings **)
                                                                (lVar7 + 0x20);
                                                          if ((int)pUVar9 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar11->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            method = (MethodInfo *)
                                                                     (lVar7 + 0xADDR);
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *(ulonglong *)
                                                                                 (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x50);
                                                    pGVar11 = (this->fields)._rtYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x28);
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0x140;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (UniversalGizmoSettings3D *)0x0) {
                                                          lVar7 = 0x148;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x50);
                                                          pGVar11 = (this->fields)._rtZSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar11 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar11->fields)._sharedSettings =
                                                                   *(GizmoPlaneSlider3DSettings **)
                                                                    (lVar7 + 0x30);
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar11->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (
                                                  ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar6 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar14 = (this->fields)._rtCamLookSlider,
                                                     pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar14->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar7 + 0x58);
                                                    if ((int)pUVar9 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar14->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar1);
                                                    }
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_SharedSettings3D(UniversalGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings3D
               (UniversalGizmo *this,UniversalGizmoSettings3D *value,MethodInfo *method)

{
  bVar1 = uRam_? != 0;
  (this->fields)._sharedSettings3D = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedSettings3D >> 0xc);
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
  lVar6 = 0x140;
  lVar7 = 0x140;
  if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
    lVar7 = 0x148;
  }
  lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x38);
    pGVar8 = (this->fields)._mvPXSlider;
    if (lVar7 != 0) {
      pUVar9 = this;
      if (*(int *)(lVar7 + 0x18) == 0) {
code_?:
        FUN_?(pUVar9,this,method);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pGVar8 != (GizmoLineSlider3D *)0x0) {
        (pGVar8->fields)._sharedSettings = *(GizmoLineSlider3DSettings **)(lVar7 + 0x20);
        if (uRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
          lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          method = (MethodInfo *)(lVar7 + 0xADDR);
          do {
            uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
            if (bVar1) {
              *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        uVar2 = uRam_?;
        pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
        lVar7 = 0x140;
        if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
          lVar7 = 0x148;
        }
        lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x38);
          pGVar8 = (this->fields)._mvPYSlider;
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto code_?;
            method = *(MethodInfo **)(lVar7 + 0x28);
            if (pGVar8 != (GizmoLineSlider3D *)0x0) {
              (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
              if (uVar2 != 0) {
                uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                method = (MethodInfo *)(lVar7 + 0xADDR);
                do {
                  uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                  if (bVar1) {
                    *(ulonglong *)(lVar7 + 0xADDR) = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
                pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
              }
              lVar7 = 0x140;
              if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                lVar7 = 0x148;
              }
              lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
              if (lVar7 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x38);
                pGVar8 = (this->fields)._mvPZSlider;
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) < 3) goto code_?;
                  method = *(MethodInfo **)(lVar7 + 0x30);
                  if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                    (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                    if ((int)pUVar9 != 0) {
                      uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      method = (MethodInfo *)(lVar7 + 0xADDR);
                      do {
                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                        LOCK();
                        bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                        if (bVar1) {
                          *(ulonglong *)(lVar7 + 0xADDR) =
                               uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar1);
                      pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                    }
                    lVar7 = 0x140;
                    if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                      lVar7 = 0x148;
                    }
                    lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                    if (lVar7 != 0) {
                      pGVar8 = (this->fields)._mvNXSlider;
                      lVar7 = *(longlong *)(lVar7 + 0x38);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 4) goto code_?;
                        method = *(MethodInfo **)(lVar7 + 0x38);
                        if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                          (pGVar8->fields)._sharedSettings = (GizmoLineSlider3DSettings *)method;
                          if ((int)pUVar9 != 0) {
                            uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >> 0xc);
                            lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            method = (MethodInfo *)(lVar7 + 0xADDR);
                            do {
                              uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                              if (bVar1) {
                                *(ulonglong *)(lVar7 + 0xADDR) =
                                     uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar1);
                            pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                          }
                          lVar7 = 0x140;
                          if ((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) {
                            lVar7 = 0x148;
                          }
                          lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                          if (lVar7 != 0) {
                            pGVar8 = (this->fields)._mvNYSlider;
                            lVar7 = *(longlong *)(lVar7 + 0x38);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) < 5) goto code_?;
                              method = *(MethodInfo **)(lVar7 + 0x40);
                              if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                (pGVar8->fields)._sharedSettings =
                                     (GizmoLineSlider3DSettings *)method;
                                if ((int)pUVar9 != 0) {
                                  uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings >>
                                                 0xc);
                                  lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  method = (MethodInfo *)(lVar7 + 0xADDR);
                                  do {
                                    uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                    if (bVar1) {
                                      *(ulonglong *)(lVar7 + 0xADDR) =
                                           uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar1);
                                  pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                                }
                                lVar7 = 0x140;
                                if ((this->fields)._sharedSettings3D !=
                                    (UniversalGizmoSettings3D *)0x0) {
                                  lVar7 = 0x148;
                                }
                                lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                if (lVar7 != 0) {
                                  pGVar8 = (this->fields)._mvNZSlider;
                                  lVar7 = *(longlong *)(lVar7 + 0x38);
                                  if (lVar7 != 0) {
                                    if (*(uint *)(lVar7 + 0x18) < 6) goto code_?;
                                    method = *(MethodInfo **)(lVar7 + 0x48);
                                    if (pGVar8 != (GizmoLineSlider3D *)0x0) {
                                      (pGVar8->fields)._sharedSettings =
                                           (GizmoLineSlider3DSettings *)method;
                                      if ((int)pUVar9 != 0) {
                                        uVar2 = (uint)((ulonglong)&(pGVar8->fields)._sharedSettings
                                                       >> 0xc);
                                        lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                        method = (MethodInfo *)(lVar7 + 0xADDR);
                                        do {
                                          uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                          LOCK();
                                          bVar1 = uVar5 == *(ulonglong *)(lVar7 + 0xADDR);
                                          if (bVar1) {
                                            *(ulonglong *)(lVar7 + 0xADDR) =
                                                 uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar1);
                                        pUVar9 = (UniversalGizmo *)(ulonglong)uRam_?;
                                      }
                                      lVar7 = 0x140;
                                      if ((this->fields)._sharedSettings3D !=
                                          (UniversalGizmoSettings3D *)0x0) {
                                        lVar7 = 0x148;
                                      }
                                      lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                      if (lVar7 != 0) {
                                        lVar7 = *(longlong *)(lVar7 + 0x40);
                                        pGVar11 = (this->fields)._mvXYSlider;
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) == 0)
                                          goto code_?;
                                          if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                            (pGVar11->fields)._sharedSettings =
                                                 *(GizmoPlaneSlider3DSettings **)(lVar7 + 0x20);
                                            if ((int)pUVar9 != 0) {
                                              uVar2 = (uint)((ulonglong)
                                                              &(pGVar11->fields)._sharedSettings >>
                                                             0xc);
                                              lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                              method = (MethodInfo *)(lVar7 + 0xADDR);
                                              do {
                                                uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                LOCK();
                                                bVar1 = uVar5 == *(ulonglong *)
                                                                   (lVar7 + 0xADDR);
                                                if (bVar1) {
                                                  *(ulonglong *)(lVar7 + 0xADDR) =
                                                       uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar1);
                                              pUVar9 = (UniversalGizmo *)
                                                        (ulonglong)uRam_?;
                                            }
                                            lVar7 = 0x140;
                                            if ((this->fields)._sharedSettings3D !=
                                                (UniversalGizmoSettings3D *)0x0) {
                                              lVar7 = 0x148;
                                            }
                                            lVar7 = *(longlong *)((longlong)&this->klass + lVar7);
                                            if (lVar7 != 0) {
                                              lVar7 = *(longlong *)(lVar7 + 0x40);
                                              pGVar11 = (this->fields)._mvYZSlider;
                                              if (lVar7 != 0) {
                                                if (*(uint *)(lVar7 + 0x18) < 2)
                                                goto code_?;
                                                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                  (pGVar11->fields)._sharedSettings =
                                                       *(GizmoPlaneSlider3DSettings **)
                                                        (lVar7 + 0x28);
                                                  if ((int)pUVar9 != 0) {
                                                    uVar2 = (uint)((ulonglong)
                                                                    &(pGVar11->fields).
                                                                     _sharedSettings >> 0xc);
                                                    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) *
                                                             8;
                                                    method = (MethodInfo *)(lVar7 + 0xADDR);
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
                                                      LOCK();
                                                      bVar1 = uVar5 == *(ulonglong *)
                                                                         (lVar7 + 0xADDR);
                                                      if (bVar1) {
                                                        *(ulonglong *)(lVar7 + 0xADDR) =
                                                             uVar5 | 1L << (ulonglong)
                                                                           (uVar2 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar1);
                                                    pUVar9 = (UniversalGizmo *)
                                                              (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x40);
                                                    pGVar11 = (this->fields)._mvZXSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 3)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x30);
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar12 = 0x130;
                                                        lVar7 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          pGVar13 = (this->fields)._mvP2DModeXSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(int *)(lVar7 + 0x18) == 0)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x20)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x138;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    pGVar13 = (this->fields)._mvP2DModeYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x28);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0x130;
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar7 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          pGVar13 = (this->fields)._mvN2DModeXSlider;
                                                          lVar7 = *(longlong *)(lVar7 + 0x38);
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            method = *(MethodInfo **)(lVar7 + 0x30)
                                                            ;
                                                            if (pGVar13 != (GizmoLineSlider2D *)0x0)
                                                            {
                                                              (pGVar13->fields)._sharedSettings =
                                                                   (GizmoLineSlider2DSettings *)
                                                                   method;
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar13->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                method = (MethodInfo *)
                                                                         (lVar7 + 0xADDR);
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *(ulonglong *)
                                                                                     (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x130;
                                                  if ((this->fields)._sharedSettings2D !=
                                                      (UniversalGizmoSettings2D *)0x0) {
                                                    lVar7 = 0x138;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    pGVar13 = (this->fields)._mvN2DModeYSlider;
                                                    lVar7 = *(longlong *)(lVar7 + 0x38);
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 4)
                                                      goto code_?;
                                                      method = *(MethodInfo **)(lVar7 + 0x38);
                                                      if (pGVar13 != (GizmoLineSlider2D *)0x0) {
                                                        (pGVar13->fields)._sharedSettings =
                                                             (GizmoLineSlider2DSettings *)method;
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar13->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        if ((this->fields)._sharedSettings2D !=
                                                            (UniversalGizmoSettings2D *)0x0) {
                                                          lVar12 = 0x138;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar12);
                                                        if ((lVar7 != 0) &&
                                                           (pGVar14 = (this->fields).
                                                                     _mv2DModeDblSlider,
                                                           pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                          (pGVar14->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider2DSettings **)
                                                                (lVar7 + 0x30);
                                                          if ((int)pUVar9 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar14->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            method = (MethodInfo *)
                                                                     (lVar7 + 0xADDR);
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *(ulonglong *)
                                                                                 (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar15 = (this->fields)._mvVertexSnapDrag,
                                                     pGVar15 != (GizmoObjectVertexSnapDrag3D *)0x0))
                                                  {
                                                    pGVar16 = *(GizmoObjectVertexSnapSettings **)
                                                              (lVar7 + 0x30);
                                                    if ((pGVar16 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0) &&
                                                       ((pGVar15->fields)._settings = pGVar16,
                                                       (int)pUVar9 != 0)) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar15->fields)._settings >>
                                                                     0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      method = (MethodInfo *)(lVar7 + 0xADDR);
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                        if (bVar1) {
                                                          *(ulonglong *)(lVar7 + 0xADDR) =
                                                               uVar5 | 1L << (ulonglong)
                                                                             (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar1);
                                                      pUVar9 = (UniversalGizmo *)
                                                                (ulonglong)uRam_?;
                                                    }
                                                    lVar7 = 0x140;
                                                    if ((this->fields)._sharedSettings3D !=
                                                        (UniversalGizmoSettings3D *)0x0) {
                                                      lVar7 = 0x148;
                                                    }
                                                    lVar7 = *(longlong *)
                                                              ((longlong)&this->klass + lVar7);
                                                    if (lVar7 != 0) {
                                                      lVar7 = *(longlong *)(lVar7 + 0x50);
                                                      pGVar11 = (this->fields)._rtXSlider;
                                                      if (lVar7 != 0) {
                                                        if (*(int *)(lVar7 + 0x18) == 0)
                                                        goto code_?;
                                                        if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                          (pGVar11->fields)._sharedSettings =
                                                               *(GizmoPlaneSlider3DSettings **)
                                                                (lVar7 + 0x20);
                                                          if ((int)pUVar9 != 0) {
                                                            uVar2 = (uint)((ulonglong)
                                                                            &(pGVar11->fields).
                                                                             _sharedSettings >> 0xc)
                                                            ;
                                                            lVar7 = (ulonglong)
                                                                     ((uVar2 & 0x1fffff) >> 6) * 8;
                                                            method = (MethodInfo *)
                                                                     (lVar7 + 0xADDR);
                                                            do {
                                                              uVar5 = *(ulonglong *)
                                                                       (lVar7 + 0xADDR);
                                                              LOCK();
                                                              bVar1 = uVar5 == *(ulonglong *)
                                                                                 (lVar7 + 
                                                  0xADDR);
                                                  if (bVar1) {
                                                    *(ulonglong *)(lVar7 + 0xADDR) =
                                                         uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  lVar7 = 0x140;
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar7 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar7);
                                                  if (lVar7 != 0) {
                                                    lVar7 = *(longlong *)(lVar7 + 0x50);
                                                    pGVar11 = (this->fields)._rtYSlider;
                                                    if (lVar7 != 0) {
                                                      if (*(uint *)(lVar7 + 0x18) < 2)
                                                      goto code_?;
                                                      if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                                                        (pGVar11->fields)._sharedSettings =
                                                             *(GizmoPlaneSlider3DSettings **)
                                                              (lVar7 + 0x28);
                                                        if ((int)pUVar9 != 0) {
                                                          uVar2 = (uint)((ulonglong)
                                                                          &(pGVar11->fields).
                                                                           _sharedSettings >> 0xc);
                                                          lVar7 = (ulonglong)
                                                                   ((uVar2 & 0x1fffff) >> 6) * 8;
                                                          method = (MethodInfo *)
                                                                   (lVar7 + 0xADDR);
                                                          do {
                                                            uVar5 = *(ulonglong *)
                                                                     (lVar7 + 0xADDR);
                                                            LOCK();
                                                            bVar1 = uVar5 == *(ulonglong *)
                                                                               (lVar7 + 0xADDR
                                                                               );
                                                            if (bVar1) {
                                                              *(ulonglong *)(lVar7 + 0xADDR) =
                                                                   uVar5 | 1L << (ulonglong)
                                                                                 (uVar2 & 0x3f);
                                                            }
                                                            UNLOCK();
                                                          } while (!bVar1);
                                                          pUVar9 = (UniversalGizmo *)
                                                                    (ulonglong)uRam_?;
                                                        }
                                                        lVar7 = 0x140;
                                                        if ((this->fields)._sharedSettings3D !=
                                                            (UniversalGizmoSettings3D *)0x0) {
                                                          lVar7 = 0x148;
                                                        }
                                                        lVar7 = *(longlong *)
                                                                  ((longlong)&this->klass + lVar7);
                                                        if (lVar7 != 0) {
                                                          lVar7 = *(longlong *)(lVar7 + 0x50);
                                                          pGVar11 = (this->fields)._rtZSlider;
                                                          if (lVar7 != 0) {
                                                            if (*(uint *)(lVar7 + 0x18) < 3)
                                                            goto code_?;
                                                            if (pGVar11 != (GizmoPlaneSlider3D *)0x0)
                                                            {
                                                              (pGVar11->fields)._sharedSettings =
                                                                   *(GizmoPlaneSlider3DSettings **)
                                                                    (lVar7 + 0x30);
                                                              if ((int)pUVar9 != 0) {
                                                                uVar2 = (uint)((ulonglong)
                                                                                &(pGVar11->fields).
                                                                                 _sharedSettings >>
                                                                               0xc);
                                                                lVar7 = (ulonglong)
                                                                         ((uVar2 & 0x1fffff) >> 6)
                                                                         * 8;
                                                                do {
                                                                  uVar5 = *(ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  puVar3 = (ulonglong *)
                                                                           (lVar7 + 0xADDR);
                                                                  LOCK();
                                                                  bVar1 = uVar5 == *puVar3;
                                                                  if (bVar1) {
                                                                    *puVar3 = uVar5 | 1L << (
                                                  ulonglong)(uVar2 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                  } while (!bVar1);
                                                  pUVar9 = (UniversalGizmo *)
                                                            (ulonglong)uRam_?;
                                                  }
                                                  if ((this->fields)._sharedSettings3D !=
                                                      (UniversalGizmoSettings3D *)0x0) {
                                                    lVar6 = 0x148;
                                                  }
                                                  lVar7 = *(longlong *)
                                                            ((longlong)&this->klass + lVar6);
                                                  if ((lVar7 != 0) &&
                                                     (pGVar14 = (this->fields)._rtCamLookSlider,
                                                     pGVar14 != (GizmoPlaneSlider2D *)0x0)) {
                                                    (pGVar14->fields)._sharedSettings =
                                                         *(GizmoPlaneSlider2DSettings **)
                                                          (lVar7 + 0x58);
                                                    if ((int)pUVar9 != 0) {
                                                      uVar2 = (uint)((ulonglong)
                                                                      &(pGVar14->fields).
                                                                       _sharedSettings >> 0xc);
                                                      lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        puVar3 = (ulonglong *)(lVar7 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar1 = uVar5 == *puVar3;
                                                        if (bVar1) {
                                                          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar1);
                                                    }
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_Use2DModeEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_Use2DModeEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._use2DModeEnableHotkey = value;
  return;
}


/* Void set_UseSnapEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_UseSnapEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useSnapEnableHotkey = value;
  return;
}


/* Void set_UseVertSnapEnableHotkey(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_UseVertSnapEnableHotkey
               (UniversalGizmo *this,bool value,MethodInfo *method)

{
  (this->fields)._useVertSnapEnableHotkey = value;
  return;
}


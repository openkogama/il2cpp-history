
/* UniversalGizmo+MvVertexSnapState GetMvVertexSnapState() */

UniversalGizmo_MvVertexSnapState__Enum
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvVertexSnapState
          (UniversalGizmo *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if ((this->fields)._isMvVertexSnapEnabled == 0) {
    return UniversalGizmo_MvVertexSnapState__Enum_Inactive;
  }
  pGStack_2 = (this->fields)._mvVertexSnapDrag;
  if (pGStack_2 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_1 = (pGStack_2->klass->vtable).get_DragChannel_1.methodPtr;
    cVar3 = (*(code *)(pGStack_2->klass->vtable).get_IsActive_1.method)();
    return (uint)(cVar3 != '\0');
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  UVar7 = (*pcVar6)();
  return UVar7;
}


/* Single GetMvZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel,
     pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0)) {
    if (pGVar2->max_length == 0) goto code_?;
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      if ((pGVar2->vector[0]->fields)._useZoomFactor == 0) {
        return 1.0;
      }
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__CameraEx);
        }
        fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
        return fVar3;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetMvZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetMvZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel,
     pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0)) {
    if (pGVar2->max_length == 0) {
      func_?();
      func_?();
      pcVar3 = (code *)swi(3);
      fVar4 = (float10)(*pcVar3)();
      return (float)fVar4;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DLookAndFeel *)0x0) {
      if ((pGVar2->vector[0]->fields)._useZoomFactor != 0) {
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar5 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
        return fVar5;
      }
      return 1.0;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetRtZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._rtMidCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return 1.0;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetRtZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetRtZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._rtMidCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor != 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
    return 1.0;
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetScZoomFactor(Vector3) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor
                (UniversalGizmo *this,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._scMidCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return 1.0;
    }
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetScZoomFactor(Vector3, Camera) */

float Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_GetScZoomFactor_1
                (UniversalGizmo *this,Vector3 position,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
      (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
     (pGVar2 = (pUVar1->fields)._scMidCapLookAndFeel, pGVar2 != (GizmoCap3DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._useZoomFactor != 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = CameraEx::CameraEx_EstimateZoomFactor(camera,position,(MethodInfo *)0x0);
      return fVar3;
    }
    return 1.0;
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
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
        GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._mv2DModeDblSlider;
        if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
          GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar2,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsDraggingMoveHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingMoveHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._._gizmo;
    if (this_01 != (Gizmo *)0x0) {
      handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      bVar1 = UniversalGizmo_IsMoveHandle(this,(int32_t)handleId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsDraggingRotationHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingRotationHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._._gizmo;
    if (this_01 != (Gizmo *)0x0) {
      handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      bVar1 = UniversalGizmo_IsRotationHandle(this,(int32_t)handleId,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsDraggingScaleHandle() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsDraggingScaleHandle
               (UniversalGizmo *this,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._._gizmo;
    if (this_01 != (Gizmo *)0x0) {
      pSVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerEventBase`1[System
               ::Object]::PointerEventBase_1_System_Object__get_pointerType
                         ((PointerEventBase_1_System_Object_ *)this_01,(MethodInfo *)0x0);
      this_02 = (this->fields)._scMidCap;
      if (this_02 != (GizmoCap3D *)0x0) {
        pSVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_02,(MethodInfo *)0x0);
        return pSVar3 == pSVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
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
            this_01 = (this->fields)._mv2DModeDblSlider;
            if (this_01 != (GizmoPlaneSlider2D *)0x0) {
              iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                      Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_01,
                                 (MethodInfo *)0x0);
              return iVar4 == handleId;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
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
    this_01 = (this->fields)._rtMidCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
      if (pvVar2 == (void *)handleId) {
        return 1;
      }
      this_02 = (this->fields)._rtCamLookSlider;
      if (this_02 != (GizmoPlaneSlider2D *)0x0) {
        iVar3 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                SparselyPopulatedArrayFragment_1_System_Object__get_Length
                          ((SparselyPopulatedArrayFragment_1_System_Object_ *)this_02,
                           (MethodInfo *)0x0);
        return iVar3 == handleId;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean IsScaleHandle(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_IsScaleHandle
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    return pvVar1 == (void *)handleId;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnAttached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoCap3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider2D);
    func_?(&TypeInfo__RTG__GizmoLineSlider3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                     ((Datatype_Name *)0x0,unaff_EDI);
  pGVar3 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._mvXYSlider;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  pGVar1 = (this->fields)._._gizmo;
  iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
  pGVar3 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,iVar5,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._mvYZSlider;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_ID::Datatype_ID_get_TypeCode
                     ((Datatype_ID *)0x0,in_stack_6);
  pGVar3 = (GizmoPlaneSlider3D *)func_?();
  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  (this->fields)._mvZXSlider = pGVar3;
  func_?();
  pGVar7 = (this->fields)._mvDblSliders;
  if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
              (pGVar7,(this->fields)._mvXYSlider,(MethodInfo *)0x0);
    pGVar7 = (this->fields)._mvDblSliders;
    if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                (pGVar7,(this->fields)._mvYZSlider,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._mvDblSliders;
      if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0) {
        GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_Add
                  (pGVar7,(this->fields)._mvZXSlider,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._gizmo;
        iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_SizeOf_23((MethodInfo *)0x0);
        XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
                 Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,in_stack_8);
        pGVar9 = TypeInfo__RTG__GizmoLineSlider3D;
        pGVar10 = (GizmoLineSlider3D *)func_?();
        GizmoLineSlider3D::GizmoLineSlider3D__ctor(pGVar10,pGVar1,iVar5,XVar2,(MethodInfo *)0x0);
        *(GizmoLineSlider3D **)(iVar5 + 0x10) = pGVar10;
        func_?();
        if (*(GizmoLineSlider3D **)(iVar5 + 0x10) != (GizmoLineSlider3D *)0x0) {
          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                    (*(GizmoLineSlider3D **)(iVar5 + 0x10),GizmoDragChannel__Enum_Offset,
                     (MethodInfo *)0x0);
          if (*(GizmoLineSlider3D **)(iVar5 + 0x10) != (GizmoLineSlider3D *)0x0) {
            GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                      (*(GizmoLineSlider3D **)(iVar5 + 0x10),0,AxisSign__Enum_Positive,
                       (MethodInfo *)0x0);
            pGVar1 = *(Gizmo **)(iVar5 + 8);
            EVar11 = System.Core.dll::System::Linq::Expressions::MemberExpression::
                     MemberExpression_get_NodeType((MemberExpression *)0x0,(MethodInfo *)pGVar9);
            XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_QName::
                     Datatype_QName_get_TypeCode((Datatype_QName *)0x0,in_stack_8);
            pGVar9 = TypeInfo__RTG__GizmoLineSlider3D;
            pGVar10 = (GizmoLineSlider3D *)func_?();
            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                      (pGVar10,pGVar1,EVar11,XVar2,(MethodInfo *)0x0);
            *(GizmoLineSlider3D **)(EVar11 + ExpressionType__Enum_1_Negate) = pGVar10;
            func_?();
            if (*(GizmoLineSlider3D **)(EVar11 + ExpressionType__Enum_1_Negate) !=
                (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                        (*(GizmoLineSlider3D **)(EVar11 + ExpressionType__Enum_1_Negate),
                         GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
              if (*(GizmoLineSlider3D **)(EVar11 + ExpressionType__Enum_1_Negate) !=
                  (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                          (*(GizmoLineSlider3D **)(EVar11 + ExpressionType__Enum_1_Negate),0,
                           AxisSign__Enum_Negative,(MethodInfo *)0x0);
                pGVar1 = *(Gizmo **)(EVar11 + ExpressionType__Enum_1_Conditional);
                XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_yearMonth::
                         Datatype_yearMonth_get_TypeCode
                                   ((Datatype_yearMonth *)0x0,(MethodInfo *)pGVar9);
                XVar12 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
                         Datatype_base64Binary_get_TypeCode
                                   ((Datatype_base64Binary *)0x0,in_stack_8);
                pGVar10 = (GizmoLineSlider3D *)func_?();
                GizmoLineSlider3D::GizmoLineSlider3D__ctor
                          (pGVar10,pGVar1,XVar2,XVar12,(MethodInfo *)0x0);
                *(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) = pGVar10;
                func_?();
                if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) !=
                    (GizmoLineSlider3D *)0x0) {
                  GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                            (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date),
                             GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                  if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date) !=
                      (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                              (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_Date),1,
                               AxisSign__Enum_Positive,(MethodInfo *)0x0);
                    pGVar1 = *(Gizmo **)(XVar2 + XmlTypeCode__Enum_Comment);
                    iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_SizeOf_11((MethodInfo *)0x0);
                    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::
                             Datatype_NOTATION_get_TypeCode
                                       ((Datatype_NOTATION *)0x0,in_stack_8);
                    pGVar9 = TypeInfo__RTG__GizmoLineSlider3D;
                    pGVar10 = (GizmoLineSlider3D *)func_?();
                    GizmoLineSlider3D::GizmoLineSlider3D__ctor
                              (pGVar10,pGVar1,iVar5,XVar2,(MethodInfo *)0x0);
                    *(GizmoLineSlider3D **)(iVar5 + 0x20) = pGVar10;
                    func_?();
                    if (*(GizmoLineSlider3D **)(iVar5 + 0x20) != (GizmoLineSlider3D *)0x0) {
                      GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                (*(GizmoLineSlider3D **)(iVar5 + 0x20),
                                 GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                      if (*(GizmoLineSlider3D **)(iVar5 + 0x20) != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                  (*(GizmoLineSlider3D **)(iVar5 + 0x20),1,AxisSign__Enum_Negative,
                                   (MethodInfo *)0x0);
                        pGVar1 = *(Gizmo **)(iVar5 + 8);
                        XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_year::
                                 Datatype_year_get_TypeCode
                                           ((Datatype_year *)0x0,(MethodInfo *)pGVar9);
                        iVar5 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                                 UnsafeUtility::UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
                        pGVar9 = TypeInfo__RTG__GizmoLineSlider3D;
                        pGVar10 = (GizmoLineSlider3D *)func_?();
                        GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                  (pGVar10,pGVar1,XVar2,iVar5,(MethodInfo *)0x0);
                        *(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) = pGVar10;
                        func_?();
                        if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) !=
                            (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                    (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay),
                                     GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                          if (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay) !=
                              (GizmoLineSlider3D *)0x0) {
                            GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                      (*(GizmoLineSlider3D **)(XVar2 + XmlTypeCode__Enum_GDay),2,
                                       AxisSign__Enum_Positive,(MethodInfo *)0x0);
                            pGVar1 = *(Gizmo **)(XVar2 + XmlTypeCode__Enum_Comment);
                            XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_month::
                                     Datatype_month_get_TypeCode
                                               ((Datatype_month *)0x0,(MethodInfo *)pGVar9);
                            XVar12 = System.Xml.dll::System::Xml::Schema::
                                     Datatype_normalizedStringV1Compat::
                                     Datatype_normalizedStringV1Compat_get_TypeCode
                                               ((Datatype_normalizedStringV1Compat *)0x0,
                                                (MethodInfo *)pGVar9);
                            pGVar10 = (GizmoLineSlider3D *)func_?();
                            GizmoLineSlider3D::GizmoLineSlider3D__ctor
                                      (pGVar10,pGVar1,XVar2,XVar12,(MethodInfo *)0x0);
                            *(GizmoLineSlider3D **)(XVar12 + XmlTypeCode__Enum_NCName) = pGVar10;
                            func_?();
                            if (*(GizmoLineSlider3D **)(XVar12 + XmlTypeCode__Enum_NCName) !=
                                (GizmoLineSlider3D *)0x0) {
                              GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
                                        (*(GizmoLineSlider3D **)(XVar12 + XmlTypeCode__Enum_NCName),
                                         GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                              if (*(GizmoLineSlider3D **)(XVar12 + XmlTypeCode__Enum_NCName) !=
                                  (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
                                          (*(GizmoLineSlider3D **)
                                            (XVar12 + XmlTypeCode__Enum_NCName),2,
                                           AxisSign__Enum_Negative,(MethodInfo *)0x0);
                                if (*(GizmoLineSlider3DCollection **)
                                     (XVar12 + XmlTypeCode__Enum_Integer) !=
                                    (GizmoLineSlider3DCollection *)0x0) {
                                  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                            (*(GizmoLineSlider3DCollection **)
                                              (XVar12 + XmlTypeCode__Enum_Integer),
                                             *(GizmoLineSlider3D **)
                                              (XVar12 + XmlTypeCode__Enum_Double),(MethodInfo *)0x0)
                                  ;
                                  if (*(GizmoLineSlider3DCollection **)
                                       (XVar12 + XmlTypeCode__Enum_Integer) !=
                                      (GizmoLineSlider3DCollection *)0x0) {
                                    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                              (*(GizmoLineSlider3DCollection **)
                                                (XVar12 + XmlTypeCode__Enum_Integer),
                                               *(GizmoLineSlider3D **)
                                                (XVar12 + XmlTypeCode__Enum_Date),(MethodInfo *)0x0)
                                    ;
                                    if (*(GizmoLineSlider3DCollection **)
                                         (XVar12 + XmlTypeCode__Enum_Integer) !=
                                        (GizmoLineSlider3DCollection *)0x0) {
                                      GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                (*(GizmoLineSlider3DCollection **)
                                                  (XVar12 + XmlTypeCode__Enum_Integer),
                                                 *(GizmoLineSlider3D **)
                                                  (XVar12 + XmlTypeCode__Enum_GDay),
                                                 (MethodInfo *)0x0);
                                      if (*(GizmoLineSlider3DCollection **)
                                           (XVar12 + XmlTypeCode__Enum_Integer) !=
                                          (GizmoLineSlider3DCollection *)0x0) {
                                        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Add
                                                  (*(GizmoLineSlider3DCollection **)
                                                    (XVar12 + XmlTypeCode__Enum_Integer),
                                                   *(GizmoLineSlider3D **)
                                                    (XVar12 + XmlTypeCode__Enum_AnyUri),
                                                   (MethodInfo *)0x0);
                                        if (*(GizmoLineSlider3DCollection **)
                                             (XVar12 + XmlTypeCode__Enum_Integer) !=
                                            (GizmoLineSlider3DCollection *)0x0) {
                                          GizmoLineSlider3DCollection::
                                          GizmoLineSlider3DCollection_Add
                                                    (*(GizmoLineSlider3DCollection **)
                                                      (XVar12 + XmlTypeCode__Enum_Integer),
                                                     *(GizmoLineSlider3D **)
                                                      (XVar12 + XmlTypeCode__Enum_Token),
                                                     (MethodInfo *)0x0);
                                          if (*(GizmoLineSlider3DCollection **)
                                               (XVar12 + XmlTypeCode__Enum_Integer) !=
                                              (GizmoLineSlider3DCollection *)0x0) {
                                            GizmoLineSlider3DCollection::
                                            GizmoLineSlider3DCollection_Add
                                                      (*(GizmoLineSlider3DCollection **)
                                                        (XVar12 + XmlTypeCode__Enum_Integer),
                                                       *(GizmoLineSlider3D **)
                                                        (XVar12 + XmlTypeCode__Enum_NCName),
                                                       (MethodInfo *)0x0);
                                            pGVar13 = *(GizmoLineSlider3DCollection **)
                                                      (XVar12 + XmlTypeCode__Enum_Integer);
                                            if (*(GizmoSlider **)(XVar12 + XmlTypeCode__Enum_Int) !=
                                                (GizmoSlider *)0x0) {
                                              pPVar14 = GizmoSlider::GizmoSlider_get_HoverPriority3D
                                                                  (*(GizmoSlider **)
                                                                    (XVar12 + XmlTypeCode__Enum_Int)
                                                                   ,(MethodInfo *)0x0);
                                              if (pGVar13 != (GizmoLineSlider3DCollection *)0x0) {
                                                GizmoLineSlider3DCollection::
                                                GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                          (pGVar13,pPVar14,(MethodInfo *)0x0);
                                                pGVar13 = *(GizmoLineSlider3DCollection **)
                                                          (XVar12 + XmlTypeCode__Enum_Integer);
                                                if (*(GizmoSlider **)
                                                     (XVar12 + XmlTypeCode__Enum_UnsignedLong) !=
                                                    (GizmoSlider *)0x0) {
                                                  pPVar14 = GizmoSlider::
                                                            GizmoSlider_get_HoverPriority3D
                                                                      (*(GizmoSlider **)
                                                                        (XVar12 + 
                                                  XmlTypeCode__Enum_UnsignedLong),(MethodInfo *)0x0)
                                                  ;
                                                  if (pGVar13 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar13,pPVar14,(MethodInfo *)0x0);
                                                  pGVar13 = *(GizmoLineSlider3DCollection **)
                                                            (XVar12 + XmlTypeCode__Enum_Integer);
                                                  if (*(GizmoSlider **)
                                                       (XVar12 + XmlTypeCode__Enum_PositiveInteger)
                                                      != (GizmoSlider *)0x0) {
                                                    pPVar14 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        (*(GizmoSlider **)
                                                                          (XVar12 + 
                                                  XmlTypeCode__Enum_PositiveInteger),
                                                  (MethodInfo *)0x0);
                                                  if (pGVar13 != (GizmoLineSlider3DCollection *)0x0)
                                                  {
                                                    GizmoLineSlider3DCollection::
                                                                                                        
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityLowerThan
                                                            (pGVar13,pPVar14,(MethodInfo *)0x0);
                                                  pGVar1 = *(Gizmo **)
                                                             (XVar12 + XmlTypeCode__Enum_Comment);
                                                  iVar5 = GizmoHandleId::GizmoHandleId_get_VertSnap
                                                                     ((MethodInfo *)0x0);
                                                  this_01 = (GizmoCap2D *)func_?();
                                                  GizmoCap2D::GizmoCap2D__ctor
                                                            (this_01,pGVar1,iVar5,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoCap2D **)(iVar5 + 0x40) = this_01;
                                                  func_?();
                                                  if (*(GizmoCap **)(iVar5 + 0x40) !=
                                                      (GizmoCap *)0x0) {
                                                    GizmoCap::GizmoCap_SetVisible
                                                              (*(GizmoCap **)(iVar5 + 0x40),0,
                                                               (MethodInfo *)0x0);
                                                    if (*(GizmoCap3D **)(iVar5 + 0x40) !=
                                                        (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (*(GizmoCap3D **)(iVar5 + 0x40),
                                                                 *(IGizmoDragSession **)
                                                                  (iVar5 + 0x44),(MethodInfo *)0x0)
                                                      ;
                                                      if ((*(int *)(iVar5 + 8) != 0) &&
                                                         (*(GizmoDragSession **)(iVar5 + 0x44) !=
                                                          (GizmoDragSession *)0x0)) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  (*(GizmoDragSession **)
                                                                    (iVar5 + 0x44),
                                                                   *(GizmoTransform **)
                                                                    (*(int *)(iVar5 + 8) + 0xf8),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = *(Gizmo **)(iVar5 + 8);
                                                        EVar11 = System.Core.dll::System::Linq::
                                                                 Expressions::AssignBinaryExpression
                                                                 ::
                                                  AssignBinaryExpression_get_NodeType
                                                            ((AssignBinaryExpression *)0x0,
                                                             (MethodInfo *)pGVar9);
                                                  method_00 = TypeInfo__RTG__GizmoPlaneSlider2D;
                                                  pGVar15 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar15,pGVar1,EVar11,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._hoverInfo._handleDimension =
                                                       (int32_t)pGVar15;
                                                  func_?();
                                                  pGVar15 = (GizmoPlaneSlider2D *)
                                                            (pGVar1->fields)._hoverInfo.
                                                            _handleDimension;
                                                  if (pGVar15 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar15,GizmoDragChannel__Enum_Offset
                                                               ,(MethodInfo *)0x0);
                                                    pGVar16 = (GizmoSlider *)
                                                             (pGVar1->fields)._hoverInfo.
                                                             _handleDimension;
                                                    if (pGVar16 != (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (pGVar16,0,(MethodInfo *)0x0);
                                                      pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                         PostEnabled;
                                                      EVar11 = System.Core.dll::System::Linq::
                                                               Expressions::ParameterExpression::
                                                               ParameterExpression_get_NodeType
                                                                         ((ParameterExpression *)0x0
                                                                          ,(MethodInfo *)method_00);
                                                      XVar2 = System.Xml.dll::System::Xml::Schema::
                                                               Datatype_negativeInteger::
                                                               Datatype_negativeInteger_get_TypeCode
                                                                         ((Datatype_negativeInteger
                                                                           *)0x0,in_stack_8);
                                                      pGVar17 = TypeInfo__RTG__GizmoLineSlider2D;
                                                      pGVar18 = (GizmoLineSlider2D *)
                                                                func_?();
                                                      GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                (pGVar18,pGVar1,EVar11,XVar2,
                                                                 (MethodInfo *)0x0);
                                                      *(GizmoLineSlider2D **)
                                                       &(pGVar1->fields)._isEnabled = pGVar18;
                                                      func_?();
                                                      pGVar19 = *(GizmoLineSlider2D **)
                                                                 &(pGVar1->fields)._isEnabled;
                                                      if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                        GizmoLineSlider2D::
                                                        GizmoLineSlider2D_SetDragChannel
                                                                  (pGVar19,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar19 = *(GizmoLineSlider2D **)
                                                             &(pGVar1->fields)._isEnabled;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar19,0,AxisSign__Enum_Positive,
                                                               (MethodInfo *)0x0);
                                                    pXVar20 = *(XmlNodeReader **)
                                                              &(pGVar1->fields)._isEnabled;
                                                    if (pXVar20 != (XmlNodeReader *)0x0) {
                                                      pPVar14 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar20,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar20 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar20 != (XmlNodeReader *)0x0) {
                                                        pPVar21 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar20,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar14 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar14,pPVar21,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_ENTITY::
                                                                   Datatype_ENTITY_get_TypeCode
                                                                             ((Datatype_ENTITY *)0x0
                                                                              ,(MethodInfo *)pGVar18
                                                                             );
                                                          XVar12 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_long::
                                                                   Datatype_long_get_TypeCode
                                                                             ((Datatype_long *)0x0,
                                                                              (MethodInfo *)pGVar17)
                                                          ;
                                                          pGVar17 = TypeInfo__RTG__GizmoLineSlider2D
                                                          ;
                                                          pGVar19 = (GizmoLineSlider2D *)
                                                                    func_?();
                                                          GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                    (pGVar19,pGVar1,XVar2,XVar12,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._handles =
                                                               (GizmoHandleCollection *)pGVar19;
                                                          func_?();
                                                          pGVar19 = (GizmoLineSlider2D *)
                                                                    (pGVar1->fields)._handles;
                                                          if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                            GizmoLineSlider2D::
                                                            GizmoLineSlider2D_SetDragChannel
                                                                      (pGVar19,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar19 = (GizmoLineSlider2D *)
                                                            (pGVar1->fields)._handles;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar19,1,AxisSign__Enum_Positive,
                                                               (MethodInfo *)0x0);
                                                    pXVar20 = (XmlNodeReader *)
                                                             (pGVar1->fields)._handles;
                                                    if (pXVar20 != (XmlNodeReader *)0x0) {
                                                      pPVar14 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar20,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar20 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar20 != (XmlNodeReader *)0x0) {
                                                        pPVar21 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar20,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar14 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar14,pPVar21,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          iVar5 = UnityEngine.CoreModule.dll::Unity
                                                                   ::Collections::LowLevel::Unsafe::
                                                                   UnsafeUtility::
                                                                   UnsafeUtility_SizeOf
                                                                             ((MethodInfo *)0x0);
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::Datatype_int::
                                                                   Datatype_int_get_TypeCode
                                                                             ((Datatype_int *)0x0,
                                                                              (MethodInfo *)pGVar17)
                                                          ;
                                                          pGVar17 = TypeInfo__RTG__GizmoLineSlider2D
                                                          ;
                                                          pGVar18 = (GizmoLineSlider2D *)
                                                                    func_?();
                                                          GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                                    (pGVar18,pGVar1,iVar5,XVar2,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._behaviours =
                                                               (GizmoBehaviourCollection *)pGVar18;
                                                          func_?();
                                                          pGVar19 = (GizmoLineSlider2D *)
                                                                    (pGVar1->fields)._behaviours;
                                                          if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                            GizmoLineSlider2D::
                                                            GizmoLineSlider2D_SetDragChannel
                                                                      (pGVar19,
                                                  GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                                                  pGVar19 = (GizmoLineSlider2D *)
                                                            (pGVar1->fields)._behaviours;
                                                  if (pGVar19 != (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_MapDirection
                                                              (pGVar19,0,AxisSign__Enum_Negative,
                                                               (MethodInfo *)0x0);
                                                    pXVar20 = (XmlNodeReader *)
                                                             (pGVar1->fields)._behaviours;
                                                    if (pXVar20 != (XmlNodeReader *)0x0) {
                                                      pPVar14 = (Priority *)
                                                                System.Xml.dll::System::Xml::
                                                                XmlNodeReader::
                                                                XmlNodeReader_get_NameTable
                                                                          (pXVar20,(MethodInfo *)0x0)
                                                      ;
                                                      pXVar20 = (XmlNodeReader *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleDimension;
                                                      if (pXVar20 != (XmlNodeReader *)0x0) {
                                                        pPVar21 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (pXVar20,(MethodInfo *)
                                                                                    0x0);
                                                        if (pPVar14 != (Priority *)0x0) {
                                                          Priority::Priority_MakeLowerThan
                                                                    (pPVar14,pPVar21,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          XVar2 = System.Xml.dll::System::Xml::
                                                                   Schema::
                                                  Datatype_nonPositiveInteger::
                                                  Datatype_nonPositiveInteger_get_TypeCode
                                                            ((Datatype_nonPositiveInteger *)0x0,
                                                             (MethodInfo *)pGVar18);
                                                  XVar12 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_short::
                                                           Datatype_short_get_TypeCode
                                                                     ((Datatype_short *)0x0,
                                                                      (MethodInfo *)pGVar17);
                                                  pGVar19 = (GizmoLineSlider2D *)func_?();
                                                  GizmoLineSlider2D::GizmoLineSlider2D__ctor
                                                            (pGVar19,pGVar1,XVar2,XVar12,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoLineSlider2D **)
                                                   &(pGVar1->fields)._hoverInfo = pGVar19;
                                                  pGVar22 = &(pGVar1->fields)._hoverInfo;
                                                  func_?();
                                                  if (*(GizmoLineSlider2D **)pGVar22 !=
                                                      (GizmoLineSlider2D *)0x0) {
                                                    GizmoLineSlider2D::
                                                    GizmoLineSlider2D_SetDragChannel
                                                              (*(GizmoLineSlider2D **)pGVar22,
                                                               GizmoDragChannel__Enum_Offset,
                                                               (MethodInfo *)0x0);
                                                    if (*(GizmoLineSlider2D **)pGVar22 !=
                                                        (GizmoLineSlider2D *)0x0) {
                                                      GizmoLineSlider2D::
                                                      GizmoLineSlider2D_MapDirection
                                                                (*(GizmoLineSlider2D **)pGVar22,1,
                                                                 AxisSign__Enum_Negative,
                                                                 (MethodInfo *)0x0);
                                                      if (*(XmlNodeReader **)pGVar22 !=
                                                          (XmlNodeReader *)0x0) {
                                                        pPVar14 = (Priority *)
                                                                  System.Xml.dll::System::Xml::
                                                                  XmlNodeReader::
                                                                  XmlNodeReader_get_NameTable
                                                                            (*(XmlNodeReader **)
                                                                              pGVar22,(MethodInfo *)
                                                                                     0x0);
                                                        pXVar20 = (XmlNodeReader *)
                                                                 (pGVar1->fields)._hoverInfo.
                                                                 _handleDimension;
                                                        if (pXVar20 != (XmlNodeReader *)0x0) {
                                                          pPVar21 = (Priority *)
                                                                    System.Xml.dll::System::Xml::
                                                                    XmlNodeReader::
                                                                    XmlNodeReader_get_NameTable
                                                                              (pXVar20,(MethodInfo *)
                                                                                      0x0);
                                                          if (pPVar14 != (Priority *)0x0) {
                                                            Priority::Priority_MakeLowerThan
                                                                      (pPVar14,pPVar21,
                                                                       (MethodInfo *)0x0);
                                                            pGVar23 = (GizmoLineSlider2DCollection *)
                                                                     (pGVar1->fields)._hoverInfo.
                                                                     _handleId;
                                                            if (pGVar23 != (
                                                  GizmoLineSlider2DCollection *)0x0) {
                                                    GizmoLineSlider2DCollection::
                                                    GizmoLineSlider2DCollection_Add
                                                              (pGVar23,*(GizmoLineSlider2D **)
                                                                       &(pGVar1->fields)._isEnabled
                                                               ,(MethodInfo *)0x0);
                                                    pGVar23 = (GizmoLineSlider2DCollection *)
                                                             (pGVar1->fields)._hoverInfo._handleId;
                                                    if (pGVar23 != (GizmoLineSlider2DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider2DCollection::
                                                      GizmoLineSlider2DCollection_Add
                                                                (pGVar23,(GizmoLineSlider2D *)
                                                                        (pGVar1->fields)._handles,
                                                                 (MethodInfo *)0x0);
                                                      pGVar23 = (GizmoLineSlider2DCollection *)
                                                               (pGVar1->fields)._hoverInfo.
                                                               _handleId;
                                                      if (pGVar23 != (GizmoLineSlider2DCollection *)
                                                                    0x0) {
                                                        GizmoLineSlider2DCollection::
                                                        GizmoLineSlider2DCollection_Add
                                                                  (pGVar23,(GizmoLineSlider2D *)
                                                                          (pGVar1->fields).
                                                                          _behaviours,
                                                                   (MethodInfo *)0x0);
                                                        pGVar23 = (GizmoLineSlider2DCollection *)
                                                                 (pGVar1->fields)._hoverInfo.
                                                                 _handleId;
                                                        if (pGVar23 != (GizmoLineSlider2DCollection *
                                                                      )0x0) {
                                                          GizmoLineSlider2DCollection::
                                                          GizmoLineSlider2DCollection_Add
                                                                    (pGVar23,*(GizmoLineSlider2D **)
                                                                             pGVar22,
                                                                     (MethodInfo *)0x0);
                                                          UniversalGizmo_Hide2DModeHandles
                                                                    ((UniversalGizmo *)pGVar1,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          EVar11 = System.Core.dll::System::Linq::
                                                                   Expressions::BlockExpression::
                                                                   BlockExpression_get_NodeType
                                                                             ((BlockExpression *)0x0
                                                                              ,(MethodInfo *)pGVar19
                                                                             );
                                                          pGVar24 = (GizmoCap3D *)func_?();
                                                          GizmoCap3D::GizmoCap3D__ctor
                                                                    (pGVar24,pGVar1,EVar11,
                                                                     (MethodInfo *)0x0);
                                                          (pGVar1->fields)._dragInfo._handleId =
                                                               (int32_t)pGVar24;
                                                          func_?();
                                                          pGVar24 = (GizmoCap3D *)
                                                                    (pGVar1->fields)._dragInfo.
                                                                    _handleId;
                                                          if (pGVar24 != (GizmoCap3D *)0x0) {
                                                            GizmoCap3D::GizmoCap3D_set_DragSession
                                                                      (pGVar24,(IGizmoDragSession *)
                                                                               (pGVar1->fields).
                                                                               _dragInfo.
                                                                               _dragBeginPoint.x,
                                                                       (MethodInfo *)0x0);
                                                            pGVar25 = (pGVar1->fields).PostEnabled;
                                                            if ((pGVar25 !=
                                                                 (GizmoPostEnabledHandler *)0x0) &&
                                                               (this_00 = (GizmoDragSession *)
                                                                          (pGVar1->fields).
                                                                          _dragInfo._dragBeginPoint.
                                                                          x,
                                                               this_00 != (GizmoDragSession *)0x0))
                                                            {
                                                              GizmoDragSession::
                                                              GizmoDragSession_AddTargetTransform
                                                                        (this_00,*(GizmoTransform **
                                                                                  )&pGVar25[3].
                                                                                    fields._._.
                                                                                                                                                                        
                                                  method_is_virtual,(MethodInfo *)0x0);
                                                  pGVar1 = (Gizmo *)(pGVar1->fields).PostEnabled;
                                                  iVar5 = UnityEngine.CoreModule.dll::Unity::
                                                           Collections::LowLevel::Unsafe::
                                                           UnsafeUtility::UnsafeUtility_SizeOf_29
                                                                     ((MethodInfo *)0x0);
                                                  method_01 = TypeInfo__RTG__GizmoPlaneSlider3D;
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,iVar5,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._hoverInfo._hoverPoint.x =
                                                       (float)pGVar3;
                                                  pVVar26 = &(pGVar1->fields)._hoverInfo._hoverPoint
                                                  ;
                                                  func_?();
                                                  if ((GizmoPlaneSlider3D *)pVVar26->x !=
                                                      (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              ((GizmoPlaneSlider3D *)pVVar26->x,
                                                               GizmoDragChannel__Enum_Rotation,
                                                               (MethodInfo *)0x0);
                                                    pGVar3 = (GizmoPlaneSlider3D *)pVVar26->x;
                                                    auVar27._4_8_ = 0;
                                                    auVar27._0_4_ = _UNK_?;
                                                    pQVar28 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Quaternion::
                                                              Quaternion_Internal_FromEulerRad
                                                                        ((Quaternion *)
                                                                         &stack0xffffffd8,
                                                                         (Vector3)(auVar27 << 0x20),
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_LocalRotation
                                                                (pGVar3,*pQVar28,(MethodInfo *)0x0)
                                                      ;
                                                      if ((GizmoSlider *)pVVar26->x !=
                                                          (GizmoSlider *)0x0) {
                                                        GizmoSlider::GizmoSlider_SetVisible
                                                                  ((GizmoSlider *)pVVar26->x,0,
                                                                   (MethodInfo *)0x0);
                                                        pGVar7 = *(GizmoPlaneSlider3DCollection **)
                                                                  &(pGVar1->fields)._dragInfo;
                                                        if (pGVar7 != (GizmoPlaneSlider3DCollection
                                                                       *)0x0) {
                                                          GizmoPlaneSlider3DCollection::
                                                          GizmoPlaneSlider3DCollection_Add
                                                                    (pGVar7,(GizmoPlaneSlider3D *)
                                                                            pVVar26->x,
                                                                     (MethodInfo *)0x0);
                                                          pGVar1 = (Gizmo *)(pGVar1->fields).
                                                                             PostEnabled;
                                                          EVar11 = System.Core.dll::System::Linq::
                                                                   Expressions::
                                                                   NewArrayBoundsExpression::
                                                                                                                                      
                                                  NewArrayBoundsExpression_get_NodeType
                                                            ((NewArrayBoundsExpression *)0x0,
                                                             (MethodInfo *)method_01);
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,EVar11,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoPlaneSlider3D **)
                                                   (EVar11 + (ExpressionType__Enum_1_AndAssign|
                                                             ExpressionType__Enum_1_DebugInfo)) =
                                                       pGVar3;
                                                  puVar29 = (undefined4 *)
                                                           (EVar11 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_DebugInfo));
                                                  func_?();
                                                  pGVar3 = (GizmoPlaneSlider3D *)*puVar29;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (pGVar3,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  this_03 = (GizmoPlaneSlider3D *)*puVar29;
                                                  euler.y = 0.0;
                                                  euler.z = 0.0;
                                                  euler.x = (float)pGVar3;
                                                  pQVar28 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::
                                                            Quaternion_Internal_FromEulerRad
                                                                      ((Quaternion *)
                                                                       &stack0xffffffc0,euler,
                                                                       (MethodInfo *)0x0);
                                                  if (this_03 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_LocalRotation
                                                              (this_03,*pQVar28,(MethodInfo *)0x0);
                                                    if ((GizmoSlider *)*puVar29 != (GizmoSlider *)0x0
                                                       ) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                ((GizmoSlider *)*puVar29,0,
                                                                 (MethodInfo *)0x0);
                                                      if (*(GizmoPlaneSlider3DCollection **)
                                                           (EVar11 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_Label)) !=
                                                  (GizmoPlaneSlider3DCollection *)0x0) {
                                                    GizmoPlaneSlider3DCollection::
                                                    GizmoPlaneSlider3DCollection_Add
                                                              (*(GizmoPlaneSlider3DCollection **)
                                                                (EVar11 + (
                                                  ExpressionType__Enum_1_AndAssign|
                                                  ExpressionType__Enum_1_Label)),
                                                  (GizmoPlaneSlider3D *)*puVar29,(MethodInfo *)0x0);
                                                  pGVar1 = *(Gizmo **)
                                                             (EVar11 + 
                                                  ExpressionType__Enum_1_Conditional);
                                                  XVar2 = System.Xml.dll::System::Xml::Schema::
                                                           Datatype_NMTOKEN::
                                                           Datatype_NMTOKEN_get_TypeCode
                                                                     ((Datatype_NMTOKEN *)0x0,
                                                                      (MethodInfo *)method_01);
                                                  pGVar3 = (GizmoPlaneSlider3D *)func_?();
                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                                            (pGVar3,pGVar1,XVar2,
                                                             (MethodInfo *)0x0);
                                                  *(GizmoPlaneSlider3D **)(XVar2 + 0x74) = pGVar3;
                                                  func_?();
                                                  if (*(GizmoPlaneSlider3D **)(XVar2 + 0x74) !=
                                                      (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_SetDragChannel
                                                              (*(GizmoPlaneSlider3D **)
                                                                (XVar2 + 0x74),
                                                               GizmoDragChannel__Enum_Rotation,
                                                               (MethodInfo *)0x0);
                                                    if (*(GizmoSlider **)(XVar2 + 0x74) !=
                                                        (GizmoSlider *)0x0) {
                                                      GizmoSlider::GizmoSlider_SetVisible
                                                                (*(GizmoSlider **)(XVar2 + 0x74),0,
                                                                 (MethodInfo *)0x0);
                                                      if (*(GizmoPlaneSlider3DCollection **)
                                                           (XVar2 + 0x78) !=
                                                          (GizmoPlaneSlider3DCollection *)0x0) {
                                                        GizmoPlaneSlider3DCollection::
                                                        GizmoPlaneSlider3DCollection_Add
                                                                  (*(GizmoPlaneSlider3DCollection **
                                                                    )(XVar2 + 0x78),
                                                                   *(GizmoPlaneSlider3D **)
                                                                    (XVar2 + 0x74),
                                                                   (MethodInfo *)0x0);
                                                        pGVar1 = *(Gizmo **)
                                                                   (XVar2 + 
                                                  XmlTypeCode__Enum_Comment);
                                                  iVar5 = UnityEngine.CoreModule.dll::Unity::
                                                           Collections::LowLevel::Unsafe::
                                                           UnsafeUtility::UnsafeUtility_SizeOf_45
                                                                     ((MethodInfo *)0x0);
                                                  pGVar15 = (GizmoPlaneSlider2D *)func_?();
                                                  GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
                                                            (pGVar15,pGVar1,iVar5,
                                                             (MethodInfo *)0x0);
                                                  (pGVar1->fields)._dragInfo._dragBeginPoint.y =
                                                       (float)pGVar15;
                                                  func_?();
                                                  pGVar15 = (GizmoPlaneSlider2D *)
                                                            (pGVar1->fields)._dragInfo.
                                                            _dragBeginPoint.y;
                                                  if (pGVar15 != (GizmoPlaneSlider2D *)0x0) {
                                                    GizmoPlaneSlider2D::
                                                    GizmoPlaneSlider2D_SetDragChannel
                                                              (pGVar15,
                                                  GizmoDragChannel__Enum_Rotation,(MethodInfo *)0x0)
                                                  ;
                                                  pGVar16 = (GizmoSlider *)
                                                           (pGVar1->fields)._dragInfo.
                                                           _dragBeginPoint.y;
                                                  if (pGVar16 != (GizmoSlider *)0x0) {
                                                    GizmoSlider::GizmoSlider_SetVisible
                                                              (pGVar16,0,(MethodInfo *)0x0);
                                                    pGVar1 = (Gizmo *)(pGVar1->fields).PostEnabled
                                                    ;
                                                    this_02 = (UniversalGizmo *)
                                                              GizmoHandleId::
                                                              GizmoHandleId_get_MidScaleCap
                                                                        ((MethodInfo *)0x0);
                                                    pGVar24 = (GizmoCap3D *)func_?();
                                                    GizmoCap3D::GizmoCap3D__ctor
                                                              (pGVar24,pGVar1,(int32_t)this_02,
                                                               (MethodInfo *)0x0);
                                                    (this_02->fields)._scMidCap = pGVar24;
                                                    func_?();
                                                    pGVar24 = (this_02->fields)._scMidCap;
                                                    if (pGVar24 != (GizmoCap3D *)0x0) {
                                                      GizmoCap3D::GizmoCap3D_set_DragSession
                                                                (pGVar24,(IGizmoDragSession *)
                                                                         (this_02->fields).
                                                                         _scUnformScaleDrag,
                                                                 (MethodInfo *)0x0);
                                                      pGVar24 = (this_02->fields)._rtMidCap;
                                                      pGVar7 = (this_02->fields)._rtAxesSliders;
                                                      if (pGVar24 != (GizmoCap3D *)0x0) {
                                                        pSVar30 = Newtonsoft.Json.dll::Newtonsoft::
                                                                  Json::Converters::
                                                                  XDocumentTypeWrapper::
                                                                                                                                    
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar24,
                                                             (MethodInfo *)0x0);
                                                  if (pGVar7 != (GizmoPlaneSlider3DCollection *)0x0)
                                                  {
                                                    GizmoPlaneSlider3DCollection::
                                                                                                        
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar7,(Priority *)pSVar30,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this_02->fields)._rtXSlider;
                                                  pGVar13 = (this_02->fields)._mvAxesSliders;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    pPVar14 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar13 != (GizmoLineSlider3DCollection *)0x0
                                                       ) {
                                                      GizmoLineSlider3DCollection::
                                                                                                            
                                                  GizmoLineSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar13,pPVar14,(MethodInfo *)0x0);
                                                  pGVar10 = (this_02->fields)._mvPXSlider;
                                                  pGVar7 = (this_02->fields)._mvDblSliders;
                                                  if (pGVar10 != (GizmoLineSlider3D *)0x0) {
                                                    pPVar14 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar10,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar7 != (GizmoPlaneSlider3DCollection *)
                                                                  0x0) {
                                                      GizmoPlaneSlider3DCollection::
                                                                                                            
                                                  GizmoPlaneSlider3DCollection_Make3DHoverPriorityHigherThan
                                                            (pGVar7,pPVar14,(MethodInfo *)0x0);
                                                  pGVar24 = (this_02->fields)._scMidCap;
                                                  if (pGVar24 != (GizmoCap3D *)0x0) {
                                                    pSVar30 = Newtonsoft.Json.dll::Newtonsoft::Json
                                                              ::Converters::XDocumentTypeWrapper::
                                                                                                                            
                                                  XDocumentTypeWrapper_get_InternalSubset
                                                            ((XDocumentTypeWrapper *)pGVar24,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this_02->fields)._mvXYSlider;
                                                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                                                    pPVar14 = GizmoSlider::
                                                              GizmoSlider_get_HoverPriority3D
                                                                        ((GizmoSlider *)pGVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pSVar30 != (String *)0x0) {
                                                      Priority::Priority_MakeHigherThan
                                                                ((Priority *)pSVar30,pPVar14,
                                                                 (MethodInfo *)0x0);
                                                      UniversalGizmo_SetupSharedLookAndFeel
                                                                (this_02,(MethodInfo *)0x0);
                                                      UniversalGizmo_SetupSharedSettings
                                                                (this_02,(MethodInfo *)0x0);
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
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDetached
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnDisabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_remove_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnEnabled
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&
                    MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    value = (GizmoEntityTransformChangedHandler *)
            func_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
    SerializationCallback__ctor
              ((SerializationCallback *)value,(Object *)this,
               MethodInfo__RTG__UniversalGizmo__OnGizmoTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
               ,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_add_Changed(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoAttemptHandleDragBegin
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtMidCap;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar2) {
      pGVar3 = (this->fields)._._gizmo;
      if (((pGVar3 != (Gizmo *)0x0) &&
          (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
          pCVar4 != (Camera *)0x0)) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                  ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._._gizmo;
        if (((pGVar3 != (Gizmo *)0x0) &&
            (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
            pCVar4 != (Camera *)0x0)) &&
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar4,(MethodInfo *)0x0),
           pTVar5 != (Transform *)0x0)) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar8 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).x;
          uVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
          uVar10 = uVar8 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          uVar11 = uVar9 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          uVar12 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
          uVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
          pUVar14 = (this->fields)._sharedSettings3D;
          pUVar15 = pUVar14;
          if (((pUVar14 != (UniversalGizmoSettings3D *)0x0) ||
              (pUVar15 = (this->fields)._settings3D, pUVar15 != (UniversalGizmoSettings3D *)0x0)) &&
             (pGVar16 = (pUVar15->fields)._rtSliderSettings,
             pGVar16 != (GizmoPlaneSlider3DSettings__Array *)0x0)) {
            if (pGVar16->max_length == 0) goto code_?;
            if (pGVar16->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              if (pUVar14 == (UniversalGizmoSettings3D *)0x0) {
                pUVar14 = (this->fields)._settings3D;
                if ((pUVar14 == (UniversalGizmoSettings3D *)0x0) ||
                   (fVar17 = (pUVar14->fields)._rtCamUpSnapStep,
                   pUVar14 == (UniversalGizmoSettings3D *)0x0)) goto code_?;
              }
              else {
                fVar17 = (pUVar14->fields)._rtCamUpSnapStep;
              }
              this_01 = (this->fields)._rtCamXYRotationDrag;
              if (this_01 != (GizmoDblAxisRotationDrag3D *)0x0) {
                workData.ScreenAxis0.y = (float)uVar11;
                workData.ScreenAxis0.x = (float)uVar10;
                workData.ScreenAxis1.x = (float)uVar12;
                workData.ScreenAxis1.y = (float)uVar13;
                workData.Axis0.x = (float)uVar11;
                workData.Axis0.y = (float)uVar12;
                workData.Axis0.z = (float)uVar13;
                workData.Axis1.x = (float)uVar7;
                workData.Axis1.y = (float)uVar12;
                workData.Axis1.z = (float)uVar13;
                workData.SnapMode = uVar7;
                workData.SnapStep0 = fVar17;
                workData.SnapStep1 = (pUVar14->fields)._rtCamRightSnapStep;
                GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_SetWorkData
                          (this_01,workData,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pGVar1 = (this->fields)._scMidCap;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                  AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
        if ((void *)handleId != pvVar2) {
          return;
        }
        pGVar1 = (this->fields)._scMidCap;
        if (pGVar1 != (GizmoCap3D *)0x0) {
          GizmoCap3D::GizmoCap3D_get_Position((Vector3 *)&stack0xfffffff0,pGVar1,(MethodInfo *)0x0)
          ;
          pGVar3 = (this->fields)._._gizmo;
          if (((pGVar3 != (Gizmo *)0x0) &&
              (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
              pCVar4 != (Camera *)0x0)) &&
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar4,(MethodInfo *)0x0),
             pTVar5 != (Transform *)0x0)) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
            uVar18 = pVVar6->x;
            uVar19 = pVVar6->y;
            fVar17 = pVVar6->z;
            pGVar3 = (this->fields)._._gizmo;
            if (((pGVar3 != (Gizmo *)0x0) &&
                (pCVar4 = Gizmo::Gizmo_get_FocusCamera(pGVar3,(MethodInfo *)0x0),
                pCVar4 != (Camera *)0x0)) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
              uVar20 = pVVar6->x;
              uVar21 = pVVar6->y;
              if ((((this->fields)._sharedSettings3D != (UniversalGizmoSettings3D *)0x0) ||
                  ((this->fields)._settings3D != (UniversalGizmoSettings3D *)0x0)) &&
                 (this_00 = (this->fields)._scUnformScaleDrag,
                 this_00 != (GizmoUniformScaleDrag3D *)0x0)) {
                this = (UniversalGizmo *)uVar20;
                fVar22 = fVar17;
                fVar23 = (float)uVar19;
                fVar24 = (float)uVar18;
                uVar25 = CONCAT44(fVar23,fVar24);
                fVar26 = fVar17;
                auVar27 = CONCAT48(fVar26,uVar25);
                fVar28 = (float)uVar20;
                auVar29 = CONCAT412(fVar28,auVar27);
                fVar30 = (float)uVar21;
                auVar31 = CONCAT416(fVar30,auVar29);
                fVar32 = (float)this_00;
                auVar33 = CONCAT420(fVar32,auVar31);
                fVar34 = (float)uVar18;
                auVar35 = CONCAT424(fVar34,auVar33);
                fVar36 = (float)uVar19;
                workData_00._0_32_ = CONCAT428(fVar36,auVar35);
                workData_00 = (GizmoUniformScaleDrag3D_WorkData)CONCAT832(uVar37,workData_00._0_32_)
                ;
                GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                          (this_00,workData_00,(MethodInfo *)0x0);
                return;
              }
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
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
      if (pGVar2 != (GizmoCap3D *)0x0) {
        pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
        if (pvVar3 == (void *)handleId) {
          UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
          UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
  }
  else {
    this_00 = (this->fields)._rtAxesSliders;
    if (this_00 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
    GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetBorderVisible
              (this_00,0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._rtMidCap;
    if (pGVar2 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar2,0,(MethodInfo *)0x0);
    this_01 = (this->fields)._rtCamLookSlider;
    if (this_01 == (GizmoPlaneSlider2D *)0x0) goto code_?;
    in_stack_4 = '\0';
    in_stack_5 = (int *)0x0;
    GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(this_01,0,(MethodInfo *)0x0);
  }
  if ((this->fields)._scMidCap != (GizmoCap3D *)0x0) {
    if ((char)in_stack_5[4] != in_stack_4) {
      *(char *)(in_stack_5 + 4) = in_stack_4;
      (**(code **)(*in_stack_5 + 0x128))();
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragEnd
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  this_00 = (this->fields)._scMidCap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((pvVar1 == (void *)handleId) || ((this->fields)._is2DModeEnabled != 0)) {
      return;
    }
    if ((this->fields)._scMidCap != (GizmoCap3D *)0x0) {
      if (cRam_? != in_stack_2) {
        cRam_? = in_stack_2;
        (**(code **)(iRam_? + 0x128))(0);
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoDragUpdate
               (UniversalGizmo *this,int32_t handleId,MethodInfo *method)

{
  if ((this->fields)._isMvVertexSnapEnabled != 0) {
    fStack_1 = (this->fields)._mvPostVSnapPosRestore.z;
    uStack_2._0_4_ = (this->fields)._mvPostVSnapPosRestore.x;
    uStack_2._4_4_ = (this->fields)._mvPostVSnapPosRestore.y;
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pVVar4 = Gizmo::Gizmo_get_RelativeDragOffset(&VStack_5,this_00,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar8 = pVVar4->z;
    (this->fields)._mvPostVSnapPosRestore.x = (float)uVar6 + (float)uStack_2;
    (this->fields)._mvPostVSnapPosRestore.y = uStack_2._4_4_ + (float)uVar7;
    (this->fields)._mvPostVSnapPosRestore.z = fVar8 + fStack_1;
  }
  return;
}


/* Void OnGizmoEnabled() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoEnabled
               (UniversalGizmo *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).OnGizmoUpdateBegin_1.method)
            (this,(this->klass->vtable).OnGizmoUpdateEnd_1.methodPtr);
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoRender
               (UniversalGizmo *this,Camera *camera,MethodInfo *method)

{
  camera_00 = camera;
  *unaff_FS_OFFSET = (int)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_03 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_03 == (RTGizmosEngine *)0x0) goto code_?;
  iVar1 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_03,(MethodInfo *)0x0);
  if (1 < iVar1) {
    pGVar2 = (this->fields)._mvAxesSliders;
    if (pGVar2 == (GizmoLineSlider3DCollection *)0x0) goto code_?;
    GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_ApplyZoomFactor
              (pGVar2,camera,(MethodInfo *)0x0);
    if (((this->fields)._isMvVertexSnapEnabled == 0) && ((this->fields)._is2DModeEnabled == 0)) {
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
      camera = (Camera *)this;
      UniversalGizmo_UpdateRtCamLookSlider(this,camera_00,(MethodInfo *)0x0);
    }
    pGVar4 = (this->fields)._scMidCap;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar4,camera_00,(MethodInfo *)0x0);
  }
  pGVar6 = (this->fields)._rtXSlider;
  if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
    (*(code *)(pGVar6->klass->vtable).Render_1.method)();
    pGVar6 = (this->fields)._rtYSlider;
    if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
      (*(code *)(pGVar6->klass->vtable).Render_1.method)();
      pGVar6 = (this->fields)._rtZSlider;
      if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
        (*(code *)(pGVar6->klass->vtable).Render_1.method)();
        pGVar4 = (this->fields)._rtMidCap;
        if (pGVar4 != (GizmoCap3D *)0x0) {
          method_00 = (MethodInfo *)camera_00;
          (*(code *)(pGVar4->klass->vtable).Render_1.method)();
          pGVar2 = (this->fields)._mvAxesSliders;
          if ((pGVar2 != (GizmoLineSlider3DCollection *)0x0) &&
             (this_04 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        GizmoLineSlider3DCollection::
                        GizmoLineSlider3DCollection_GetRenderSortedSliders
                                  (pGVar2,camera_00,(MethodInfo *)0x0),
             this_04 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
            pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&stack0xffffffdc,this_04,
                                MethodInfo__System__Collections__Generic__List<RTG::GizmoLineSlider3D>__GetEnumerator__
                               );
            RVar8 = pLVar7->_current;
            while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__MoveNext__
                                     ), bVar9 != 0) {
              if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
              (**(code **)(*(int *)RVar8 + 0x130))();
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoLineSlider3D>__Dispose__
                       ,method_00);
            pGVar5 = (this->fields)._rtCamLookSlider;
            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
              (*(code *)(pGVar5->klass->vtable).Render_1.method)();
              pGVar6 = (this->fields)._mvXYSlider;
              if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                pGVar6 = (this->fields)._mvYZSlider;
                if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                  (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                  pGVar6 = (this->fields)._mvZXSlider;
                  if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                    (*(code *)(pGVar6->klass->vtable).Render_1.method)();
                    pGVar4 = (this->fields)._scMidCap;
                    if (pGVar4 != (GizmoCap3D *)0x0) {
                      (*(code *)(pGVar4->klass->vtable).Render_1.method)();
                      pGVar10 = (this->fields)._mvVertSnapCap;
                      if (pGVar10 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar10->klass->vtable).Render_1.method)();
                        this_00 = (this->fields)._mv2DModeSliders;
                        if (this_00 != (GizmoLineSlider2DCollection *)0x0) {
                          GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Render
                                    (this_00,camera,(MethodInfo *)0x0);
                          pGVar5 = (this->fields)._mv2DModeDblSlider;
                          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                            (*(code *)(((List_1_UnityEngine_GameObject___Class *)pGVar5->klass)->
                                      vtable).CopyTo.method)();
                            pUVar11 = (this->fields)._sharedLookAndFeel3D;
                            if ((pUVar11 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                               (pUVar11 = (this->fields)._lookAndFeel3D,
                               pUVar11 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                              if ((pUVar11->fields)._isScScaleGuideVisible == 0) {
code_?:
                                *unaff_FS_OFFSET = (int)pGVar5;
                                return;
                              }
                              this_01 = (DataTable *)(this->fields)._._gizmo;
                              if (this_01 != (DataTable *)0x0) {
                                bVar9 = System.Data.dll::System::Data::DataTable::
                                        DataTable_get_CaseSensitive(this_01,(MethodInfo *)0x0);
                                if (bVar9 == 0) goto code_?;
                                this_02 = (this->fields)._._gizmo;
                                if (this_02 != (Gizmo *)0x0) {
                                  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                  PointerEventBase`1[System::Object]::
                                  PointerEventBase_1_System_Object__get_pointerType
                                            ((PointerEventBase_1_System_Object_ *)this_02,
                                             (MethodInfo *)0x0);
                                  pGVar4 = (this->fields)._scMidCap;
                                  if (pGVar4 != (GizmoCap3D *)0x0) {
                                    RVar12.First = 0;
                                    RVar12.Last = 0;
                                    RVar8 = (RegexCharClass_SingleRange)
                                             UnityEngine.AndroidJNIModule.dll::UnityEngine::
                                             AndroidJavaObject::AndroidJavaObject__GetRawClass
                                                       ((AndroidJavaObject *)pGVar4,
                                                        (MethodInfo *)0x0);
                                    if (RVar8 == RVar12) {
                                      gameObjects = (this->fields)._scScaleGuideTargetObjects;
                                      if ((TypeInfo__RTG__GameObjectEx->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      RVar8 = (RegexCharClass_SingleRange)&UNK_?;
                                      pGVar5 = (GizmoPlaneSlider2D *)
                                                GameObjectEx::GameObjectEx_FilterParentsOnly_1
                                                          (gameObjects,(MethodInfo *)0x0);
                                      if (RVar8 == (RegexCharClass_SingleRange)0x0)
                                      goto code_?;
                                      GizmoScaleGuide::GizmoScaleGuide_Render
                                                ((GizmoScaleGuide *)RVar8,
                                                 (IEnumerable_1_UnityEngine_GameObject_ *)pGVar5,
                                                 camera,(MethodInfo *)0x0);
                                    }
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
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnGizmoTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_OnGizmoTransformChanged
               (UniversalGizmo *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  if ((changeData.ChangeReason == 1) || (changeData.TRSDimension == 2)) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) {
      func_?();
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
  this_03 = this;
  if ((this->fields)._useSnapEnableHotkey != 0) {
    pUVar1 = (this->fields)._sharedHotkeys;
    if (((pUVar1 != (UniversalGizmoHotkeys *)0x0) ||
        (pUVar1 = (this->fields)._hotkeys, pUVar1 != (UniversalGizmoHotkeys *)0x0)) &&
       (pHVar2 = (pUVar1->fields)._enableSnapping, pHVar2 != (Hotkeys *)0x0)) {
      bVar3 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
      this_00 = (this->fields)._mvAxesSliders;
      if (this_00 != (GizmoLineSlider3DCollection *)0x0) {
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_SetSnapEnabled
                  (this_00,bVar3,(MethodInfo *)0x0);
        this_01 = (this->fields)._mv2DModeSliders;
        if (this_01 != (GizmoLineSlider2DCollection *)0x0) {
          GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetSnapEnabled
                    (this_01,bVar3,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._mvDblSliders;
          if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                      (pGVar4,bVar3,(MethodInfo *)0x0);
            pGVar5 = (this->fields)._mv2DModeDblSlider;
            if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
              (*(code *)(pGVar5->klass->vtable).SetSnapEnabled_1.method)();
              pGVar4 = (this->fields)._rtAxesSliders;
              if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
                GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                          (pGVar4,bVar3,(MethodInfo *)0x0);
                pGVar6 = (this->fields)._rtCamXYRotationDrag;
                if (pGVar6 != (GizmoDblAxisRotationDrag3D *)0x0) {
                  (pGVar6->fields)._._isSnapEnabled = bVar3;
                  pGVar5 = (this->fields)._rtCamLookSlider;
                  if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                    (*(code *)(pGVar5->klass->vtable).SetSnapEnabled_1.method)();
                    pGVar7 = (this->fields)._scUnformScaleDrag;
                    if (pGVar7 != (GizmoUniformScaleDrag3D *)0x0) {
                      (pGVar7->fields)._._isSnapEnabled = bVar3;
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
    goto code_?;
  }
code_?:
  if ((this->fields)._use2DModeEnableHotkey != 0) {
    pUVar1 = (this->fields)._sharedHotkeys;
    if (((pUVar1 == (UniversalGizmoHotkeys *)0x0) &&
        (pUVar1 = (this->fields)._hotkeys, pUVar1 == (UniversalGizmoHotkeys *)0x0)) ||
       (pHVar2 = (pUVar1->fields)._enable2DMode, pHVar2 == (Hotkeys *)0x0)) goto code_?;
    bVar3 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
    UniversalGizmo_Set2DModeEnabled(this,bVar3,(MethodInfo *)0x0);
  }
  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
  if ((this->fields)._is2DModeEnabled == 0) {
    bVar3 = (this->fields)._isMvVertexSnapEnabled;
    if (bVar3 == 0) {
      pGVar8 = (this->fields)._._gizmo;
      if ((pGVar8 == (Gizmo *)0x0) ||
         (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
      goto code_?;
      fVar10 = (pGVar9->fields)._position3D.y;
      fVar11 = (pGVar9->fields)._position3D.z;
      (this->fields)._mvPostVSnapPosRestore.x = (pGVar9->fields)._position3D.x;
      (this->fields)._mvPostVSnapPosRestore.y = fVar10;
      (this->fields)._mvPostVSnapPosRestore.z = fVar11;
    }
    if ((this->fields)._useVertSnapEnableHotkey == 0) {
code_?:
      if ((bVar3 != 0) && ((this_03->fields)._isMvVertexSnapEnabled == 0)) {
        pGVar8 = (this_03->fields)._._gizmo;
        if ((pGVar8 == (Gizmo *)0x0) ||
           (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
        goto code_?;
        GizmoTransform::GizmoTransform_set_Position3D
                  (pGVar9,(this_03->fields)._mvPostVSnapPosRestore,(MethodInfo *)0x0);
      }
      pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
      if (pDVar12 != (DataTable *)0x0) {
        bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                           (pDVar12,(MethodInfo *)0x0);
        if ((bVar3 != 0) &&
           (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
        goto code_?;
        pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
        pGVar14 = (this_03->fields)._mvPXSlider;
        if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
            (pUVar13 = (this_03->fields)._lookAndFeel3D,
            pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
           (pBVar15 = (pUVar13->fields)._mvSglSliderVis, pBVar15 != (Boolean__Array *)0x0)) {
          if (pBVar15->max_length == 0) goto code_?;
          if (pGVar14 != (GizmoLineSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible
                      ((GizmoSlider *)pGVar14,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
            pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
            pGVar14 = (this_03->fields)._mvPXSlider;
            if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                (pUVar13 = (this_03->fields)._lookAndFeel3D,
                pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
               (pBVar15 = (pUVar13->fields)._mvSglSliderCapVis, pBVar15 != (Boolean__Array *)0x0)) {
              if (pBVar15->max_length == 0) goto code_?;
              if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                          (pGVar14,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                pGVar14 = (this_03->fields)._mvPYSlider;
                if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                    (pUVar13 = (this_03->fields)._lookAndFeel3D,
                    pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                   (pBVar15 = (pUVar13->fields)._mvSglSliderVis, pBVar15 != (Boolean__Array *)0x0))
                {
                  if (pBVar15->max_length < 2) goto code_?;
                  if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                    GizmoSlider::GizmoSlider_SetVisible
                              ((GizmoSlider *)pGVar14,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                    pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                    pGVar14 = (this_03->fields)._mvPYSlider;
                    if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                        (pUVar13 = (this_03->fields)._lookAndFeel3D,
                        pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                       (pBVar15 = (pUVar13->fields)._mvSglSliderCapVis,
                       pBVar15 != (Boolean__Array *)0x0)) {
                      if (pBVar15->max_length < 2) goto code_?;
                      if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                        GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                  (pGVar14,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                        pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                        pGVar14 = (this_03->fields)._mvPZSlider;
                        if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                            (pUVar13 = (this_03->fields)._lookAndFeel3D,
                            pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                           (pBVar15 = (pUVar13->fields)._mvSglSliderVis,
                           pBVar15 != (Boolean__Array *)0x0)) {
                          if (pBVar15->max_length < 3) goto code_?;
                          if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                            GizmoSlider::GizmoSlider_SetVisible
                                      ((GizmoSlider *)pGVar14,pBVar15->vector[2] != 0,
                                       (MethodInfo *)0x0);
                            pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                            pGVar14 = (this_03->fields)._mvPZSlider;
                            if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                               (pBVar15 = (pUVar13->fields)._mvSglSliderCapVis,
                               pBVar15 != (Boolean__Array *)0x0)) {
                              if (pBVar15->max_length < 3) goto code_?;
                              if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                          (pGVar14,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                                pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                pGVar14 = (this_03->fields)._mvNXSlider;
                                if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                    (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                    pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                   (pBVar15 = (pUVar13->fields)._mvSglSliderVis,
                                   pBVar15 != (Boolean__Array *)0x0)) {
                                  if (pBVar15->max_length < 4) goto code_?;
                                  if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)pGVar14,pBVar15->vector[3] != 0,
                                               (MethodInfo *)0x0);
                                    pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                    pGVar14 = (this_03->fields)._mvNXSlider;
                                    if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                        (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                        pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                       (pBVar15 = (pUVar13->fields)._mvSglSliderCapVis,
                                       pBVar15 != (Boolean__Array *)0x0)) {
                                      if (pBVar15->max_length < 4) goto code_?;
                                      if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                        GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                  (pGVar14,pBVar15->vector[3] != 0,(MethodInfo *)0x0
                                                  );
                                        pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                        pGVar14 = (this_03->fields)._mvNYSlider;
                                        if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                            (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                            pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                           (pBVar15 = (pUVar13->fields)._mvSglSliderVis,
                                           pBVar15 != (Boolean__Array *)0x0)) {
                                          if (pBVar15->max_length < 5) goto code_?;
                                          if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                            GizmoSlider::GizmoSlider_SetVisible
                                                      ((GizmoSlider *)pGVar14,
                                                       pBVar15->vector[4] != 0,(MethodInfo *)0x0);
                                            pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                            pGVar14 = (this_03->fields)._mvNYSlider;
                                            if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                                (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                                pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                               (pBVar15 = (pUVar13->fields)._mvSglSliderCapVis,
                                               pBVar15 != (Boolean__Array *)0x0)) {
                                              if (pBVar15->max_length < 5) goto code_?;
                                              if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                                GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
                                                          (pGVar14,pBVar15->vector[4] != 0,
                                                           (MethodInfo *)0x0);
                                                pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                                pGVar14 = (this_03->fields)._mvNZSlider;
                                                if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)
                                                    || (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                                       pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0
                                                       )) && (pBVar15 = (pUVar13->fields).
                                                                        _mvSglSliderVis,
                                                             pBVar15 != (Boolean__Array *)0x0)) {
                                                  if (pBVar15->max_length < 6)
                                                  goto code_?;
                                                  if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                                    GizmoSlider::GizmoSlider_SetVisible
                                                              ((GizmoSlider *)pGVar14,
                                                               pBVar15->vector[5] != 0,
                                                               (MethodInfo *)0x0);
                                                    pUVar13 = (this_03->fields)._sharedLookAndFeel3D
                                                    ;
                                                    pGVar14 = (this_03->fields)._mvNZSlider;
                                                    if (((pUVar13 !=
                                                          (UniversalGizmoLookAndFeel3D *)0x0) ||
                                                        (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                                        pUVar13 !=
                                                        (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                                       (pBVar15 = (pUVar13->fields).
                                                                  _mvSglSliderCapVis,
                                                       pBVar15 != (Boolean__Array *)0x0)) {
                                                      if (pBVar15->max_length < 6)
                                                      goto code_?;
                                                      if (pGVar14 != (GizmoLineSlider3D *)0x0) {
                                                        GizmoLineSlider3D::
                                                        GizmoLineSlider3D_Set3DCapVisible
                                                                  (pGVar14,pBVar15->vector[5] != 0,
                                                                   (MethodInfo *)0x0);
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
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar1 = (this->fields)._sharedHotkeys;
      if (((pUVar1 != (UniversalGizmoHotkeys *)0x0) ||
          (pUVar1 = (this->fields)._hotkeys, pUVar1 != (UniversalGizmoHotkeys *)0x0)) &&
         (pHVar2 = (pUVar1->fields)._enableVertexSnapping, pHVar2 != (Hotkeys *)0x0)) {
        bVar16 = Hotkeys::Hotkeys_IsActive(pHVar2,1,(MethodInfo *)0x0);
        if ((((this->fields)._isMvVertexSnapEnabled == bVar16) ||
            ((this->fields)._is2DModeEnabled != 0)) || ((this->fields)._._isEnabled == 0))
        goto code_?;
        pDVar12 = (DataTable *)(this->fields)._._gizmo;
        if (pDVar12 != (DataTable *)0x0) {
          bVar17 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                             (pDVar12,(MethodInfo *)0x0);
          if (bVar17 != 0) goto code_?;
          this_02 = (this->fields)._mvVertSnapCap;
          if (bVar16 == 0) {
            if (this_02 != (GizmoCap2D *)0x0) {
              GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,0,(MethodInfo *)0x0);
              this._0_1_ = 1;
code_?:
              UniversalGizmo_SetScaleHandlesVisible(this_03,(bool)this,(MethodInfo *)0x0);
              (this_03->fields)._isMvVertexSnapEnabled = bVar16;
              goto code_?;
            }
          }
          else if (this_02 != (GizmoCap2D *)0x0) {
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._mvDblSliders;
            if (pGVar4 != (GizmoPlaneSlider3DCollection *)0x0) {
              GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                        (pGVar4,0,1,(MethodInfo *)0x0);
              UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
              this._0_1_ = 0;
              goto code_?;
            }
          }
        }
      }
    }
  }
  else {
code_?:
    if ((this_03->fields)._isMvVertexSnapEnabled == 0) {
      if ((this_03->fields)._is2DModeEnabled == 0) {
        pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
        if (pDVar12 != (DataTable *)0x0) {
          bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                             (pDVar12,(MethodInfo *)0x0);
          if ((bVar3 != 0) &&
             (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
          goto code_?;
          pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
          pGVar18 = (this_03->fields)._mvXYSlider;
          if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
              (pUVar13 = (this_03->fields)._lookAndFeel3D,
              pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
             (pBVar15 = (pUVar13->fields)._mvDblSliderVis, pBVar15 != (Boolean__Array *)0x0)) {
            if (pBVar15->max_length == 0) goto code_?;
            if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar18,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
              pGVar18 = (this_03->fields)._mvXYSlider;
              if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                          (pGVar18,(pGVar18->fields)._._isVisible,(MethodInfo *)0x0);
                pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                pGVar18 = (this_03->fields)._mvYZSlider;
                if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                    (pUVar13 = (this_03->fields)._lookAndFeel3D,
                    pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                   (pBVar15 = (pUVar13->fields)._mvDblSliderVis, pBVar15 != (Boolean__Array *)0x0))
                {
                  if (pBVar15->max_length < 2) goto code_?;
                  if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                    GizmoSlider::GizmoSlider_SetVisible
                              ((GizmoSlider *)pGVar18,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                    pGVar18 = (this_03->fields)._mvYZSlider;
                    if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                (pGVar18,(pGVar18->fields)._._isVisible,(MethodInfo *)0x0);
                      pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                      pGVar18 = (this_03->fields)._mvZXSlider;
                      if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                          (pUVar13 = (this_03->fields)._lookAndFeel3D,
                          pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                         (pBVar15 = (pUVar13->fields)._mvDblSliderVis,
                         pBVar15 != (Boolean__Array *)0x0)) {
                        if (pBVar15->max_length < 3) goto code_?;
                        if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoSlider::GizmoSlider_SetVisible
                                    ((GizmoSlider *)pGVar18,pBVar15->vector[2] != 0,
                                     (MethodInfo *)0x0);
                          pGVar18 = (this_03->fields)._mvZXSlider;
                          if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                            GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                      (pGVar18,(pGVar18->fields)._._isVisible,(MethodInfo *)0x0);
                            pGVar8 = (this_03->fields)._._gizmo;
                            if (pGVar8 != (Gizmo *)0x0) {
                              pCVar19 = Gizmo::Gizmo_get_FocusCamera(pGVar8,(MethodInfo *)0x0);
                              UniversalGizmo_PlaceMvDblSlidersInSliderPlanes
                                        (this_03,pCVar19,(MethodInfo *)0x0);
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
      else {
        if ((this_03->fields)._is2DModeEnabled == 0) goto code_?;
        pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
        if (pDVar12 != (DataTable *)0x0) {
          bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                             (pDVar12,(MethodInfo *)0x0);
          if ((bVar3 != 0) &&
             (bVar3 = UniversalGizmo_IsDraggingMoveHandle(this_03,(MethodInfo *)0x0), bVar3 == 0))
          goto code_?;
          pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
          pGVar21 = (this_03->fields)._mvP2DModeXSlider;
          if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
              (pUVar20 = (this_03->fields)._lookAndFeel2D,
              pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
             (pBVar15 = (pUVar20->fields)._mvSglSliderVis, pBVar15 != (Boolean__Array *)0x0)) {
            if (pBVar15->max_length == 0) goto code_?;
            if (pGVar21 != (GizmoLineSlider2D *)0x0) {
              GizmoSlider::GizmoSlider_SetVisible
                        ((GizmoSlider *)pGVar21,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
              pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
              pGVar21 = (this_03->fields)._mvP2DModeXSlider;
              if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                  (pUVar20 = (this_03->fields)._lookAndFeel2D,
                  pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                 (pBVar15 = (pUVar20->fields)._mvSglSliderCapVis, pBVar15 != (Boolean__Array *)0x0))
              {
                if (pBVar15->max_length == 0) goto code_?;
                if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                            (pGVar21,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                  pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                  pGVar21 = (this_03->fields)._mvP2DModeYSlider;
                  if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                      (pUVar20 = (this_03->fields)._lookAndFeel2D,
                      pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                     (pBVar15 = (pUVar20->fields)._mvSglSliderVis, pBVar15 != (Boolean__Array *)0x0)
                     ) {
                    if (pBVar15->max_length < 2) goto code_?;
                    if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                      GizmoSlider::GizmoSlider_SetVisible
                                ((GizmoSlider *)pGVar21,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                      pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                      pGVar21 = (this_03->fields)._mvP2DModeYSlider;
                      if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                          (pUVar20 = (this_03->fields)._lookAndFeel2D,
                          pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                         (pBVar15 = (pUVar20->fields)._mvSglSliderCapVis,
                         pBVar15 != (Boolean__Array *)0x0)) {
                        if (pBVar15->max_length < 2) goto code_?;
                        if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                          GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                    (pGVar21,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                          pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                          pGVar21 = (this_03->fields)._mvN2DModeXSlider;
                          if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                              (pUVar20 = (this_03->fields)._lookAndFeel2D,
                              pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                             (pBVar15 = (pUVar20->fields)._mvSglSliderVis,
                             pBVar15 != (Boolean__Array *)0x0)) {
                            if (pBVar15->max_length < 3) goto code_?;
                            if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                              GizmoSlider::GizmoSlider_SetVisible
                                        ((GizmoSlider *)pGVar21,pBVar15->vector[2] != 0,
                                         (MethodInfo *)0x0);
                              pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                              pGVar21 = (this_03->fields)._mvN2DModeXSlider;
                              if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                                  (pUVar20 = (this_03->fields)._lookAndFeel2D,
                                  pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                                 (pBVar15 = (pUVar20->fields)._mvSglSliderCapVis,
                                 pBVar15 != (Boolean__Array *)0x0)) {
                                if (pBVar15->max_length < 3) goto code_?;
                                if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                                  GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                            (pGVar21,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                                  pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                                  pGVar21 = (this_03->fields)._mvN2DModeYSlider;
                                  if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                                      (pUVar20 = (this_03->fields)._lookAndFeel2D,
                                      pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                                     (pBVar15 = (pUVar20->fields)._mvSglSliderVis,
                                     pBVar15 != (Boolean__Array *)0x0)) {
                                    if (pBVar15->max_length < 4) goto code_?;
                                    if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                                      GizmoSlider::GizmoSlider_SetVisible
                                                ((GizmoSlider *)pGVar21,pBVar15->vector[3] != 0,
                                                 (MethodInfo *)0x0);
                                      pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                                      pGVar21 = (this_03->fields)._mvN2DModeYSlider;
                                      if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                                          (pUVar20 = (this_03->fields)._lookAndFeel2D,
                                          pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) &&
                                         (pBVar15 = (pUVar20->fields)._mvSglSliderCapVis,
                                         pBVar15 != (Boolean__Array *)0x0)) {
                                        if (pBVar15->max_length < 4) goto code_?;
                                        if (pGVar21 != (GizmoLineSlider2D *)0x0) {
                                          GizmoLineSlider2D::GizmoLineSlider2D_Set2DCapVisible
                                                    (pGVar21,pBVar15->vector[3] != 0,
                                                     (MethodInfo *)0x0);
                                          pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                          if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                                            pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                                            bVar3 = (pGVar5->fields)._._isVisible;
                                            if ((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0) ||
                                               (pUVar20 = (this_03->fields)._lookAndFeel2D,
                                               pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)) {
                                              GizmoSlider::GizmoSlider_SetVisible
                                                        ((GizmoSlider *)pGVar5,
                                                         (pUVar20->fields)._isMvDblSliderVisible,
                                                         (MethodInfo *)0x0);
                                              pUVar20 = (this_03->fields)._sharedLookAndFeel2D;
                                              pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                              if (((pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0)
                                                  || (pUVar20 = (this_03->fields)._lookAndFeel2D,
                                                     pUVar20 != (UniversalGizmoLookAndFeel2D *)0x0))
                                                 && (pGVar5 != (GizmoPlaneSlider2D *)0x0)) {
                                                GizmoPlaneSlider2D::
                                                GizmoPlaneSlider2D_SetBorderVisible
                                                          (pGVar5,(pUVar20->fields).
                                                                  _isMvDblSliderVisible,
                                                           (MethodInfo *)0x0);
                                                if (bVar3 == 0) {
                                                  pGVar5 = (this_03->fields)._mv2DModeDblSlider;
                                                  if (pGVar5 == (GizmoPlaneSlider2D *)0x0)
                                                  goto code_?;
                                                  if ((pGVar5->fields)._._isVisible != 0) {
                                                    UniversalGizmo_Update2DModeHandlePositions
                                                              (this_03,(MethodInfo *)0x0);
                                                  }
                                                }
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
        }
      }
    }
    else {
      pGVar22 = (this_03->fields)._mvVertexSnapDrag;
      if (pGVar22 != (GizmoObjectVertexSnapDrag3D *)0x0) {
        cVar23 = (*(code *)(pGVar22->klass->vtable).get_IsActive_1.method)();
        if (cVar23 == '\0') {
          pGVar22 = (this_03->fields)._mvVertexSnapDrag;
          if (pGVar22 == (GizmoObjectVertexSnapDrag3D *)0x0) goto code_?;
          bVar3 = GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_SelectSnapPivotPoint
                             (pGVar22,(this_03->fields)._._gizmo,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pGVar8 = (this_03->fields)._._gizmo;
            if (((pGVar8 == (Gizmo *)0x0) ||
                (pGVar22 = (this_03->fields)._mvVertexSnapDrag,
                pGVar22 == (GizmoObjectVertexSnapDrag3D *)0x0)) ||
               (pGVar9 = (pGVar8->fields)._transform, pGVar9 == (GizmoTransform *)0x0))
            goto code_?;
            GizmoTransform::GizmoTransform_set_Position3D
                      (pGVar9,(pGVar22->fields)._snapPivot,(MethodInfo *)0x0);
          }
        }
code_?:
        if ((this_03->fields)._is2DModeEnabled == 0) {
code_?:
          if ((this_03->fields)._isMvVertexSnapEnabled == 0) {
            pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
            if (pDVar12 != (DataTable *)0x0) {
              bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                 (pDVar12,(MethodInfo *)0x0);
              if (bVar3 == 0) {
code_?:
                pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                pGVar24 = (this_03->fields)._rtMidCap;
                if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                    (pUVar13 = (this_03->fields)._lookAndFeel3D,
                    pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                   (pGVar24 != (GizmoCap3D *)0x0)) {
                  GizmoCap::GizmoCap_SetVisible
                            ((GizmoCap *)pGVar24,(pUVar13->fields)._isRtMidCapVisible,
                             (MethodInfo *)0x0);
                  pUVar25 = (this_03->fields)._sharedSettings3D;
                  pGVar6 = (this_03->fields)._rtCamXYRotationDrag;
                  if (((pUVar25 != (UniversalGizmoSettings3D *)0x0) ||
                      (pUVar25 = (this_03->fields)._settings3D,
                      pUVar25 != (UniversalGizmoSettings3D *)0x0)) &&
                     (pGVar26 = (pUVar25->fields)._rtSliderSettings,
                     pGVar26 != (GizmoPlaneSlider3DSettings__Array *)0x0)) {
                    if (pGVar26->max_length == 0) goto code_?;
                    if ((pGVar26->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) &&
                       (pGVar6 != (GizmoDblAxisRotationDrag3D *)0x0)) {
                      GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                                ((GizmoScreenDrag *)pGVar6,
                                 (pGVar26->vector[0]->fields)._rotationSensitivity,(MethodInfo *)0x0
                                );
                      pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                      pGVar18 = (this_03->fields)._rtXSlider;
                      if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                          (pUVar13 = (this_03->fields)._lookAndFeel3D,
                          pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                         (pBVar15 = (pUVar13->fields)._rtAxesVis, pBVar15 != (Boolean__Array *)0x0))
                      {
                        if (pBVar15->max_length == 0) goto code_?;
                        if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                    (pGVar18,pBVar15->vector[0] != 0,(MethodInfo *)0x0);
                          pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                          pGVar18 = (this_03->fields)._rtYSlider;
                          if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                              (pUVar13 = (this_03->fields)._lookAndFeel3D,
                              pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                             (pBVar15 = (pUVar13->fields)._rtAxesVis,
                             pBVar15 != (Boolean__Array *)0x0)) {
                            if (pBVar15->max_length < 2) goto code_?;
                            if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                        (pGVar18,pBVar15->vector[1] != 0,(MethodInfo *)0x0);
                              pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                              pGVar18 = (this_03->fields)._rtZSlider;
                              if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                  (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                  pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                 (pBVar15 = (pUVar13->fields)._rtAxesVis,
                                 pBVar15 != (Boolean__Array *)0x0)) {
                                if (pBVar15->max_length < 3) goto code_?;
                                if (pGVar18 != (GizmoPlaneSlider3D *)0x0) {
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderVisible
                                            (pGVar18,pBVar15->vector[2] != 0,(MethodInfo *)0x0);
                                  pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
                                  pGVar5 = (this_03->fields)._rtCamLookSlider;
                                  if (((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                      (pUVar13 = (this_03->fields)._lookAndFeel3D,
                                      pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) &&
                                     (pGVar5 != (GizmoPlaneSlider2D *)0x0)) {
                                    GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
                                              (pGVar5,(pUVar13->fields)._isRtCamLookSliderVisible,
                                               (MethodInfo *)0x0);
                                    pGVar5 = (this_03->fields)._rtCamLookSlider;
                                    if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
                                      if ((pGVar5->fields)._isBorderVisible != 0) {
                                        pGVar8 = (this_03->fields)._._gizmo;
                                        if (pGVar8 == (Gizmo *)0x0) goto code_?;
                                        pCVar19 = Gizmo::Gizmo_get_FocusCamera
                                                            (pGVar8,(MethodInfo *)0x0);
                                        UniversalGizmo_UpdateRtCamLookSlider
                                                  (this_03,pCVar19,(MethodInfo *)0x0);
                                      }
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
              else {
                pDVar12 = (DataTable *)(this_03->fields)._._gizmo;
                if (pDVar12 != (DataTable *)0x0) {
                  bVar3 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                                     (pDVar12,(MethodInfo *)0x0);
                  if (bVar3 != 0) {
                    pGVar8 = (this_03->fields)._._gizmo;
                    if (pGVar8 == (Gizmo *)0x0) goto code_?;
                    handleId = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                               PointerEventBase`1[System::Object]::
                               PointerEventBase_1_System_Object__get_pointerType
                                         ((PointerEventBase_1_System_Object_ *)pGVar8,
                                          (MethodInfo *)0x0);
                    bVar3 = UniversalGizmo_IsRotationHandle
                                       (this_03,(int32_t)handleId,(MethodInfo *)0x0);
                    if (bVar3 != 0) goto code_?;
                  }
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
        }
code_?:
        pUVar13 = (this_03->fields)._sharedLookAndFeel3D;
        pGVar24 = (this_03->fields)._scMidCap;
        if ((pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0) ||
           (pUVar13 = (this_03->fields)._lookAndFeel3D,
           pUVar13 != (UniversalGizmoLookAndFeel3D *)0x0)) {
          if ((pUVar13->fields)._isScMidCapVisible == 0) {
            isVisible = false;
          }
          else {
            isVisible = (this_03->fields)._is2DModeEnabled == 0;
          }
          if (pGVar24 != (GizmoCap3D *)0x0) {
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar24,isVisible,(MethodInfo *)0x0);
            pUVar25 = (this_03->fields)._sharedSettings3D;
            pGVar7 = (this_03->fields)._scUnformScaleDrag;
            if (((pUVar25 != (UniversalGizmoSettings3D *)0x0) ||
                (pUVar25 = (this_03->fields)._settings3D, pUVar25 != (UniversalGizmoSettings3D *)0x0
                )) && (pGVar27 = (pUVar25->fields)._scSglSliderSettings,
                      pGVar27 != (GizmoLineSlider3DSettings__Array *)0x0)) {
              if (pGVar27->max_length == 0) goto code_?;
              if ((pGVar27->vector[0] != (GizmoLineSlider3DSettings *)0x0) &&
                 (pGVar7 != (GizmoUniformScaleDrag3D *)0x0)) {
                GizmoScreenDrag::GizmoScreenDrag_set_Sensitivity
                          ((GizmoScreenDrag *)pGVar7,(pGVar27->vector[0]->fields)._scaleSensitivity,
                           (MethodInfo *)0x0);
                return;
              }
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
      this_00 = (this->fields)._scMidCap;
      if (this_00 != (GizmoCap3D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
        return pvVar2 == (void *)handleId;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
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
                (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_XY,(this->fields)._mvPXSlider,
                 (this->fields)._mvPYSlider,camera,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields)._mvYZSlider;
    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar1->fields)._._isVisible != 0) {
        pGVar2 = (this->fields)._._gizmo;
        if (pGVar2 == (Gizmo *)0x0) goto code_?;
        GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                  (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_YZ,(this->fields)._mvPYSlider,
                   (this->fields)._mvPZSlider,camera,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields)._mvZXSlider;
      if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar1->fields)._._isVisible != 0) {
          pGVar2 = (this->fields)._._gizmo;
          if (pGVar2 == (Gizmo *)0x0) goto code_?;
          GizmoPlaneSlider3D::GizmoPlaneSlider3D_MakeSliderPlane
                    (pGVar1,(pGVar2->fields)._transform,PlaneId__Enum_ZX,(this->fields)._mvPZSlider,
                     (this->fields)._mvPXSlider,camera,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set2DModeEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Set2DModeEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  if ((((this->fields)._is2DModeEnabled == isEnabled) ||
      ((this->fields)._isMvVertexSnapEnabled != 0)) || ((this->fields)._._isEnabled == 0)) {
    return;
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (isEnabled == 0) {
      UniversalGizmo_Hide2DModeHandles(this,(MethodInfo *)0x0);
      UniversalGizmo_SetScaleHandlesVisible(this,1,(MethodInfo *)0x0);
      (this->fields)._is2DModeEnabled = 0;
      return;
    }
    pGVar2 = (this->fields)._mv2DModeSliders;
    if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
      GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetVisible
                (pGVar2,1,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._mv2DModeSliders;
      if (pGVar2 != (GizmoLineSlider2DCollection *)0x0) {
        GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_Set2DCapsVisible
                  (pGVar2,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._mv2DModeDblSlider;
        if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
          GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar3,1,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._mv2DModeDblSlider;
          if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
            GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(pGVar3,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._._gizmo;
            if (((pGVar4 != (Gizmo *)0x0) &&
                (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) &&
               (pGVar2 = (this->fields)._mv2DModeSliders,
               pGVar2 != (GizmoLineSlider2DCollection *)0x0)) {
              GizmoLineSlider2DCollection::GizmoLineSlider2DCollection_SetOffsetDragOrigin
                        (pGVar2,(pGVar5->fields)._position3D,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._._gizmo;
              if ((pGVar4 != (Gizmo *)0x0) &&
                 (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
                fVar6 = (pGVar5->fields)._position3D.y;
                fVar7 = (pGVar5->fields)._position3D.z;
                pGVar3 = (this->fields)._mv2DModeDblSlider;
                if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
                  (pGVar3->fields)._offsetDragOrigin.x = (pGVar5->fields)._position3D.x;
                  (pGVar3->fields)._offsetDragOrigin.y = fVar6;
                  (pGVar3->fields)._offsetDragOrigin.z = fVar7;
                  UniversalGizmo_SetMoveHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_SetScaleHandlesVisible(this,0,(MethodInfo *)0x0);
                  UniversalGizmo_Update2DGizmoPosition(this,(MethodInfo *)0x0);
                  UniversalGizmo_Update2DModeHandlePositions(this,(MethodInfo *)0x0);
                  (this->fields)._is2DModeEnabled = isEnabled;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
        GizmoLineSlider3DCollection::GizmoLineSlider3DCollection_Set3DCapsVisible
                  (pGVar1,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvAxesLinesHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvAxesLinesHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvPXSlider;
  if (pGVar1 != (GizmoLineSlider3D *)0x0) {
    GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._mvNXSlider;
    if (pGVar1 != (GizmoLineSlider3D *)0x0) {
      GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvPYSlider;
      if (pGVar1 != (GizmoLineSlider3D *)0x0) {
        GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._mvNYSlider;
        if (pGVar1 != (GizmoLineSlider3D *)0x0) {
          GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._mvPZSlider;
          if (pGVar1 != (GizmoLineSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetHoverable((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0)
            ;
            pGVar1 = (this->fields)._mvNZSlider;
            if (pGVar1 != (GizmoLineSlider3D *)0x0) {
              GizmoSlider::GizmoSlider_SetHoverable
                        ((GizmoSlider *)pGVar1,hoverable,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvVertexSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapEnabled
               (UniversalGizmo *this,bool isEnabled,MethodInfo *method)

{
  bVar1 = isEnabled;
  if ((((this->fields)._isMvVertexSnapEnabled != isEnabled) &&
      ((this->fields)._is2DModeEnabled == 0)) && ((this->fields)._._isEnabled != 0)) {
    this_00 = (DataTable *)(this->fields)._._gizmo;
    if (this_00 == (DataTable *)0x0) goto code_?;
    bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    this_01 = (this->fields)._mvVertSnapCap;
    if (isEnabled == 0) {
      if (this_01 == (GizmoCap2D *)0x0) goto code_?;
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,0,(MethodInfo *)0x0);
      isEnabled = 1;
    }
    else {
      if (this_01 == (GizmoCap2D *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,1,(MethodInfo *)0x0);
      this_02 = (this->fields)._mvDblSliders;
      if (this_02 == (GizmoPlaneSlider3DCollection *)0x0) goto code_?;
      GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetVisible
                (this_02,0,1,(MethodInfo *)0x0);
      UniversalGizmo_SetRotationHandlesVisible(this,0,(MethodInfo *)0x0);
      isEnabled = 0;
    }
    UniversalGizmo_SetScaleHandlesVisible(this,isEnabled,(MethodInfo *)0x0);
    (this->fields)._isMvVertexSnapEnabled = bVar1;
  }
  return;
}


/* Void SetMvVertexSnapTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
               (UniversalGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._mvVertexSnapDrag;
  if (pGVar1 != (GizmoObjectVertexSnapDrag3D *)0x0) {
    pIStack_2 = (IEnumerable_1_UnityEngine_GameObject_ *)
                (pGVar1->klass->vtable).get_DragChannel_1.methodPtr;
    pGStack_3 = pGVar1;
    cVar4 = (*(code *)(pGVar1->klass->vtable).get_IsActive_1.method)();
    if (cVar4 == '\0') {
      pGStack_3 = (GizmoObjectVertexSnapDrag3D *)&(pGVar1->fields)._targetObjects;
      pIStack_2 = targetObjects;
      *(IEnumerable_1_UnityEngine_GameObject_ **)pGStack_3 = targetObjects;
      func_?();
    }
    return;
  }
  uVar5 = func_?(&pGStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    this_01 = (this->fields)._rtMidCap;
    if (this_01 != (GizmoCap3D *)0x0) {
      GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,visible,(MethodInfo *)0x0);
      this_02 = (this->fields)._rtCamLookSlider;
      if (this_02 != (GizmoPlaneSlider2D *)0x0) {
        GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible(this_02,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRtMidCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetRtMidCapHoverable
               (UniversalGizmo *this,bool hoverable,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pGStack_2 = (this->fields)._rtMidCap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    if ((pGStack_2->fields)._._isHoverable != hoverable) {
      (pGStack_2->fields)._._isHoverable = hoverable;
      pIStack_1 = pGStack_2->klass[1]._0.image;
      (*(code *)(pGStack_2->klass->vtable).OnHoverableStateChanged.method)();
    }
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScaleHandlesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetScaleHandlesVisible
               (UniversalGizmo *this,bool visible,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pGStack_2 = (this->fields)._scMidCap;
  if (pGStack_2 != (GizmoCap3D *)0x0) {
    if ((pGStack_2->fields)._._isVisible != visible) {
      (pGStack_2->fields)._._isVisible = visible;
      pIStack_1 = (pGStack_2->klass->vtable).OnHoverableStateChanged.methodPtr;
      (*(code *)(pGStack_2->klass->vtable).OnVisibilityStateChanged.method)();
    }
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
          (*(code *)(pGVar2->klass->vtable).SetSnapEnabled_1.method)();
          pGVar1 = (this->fields)._rtAxesSliders;
          if (pGVar1 != (GizmoPlaneSlider3DCollection *)0x0) {
            GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection_SetSnapEnabled
                      (pGVar1,isEnabled,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._rtCamXYRotationDrag;
            if (pGVar3 != (GizmoDblAxisRotationDrag3D *)0x0) {
              (pGVar3->fields)._._isSnapEnabled = isEnabled;
              pGVar2 = (this->fields)._rtCamLookSlider;
              if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
                (*(code *)(pGVar2->klass->vtable).SetSnapEnabled_1.method)
                          (pGVar2,_isEnabled,(pGVar2->klass->vtable).Render_1.methodPtr);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedLookAndFeel
               (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
     (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
    pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
    pGVar3 = (this->fields)._mvPXSlider;
    if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                  (pGVar3,pGVar2->vector[0],(MethodInfo *)0x0);
        pUVar1 = (this->fields)._sharedLookAndFeel3D;
        if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
           (pUVar1 = (this->fields)._lookAndFeel3D, pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
          pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
          pGVar3 = (this->fields)._mvPYSlider;
          if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar3 != (GizmoLineSlider3D *)0x0) {
              GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                        (pGVar3,pGVar2->vector[1],(MethodInfo *)0x0);
              pUVar1 = (this->fields)._sharedLookAndFeel3D;
              if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                 (pUVar1 = (this->fields)._lookAndFeel3D,
                 pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
                pGVar3 = (this->fields)._mvPZSlider;
                if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                  if (pGVar2->max_length < 3) goto code_?;
                  if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                              (pGVar3,pGVar2->vector[2],(MethodInfo *)0x0);
                    pUVar1 = (this->fields)._sharedLookAndFeel3D;
                    if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                       (pUVar1 = (this->fields)._lookAndFeel3D,
                       pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                      pGVar3 = (this->fields)._mvNXSlider;
                      pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
                      if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                        if (pGVar2->max_length < 4) goto code_?;
                        if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                          GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                    (pGVar3,pGVar2->vector[3],(MethodInfo *)0x0);
                          pUVar1 = (this->fields)._sharedLookAndFeel3D;
                          if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                             (pUVar1 = (this->fields)._lookAndFeel3D,
                             pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                            pGVar3 = (this->fields)._mvNYSlider;
                            pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
                            if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                              if (pGVar2->max_length < 5) goto code_?;
                              if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                          (pGVar3,pGVar2->vector[4],(MethodInfo *)0x0);
                                pUVar1 = (this->fields)._sharedLookAndFeel3D;
                                if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                   (pUVar1 = (this->fields)._lookAndFeel3D,
                                   pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                                  pGVar3 = (this->fields)._mvNZSlider;
                                  pGVar2 = (pUVar1->fields)._mvSglSlidersLookAndFeel;
                                  if (pGVar2 != (GizmoLineSlider3DLookAndFeel__Array *)0x0) {
                                    if (pGVar2->max_length < 6) goto code_?;
                                    if (pGVar3 != (GizmoLineSlider3D *)0x0) {
                                      GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
                                                (pGVar3,pGVar2->vector[5],(MethodInfo *)0x0);
                                      pUVar1 = (this->fields)._sharedLookAndFeel3D;
                                      if ((pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0) ||
                                         (pUVar1 = (this->fields)._lookAndFeel3D,
                                         pUVar1 != (UniversalGizmoLookAndFeel3D *)0x0)) {
                                        pGVar4 = (pUVar1->fields)._mvDblSlidersLookAndFeel;
                                        pGVar5 = (this->fields)._mvXYSlider;
                                        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                                          if (pGVar4->max_length == 0) goto code_?;
                                          if (pGVar5 != (GizmoPlaneSlider3D *)0x0) {
                                            pGStack6 = pGVar4->vector[0];
                                            ppGStack7 = &(pGVar5->fields)._sharedLookAndFeel;
                                            *ppGStack7 = pGStack6;
                                            func_?();
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
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupSharedSettings() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_SetupSharedSettings
               (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedSettings3D;
  if ((pUVar1 != (UniversalGizmoSettings3D *)0x0) ||
     (pUVar1 = (this->fields)._settings3D, pUVar1 != (UniversalGizmoSettings3D *)0x0)) {
    pGVar2 = (pUVar1->fields)._mvSglSliderSettings;
    pGVar3 = (this->fields)._mvPXSlider;
    if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoLineSlider3D *)0x0) {
        ppGVar5 = &(pGVar3->fields)._sharedSettings;
        *ppGVar5 = pGVar4;
        func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update2DGizmoPosition() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DGizmoPosition
               (UniversalGizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    this_00 = (pGVar1->fields)._transform;
    this_01 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (((pGVar1 != (Gizmo *)0x0) &&
        (pGVar2 = (pGVar1->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
       (this_01 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                ((Vector3 *)&stack0xfffffff0,this_01,(pGVar2->fields)._position3D,(MethodInfo *)0x0)
      ;
      if (this_00 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Position2D(this_00,(Vector2)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update2DModeHandlePositions() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_Update2DModeHandlePositions
               (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedLookAndFeel2D;
  if ((pUVar1 != (UniversalGizmoLookAndFeel2D *)0x0) ||
     (pUVar1 = (this->fields)._lookAndFeel2D, pUVar1 != (UniversalGizmoLookAndFeel2D *)0x0)) {
    if ((pUVar1->fields)._isMvDblSliderVisible == 0) {
      pGVar2 = (this->fields)._._gizmo;
      if ((pGVar2 != (Gizmo *)0x0) &&
         (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
        pVVar4 = &(pGVar3->fields)._position2D;
        value_00 = *pVVar4;
        value = *pVVar4;
        VVar5 = *pVVar4;
        pGVar6 = (this->fields)._mvP2DModeXSlider;
        if (pGVar6 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,*pVVar4,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._mvP2DModeYSlider;
          if (pGVar6 != (GizmoLineSlider2D *)0x0) {
            GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._mvN2DModeXSlider;
            if (pGVar6 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,value,(MethodInfo *)0x0)
              ;
              pGVar6 = (this->fields)._mvN2DModeYSlider;
              if (pGVar6 != (GizmoLineSlider2D *)0x0) {
                GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                          (pGVar6,value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pGVar7 = (this->fields)._mv2DModeDblSlider;
      pGVar6 = (this->fields)._mvP2DModeXSlider;
      if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
        VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                          (pGVar7,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
        if (pGVar6 != (GizmoLineSlider2D *)0x0) {
          GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._mv2DModeDblSlider;
          pGVar6 = (this->fields)._mvP2DModeYSlider;
          if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
            VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                              (pGVar7,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
            if (pGVar6 != (GizmoLineSlider2D *)0x0) {
              GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition(pGVar6,VVar5,(MethodInfo *)0x0)
              ;
              pGVar7 = (this->fields)._mv2DModeDblSlider;
              pGVar6 = (this->fields)._mvN2DModeXSlider;
              if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
                VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                  (pGVar7,Shape2DExtentPoint__Enum_Left,(MethodInfo *)0x0);
                if (pGVar6 != (GizmoLineSlider2D *)0x0) {
                  GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                            (pGVar6,VVar5,(MethodInfo *)0x0);
                  pGVar7 = (this->fields)._mv2DModeDblSlider;
                  pGVar6 = (this->fields)._mvN2DModeYSlider;
                  if (pGVar7 != (GizmoPlaneSlider2D *)0x0) {
                    VVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                                      (pGVar7,Shape2DExtentPoint__Enum_Bottom,(MethodInfo *)0x0);
                    if (pGVar6 != (GizmoLineSlider2D *)0x0) {
                      GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
                                (pGVar6,VVar5,(MethodInfo *)0x0);
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
  func_?();
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
    fVar2 = GizmoCap3D::GizmoCap3D_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._gizmo;
    this_00 = (this->fields)._rtCamLookSlider;
    if ((pGVar3 != (Gizmo *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.z;
      pGVar1 = (this->fields)._rtMidCap;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar1,fVar2,(MethodInfo *)0x0);
        pUVar6 = (this->fields)._sharedLookAndFeel3D;
        if (((pUVar6 != (UniversalGizmoLookAndFeel3D *)0x0) ||
            (pUVar6 = (this->fields)._lookAndFeel3D, pUVar6 != (UniversalGizmoLookAndFeel3D *)0x0))
           && (this_00 != (GizmoPlaneSlider2D *)0x0)) {
          fVar2 = fVar2 * (pUVar6->fields)._rtCamLookSliderRadiusOffset + 0.0;
          sphereCenter.y = 1.4013e-43;
          sphereCenter.x = fVar2;
          sphereCenter.z = fVar5;
          GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
                    (this_00,sphereCenter,fVar2,100,camera,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* UniversalGizmo() */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo__ctor
               (UniversalGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoDblAxisRotationDrag3D);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DCollection);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DCollection);
    func_?(&TypeInfo__RTG__GizmoScaleGuide);
    func_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    func_?(&TypeInfo__RTG__UniversalGizmoHotkeys);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel2D);
    func_?(&TypeInfo__RTG__UniversalGizmoLookAndFeel3D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings2D);
    func_?(&TypeInfo__RTG__UniversalGizmoSettings3D);
    cRam_? = '\x01';
  }
  this_00 = (GizmoLineSlider3DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider3DCollection);
  GizmoLineSlider3DCollection::GizmoLineSlider3DCollection__ctor(this_00,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields)._mvAxesSliders;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  pGVar2 = (GizmoPlaneSlider3DCollection *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar2,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._mvDblSliders;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  this_01 = (GizmoObjectVertexSnapDrag3D *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D);
  GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor(this_01,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._mvVertexSnapDrag;
  *ppGVar4 = this_01;
  func_?(ppGVar4,this_01);
  this_02 = (GizmoLineSlider2DCollection *)
            func_?(TypeInfo__RTG__GizmoLineSlider2DCollection);
  GizmoLineSlider2DCollection::GizmoLineSlider2DCollection__ctor(this_02,(MethodInfo *)0x0);
  ppGVar5 = &(this->fields)._mv2DModeSliders;
  *ppGVar5 = this_02;
  func_?(ppGVar5);
  pGVar2 = (GizmoPlaneSlider3DCollection *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DCollection);
  GizmoPlaneSlider3DCollection::GizmoPlaneSlider3DCollection__ctor(pGVar2,(MethodInfo *)0x0);
  ppGVar3 = &(this->fields)._rtAxesSliders;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  this_03 = (GizmoDblAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoDblAxisRotationDrag3D)
  ;
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor
            ((GizmoSglAxisRotationDrag3D *)this_03,(MethodInfo *)0x0);
  ppGVar6 = &(this->fields)._rtCamXYRotationDrag;
  *ppGVar6 = this_03;
  func_?(ppGVar6,this_03);
  this_04 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._scUnformScaleDrag = this_04;
  func_?();
  this_05 = (GizmoScaleGuide *)func_?();
  GizmoScaleGuide::GizmoScaleGuide__ctor(this_05,(MethodInfo *)0x0);
  (this->fields)._scScaleGuide = this_05;
  func_?();
  this_06 = (Settings *)func_?();
  pSVar7 = this_06;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_07 = (GizmoPlaneSlider2DSettings *)func_?();
  GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(this_07,(MethodInfo *)0x0);
  this_06[1].monitor = (MonitorData *)this_07;
  func_?();
  uVar8 = func_?();
  pSVar9 = &this_06[1].fields;
  pSVar9->_canBeDisplayed = (char)uVar8;
  pSVar9->_isExpanded = (char)((uint)uVar8 >> 8);
  *(short *)&pSVar9->field_0x2 = (short)((uint)uVar8 >> 0x10);
  func_?();
  Settings::Settings__ctor(this_06,(MethodInfo *)0x0);
  iVar10._0_1_ = pSVar9->_canBeDisplayed;
  iVar10._1_1_ = pSVar9->_isExpanded;
  iVar10._2_2_ = *(undefined2 *)&pSVar9->field_0x2;
  uVar11 = 0;
  do {
    if (iVar10 == 0) {
code_?:
      func_?();
code_?:
      func_?();
      func_?();
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (*(int *)(iVar10 + 0xc) <= (int)uVar11) {
      if (pSVar7[1].monitor != (MonitorData *)0x0) {
        *(undefined4 *)(pSVar7[1].monitor + 0x24) = 1;
        _UNK_? = pSVar7;
        func_?();
        this_09 = (UniversalGizmoSettings3D *)func_?();
        UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor(this_09,(MethodInfo *)0x0);
        _UNK_? = this_09;
        func_?();
        this_10 = (UniversalGizmoLookAndFeel2D *)func_?();
        UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor(this_10,(MethodInfo *)0x0);
        _UNK_? = this_10;
        func_?();
        this_11 = (UniversalGizmoLookAndFeel3D *)func_?();
        UniversalGizmoLookAndFeel3D::UniversalGizmoLookAndFeel3D__ctor(this_11,(MethodInfo *)0x0);
        _UNK_? = this_11;
        func_?();
        pSVar7 = (Settings *)func_?();
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        this_12 = (Settings__Class *)func_?();
        Hotkeys::Hotkeys__ctor_1
                  ((Hotkeys *)this_12,StringLiteral_Enable_2D_mode,(HotkeysStaticData)0x0,
                   (MethodInfo *)0x0);
        if (this_12 != (Settings__Class *)0x0) {
          Hotkeys::Hotkeys_set_Key((Hotkeys *)this_12,KeyCode__Enum_None,(MethodInfo *)0x0);
          *(undefined1 *)((int)&(this_12->_0).byval_arg.data + 3) = 1;
          pSVar7[1].klass = this_12;
          func_?();
          pHVar13 = (Hotkeys *)func_?();
          Hotkeys::Hotkeys__ctor_1
                    (pHVar13,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0)
          ;
          if (pHVar13 != (Hotkeys *)0x0) {
            Hotkeys::Hotkeys_set_Key(pHVar13,KeyCode__Enum_None,(MethodInfo *)0x0);
            (pHVar13->fields)._lCtrl = 1;
            pSVar7[1].monitor = (MonitorData *)pHVar13;
            func_?();
            pHVar13 = (Hotkeys *)func_?();
            Hotkeys::Hotkeys__ctor_1
                      (pHVar13,StringLiteral_Enable_vertex_snapping,(HotkeysStaticData)0x0,
                       (MethodInfo *)0x0);
            if (pHVar13 != (Hotkeys *)0x0) {
              (pHVar13->fields)._useStrictModifierCheck = 0;
              Hotkeys::Hotkeys_set_Key(pHVar13,KeyCode__Enum_V,(MethodInfo *)0x0);
              *(Hotkeys **)&pSVar7[1].fields = pHVar13;
              func_?();
              Settings::Settings__ctor(pSVar7,(MethodInfo *)0x0);
              _UNK_? = pSVar7;
              func_?();
              _UNK_? = 0x101;
              UNK_? = 1;
              GizmoBehaviour::GizmoBehaviour__ctor
                        ((GizmoBehaviour *)&UNK_?,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    iVar10 = *(int *)pSVar9;
    this_08 = (GizmoLineSlider2DSettings *)func_?();
    GizmoLineSlider2DSettings::GizmoLineSlider2DSettings__ctor(this_08,(MethodInfo *)0x0);
    if (iVar10 == 0) goto code_?;
    if ((this_08 != (GizmoLineSlider2DSettings *)0x0) && (iVar14 = func_?(), iVar14 == 0))
    goto code_?;
    if (*(uint *)(iVar10 + 0xc) <= uVar11) goto code_?;
    *(GizmoLineSlider2DSettings **)(iVar10 + 0x10 + uVar11 * 4) = this_08;
    func_?();
    uVar11 = uVar11 + 1;
    iVar10._0_1_ = pSVar7[1].fields._canBeDisplayed;
    iVar10._1_1_ = pSVar7[1].fields._isExpanded;
    iVar10._2_2_ = *(undefined2 *)&pSVar7[1].fields.field_0x2;
    pSVar9 = &pSVar7[1].fields;
  } while( true );
}


/* UniversalGizmoHotkeys get_Hotkeys() */

UniversalGizmoHotkeys *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Hotkeys
          (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedHotkeys;
  if (pUVar1 == (UniversalGizmoHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pUVar1;
}


/* UniversalGizmoLookAndFeel2D get_LookAndFeel2D() */

UniversalGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel2D
          (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedLookAndFeel2D;
  if (pUVar1 == (UniversalGizmoLookAndFeel2D *)0x0) {
    return (this->fields)._lookAndFeel2D;
  }
  return pUVar1;
}


/* UniversalGizmoLookAndFeel3D get_LookAndFeel3D() */

UniversalGizmoLookAndFeel3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_LookAndFeel3D
          (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedLookAndFeel3D;
  if (pUVar1 == (UniversalGizmoLookAndFeel3D *)0x0) {
    return (this->fields)._lookAndFeel3D;
  }
  return pUVar1;
}


/* UniversalGizmoSettings2D get_Settings2D() */

UniversalGizmoSettings2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings2D
          (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedSettings2D;
  if (pUVar1 == (UniversalGizmoSettings2D *)0x0) {
    return (this->fields)._settings2D;
  }
  return pUVar1;
}


/* UniversalGizmoSettings3D get_Settings3D() */

UniversalGizmoSettings3D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Settings3D
          (UniversalGizmo *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._sharedSettings3D;
  if (pUVar1 == (UniversalGizmoSettings3D *)0x0) {
    return (this->fields)._settings3D;
  }
  return pUVar1;
}


/* UniversalGizmoLookAndFeel2D get_SharedLookAndFeel2D() */

UniversalGizmoLookAndFeel2D *
Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_SharedLookAndFeel2D
          (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._sharedLookAndFeel2D;
}


/* Boolean get_Use2DModeEnableHotkey() */

bool Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_get_Use2DModeEnableHotkey
               (UniversalGizmo *this,MethodInfo *method)

{
  return (this->fields)._use2DModeEnableHotkey;
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
  ppUVar1 = &(this->fields)._sharedLookAndFeel2D;
  *ppUVar1 = value;
  func_?(ppUVar1,value);
  UniversalGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedLookAndFeel3D(UniversalGizmoLookAndFeel3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedLookAndFeel3D
               (UniversalGizmo *this,UniversalGizmoLookAndFeel3D *value,MethodInfo *method)

{
  ppUVar1 = &(this->fields)._sharedLookAndFeel3D;
  *ppUVar1 = value;
  func_?(ppUVar1,value);
  UniversalGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings2D(UniversalGizmoSettings2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings2D
               (UniversalGizmo *this,UniversalGizmoSettings2D *value,MethodInfo *method)

{
  ppUVar1 = &(this->fields)._sharedSettings2D;
  *ppUVar1 = value;
  func_?(ppUVar1,value);
  UniversalGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings3D(UniversalGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmo::UniversalGizmo_set_SharedSettings3D
               (UniversalGizmo *this,UniversalGizmoSettings3D *value,MethodInfo *method)

{
  ppUVar1 = &(this->fields)._sharedSettings3D;
  *ppUVar1 = value;
  func_?(ppUVar1,value);
  UniversalGizmo_SetupSharedSettings(this,(MethodInfo *)0x0);
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


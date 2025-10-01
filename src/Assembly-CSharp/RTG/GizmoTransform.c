
/* Void AlignAxis2D(Int32, AxisSign, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_AlignAxis2D
               (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector2 axis,
               MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent != 0) {
    return;
  }
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if ((uint)axisIndex < pVVar1->max_length) {
    fVar2 = pVVar1->vector[axisIndex].x;
    fVar3 = pVVar1->vector[axisIndex].y;
    if (axisSign == AxisSign__Enum_Negative) {
      fVar2 = (float)((uint)fVar2 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar3 = (float)((uint)fVar3 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    }
    from.y = fVar3;
    from.x = fVar2;
    pQVar4 = QuaternionEx::QuaternionEx_FromToRotation2D
                       ((Quaternion *)&stack0xffffffec,from,axis,(MethodInfo *)0x0);
    fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(*pQVar4,(MethodInfo *)0x0);
    GizmoTransform_ChangeRotation2D
              (this,fVar2 + (this->fields)._rotation2DDegrees,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AlignAxis3D(Int32, AxisSign, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_AlignAxis3D
               (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector3 axis,
               MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    pVVar1 = GizmoTransform_GetAxis3D_1
                       ((Vector3 *)&stack0xffffffc0,this,axisIndex,axisSign,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar1 = GizmoTransform_GetAxis3D_1
                       ((Vector3 *)&stack0xffffffc0,this,(axisIndex + 1) % 3,axisSign,
                        (MethodInfo *)0x0);
    from.y = (float)uVar3;
    from.x = (float)uVar2;
    from.z = fVar4;
    pQVar5 = QuaternionEx::QuaternionEx_FromToRotation3D
                        ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
    fVar4 = (this->fields)._rotation3D.x;
    fVar6 = (this->fields)._rotation3D.y;
    fVar7 = (this->fields)._rotation3D.z;
    fVar8 = (this->fields)._rotation3D.w;
    fVar9 = pQVar5->y;
    fVar10 = pQVar5->z;
    fVar11 = pQVar5->w;
    value.y = (fVar6 * fVar11 + fVar8 * fVar9 + fVar10 * fVar4) - pQVar5->x * fVar7;
    value.x = (fVar11 * fVar4 + pQVar5->x * fVar8 + fVar9 * fVar7) - fVar6 * fVar10;
    value.z = (fVar10 * fVar8 + fVar11 * fVar7 + fVar6 * pQVar5->x) -
              (this->fields)._rotation3D.x * fVar9;
    value.w = ((fVar11 * fVar8 - (this->fields)._rotation3D.x * pQVar5->x) - fVar6 * fVar9) -
              fVar10 * fVar7;
    GizmoTransform_set_Rotation3D(this,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void ChangeLocalPosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalPosition2D
               (GizmoTransform *this,Vector2 localPosition,MethodInfo *method)

{
  pGVar1 = (this->fields)._parent;
  (this->fields)._localPosition2D.x = localPosition.x;
  fVar2 = (this->fields)._localPosition2D.x;
  (this->fields)._localPosition2D.y = localPosition.y;
  fVar3 = (this->fields)._localPosition2D.y;
  if (pGVar1 != (GizmoTransform *)0x0) {
    puStack_4 = (undefined *)0x0;
    point.y = fVar3;
    point.x = fVar2;
    point.z = 0.0;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&VStack_6,(((this->fields)._parent)->fields)._rotation2D,point,
                        (MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar5->x;
    uStack_7._4_4_ = pVVar5->y;
    pGVar1 = (this->fields)._parent;
    if (pGVar1 == (GizmoTransform *)0x0) {
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar2 = (pGVar1->fields)._position2D.x + (float)(undefined4)uStack_7;
    fVar3 = (pGVar1->fields)._position2D.y + (float)uStack_7._4_4_;
  }
  (this->fields)._position2D.x = fVar2;
  (this->fields)._position2D.y = fVar3;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar9 = (this->fields).Changed;
    puStack_4 = (pGVar9->fields)._._.method_code;
    uStack_7 = CONCAT44(&UNK_?,(undefined4)uStack_7);
    (*(pGVar9->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeLocalPosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalPosition3D
               (GizmoTransform *this,Vector3 localPosition,MethodInfo *method)

{
  uVar1 = localPosition._0_8_;
  pGVar2 = (this->fields)._parent;
  (this->fields)._localPosition3D.x = (float)(int)uVar1;
  (this->fields)._localPosition3D.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->fields)._localPosition3D.z = localPosition.z;
  if (pGVar2 == (GizmoTransform *)0x0) {
    (this->fields)._position3D.x = (float)(int)uVar1;
    (this->fields)._position3D.y = (float)(int)((ulonglong)uVar1 >> 0x20);
    (this->fields)._position3D.z = localPosition.z;
  }
  else {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&localPosition,(((this->fields)._parent)->fields)._rotation3D,localPosition,
                        (MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    pGVar2 = (this->fields)._parent;
    if (pGVar2 == (GizmoTransform *)0x0) {
      localPosition.y = (float)&UNK_?;
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar7 = (pGVar2->fields)._position3D.x;
    uVar8 = (pGVar2->fields)._position3D.y;
    localPosition.z = (pGVar2->fields)._position3D.z + pVVar3->z;
    (this->fields)._position3D.x = (float)uVar7 + (float)uVar4;
    (this->fields)._position3D.y = (float)uVar8 + (float)uVar5;
    (this->fields)._position3D.z = localPosition.z;
  }
  localPosition.y = 0.0;
  localPosition.x = (float)this;
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  localPosition.y = 0.0;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    localPosition.z = 2.8026e-45;
    localPosition.x = (float)this;
    (*(((this->fields).Changed)->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void ChangeLocalRotation2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation2D
               (GizmoTransform *this,float localRotation,MethodInfo *method)

{
  (this->fields)._localRotation2DDegrees = localRotation;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,localRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  pQVar1 = QuaternionEx::QuaternionEx_Normalize
                     ((Quaternion *)&stack0xffffffec,*pQVar1,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._localRotation2D.x = pQVar1->x;
  (this->fields)._localRotation2D.y = fVar2;
  (this->fields)._localRotation2D.z = fVar3;
  (this->fields)._localRotation2D.w = fVar4;
  GizmoTransform_OnLocalRotation2DChanged(this,(MethodInfo *)0x0);
  return;
}


/* Void ChangeLocalRotation2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation2D_1
               (GizmoTransform *this,Quaternion localRotation,MethodInfo *method)

{
  pQVar1 = QuaternionEx::QuaternionEx_Normalize(&localRotation,localRotation,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._localRotation2D.x = pQVar1->x;
  (this->fields)._localRotation2D.y = fVar2;
  (this->fields)._localRotation2D.z = fVar3;
  (this->fields)._localRotation2D.w = fVar4;
  GizmoTransform_OnLocalRotation2DChanged(this,(MethodInfo *)0x0);
  return;
}


/* Void ChangeLocalRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation3D
               (GizmoTransform *this,Quaternion localRotation,MethodInfo *method)

{
  pQVar1 = QuaternionEx::QuaternionEx_Normalize(&localRotation,localRotation,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._localRotation3D.x = pQVar1->x;
  (this->fields)._localRotation3D.y = fVar2;
  (this->fields)._localRotation3D.z = fVar3;
  (this->fields)._localRotation3D.w = fVar4;
  GizmoTransform_OnLocalRotation3DChanged(this,(MethodInfo *)0x0);
  return;
}


/* Void ChangePosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangePosition2D
               (GizmoTransform *this,Vector2 position,MethodInfo *method)

{
  pGVar1 = (this->fields)._parent;
  (this->fields)._position2D.x = position.x;
  (this->fields)._position2D.y = position.y;
  if (pGVar1 == (GizmoTransform *)0x0) {
    fVar2 = (this->fields)._position2D.x;
    fVar3 = (this->fields)._position2D.y;
  }
  else {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe0,
                        (((this->fields)._parent)->fields)._rotation2D,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._parent;
    if (pGVar1 == (GizmoTransform *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    point.y = (this->fields)._position2D.y - (pGVar1->fields)._position2D.y;
    point.x = (this->fields)._position2D.x - (pGVar1->fields)._position2D.x;
    point.z = 0.0;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe4,*pQVar4,point,(MethodInfo *)0x0);
    fVar2 = pVVar6->x;
    fVar3 = pVVar6->y;
  }
  (this->fields)._localPosition2D.x = fVar2;
  (this->fields)._localPosition2D.y = fVar3;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar7 = (this->fields).Changed;
    pvStack8 = (pGVar7->fields)._._.method;
    uStack9 = 1;
    (*(pGVar7->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangePosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangePosition3D
               (GizmoTransform *this,Vector3 position,MethodInfo *method)

{
  uVar1 = position._0_8_;
  pGVar2 = (this->fields)._parent;
  (this->fields)._position3D.x = (float)(int)uVar1;
  (this->fields)._position3D.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->fields)._position3D.z = position.z;
  if (pGVar2 != (GizmoTransform *)0x0) {
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe0,
                        (((this->fields)._parent)->fields)._rotation3D,(MethodInfo *)0x0);
    uVar4 = (this->fields)._position3D.x;
    uVar5 = (this->fields)._position3D.y;
    pGVar2 = (this->fields)._parent;
    position.z = (this->fields)._position3D.z;
    position.x = (float)uVar4;
    position.y = (float)uVar5;
    if (pGVar2 == (GizmoTransform *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar7 = (pGVar2->fields)._position3D.x;
    uVar8 = (pGVar2->fields)._position3D.y;
    position.z = position.z - (pGVar2->fields)._position3D.z;
    point.y = (float)uVar5 - (float)uVar8;
    point.x = (float)uVar4 - (float)uVar7;
    point.z = position.z;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&position,*pQVar3,point,(MethodInfo *)0x0);
    uVar1._0_4_ = pVVar9->x;
    uVar1._4_4_ = pVVar9->y;
    position.z = pVVar9->z;
  }
  (this->fields)._localPosition3D.x = (float)(int)uVar1;
  (this->fields)._localPosition3D.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->fields)._localPosition3D.z = position.z;
  position.z = (float)this;
  position.y = (float)&UNK_?;
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar10 = (this->fields).Changed;
    pvStack11 = (pGVar10->fields)._._.method;
    uStack12 = 2;
    position.z = (float)this;
    position.y = (float)(pGVar10->fields)._._.method_code;
    position.x = (float)&UNK_?;
    (*(pGVar10->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void ChangeRotation2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation2D
               (GizmoTransform *this,float rotation,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  (this->fields)._rotation2DDegrees = (float)fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,(float)fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  pQVar2 = QuaternionEx::QuaternionEx_Normalize
                     ((Quaternion *)&stack0xffffffec,*pQVar2,(MethodInfo *)0x0);
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  (this->fields)._rotation2D.x = pQVar2->x;
  (this->fields)._rotation2D.y = fVar3;
  (this->fields)._rotation2D.z = fVar4;
  (this->fields)._rotation2D.w = fVar5;
  GizmoTransform_OnRotation2DChanged(this,(MethodInfo *)0x0);
  return;
}


/* Void ChangeRotation2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation2D_1
               (GizmoTransform *this,Quaternion rotation,MethodInfo *method)

{
  pQVar1 = QuaternionEx::QuaternionEx_Normalize(&rotation,rotation,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._rotation2D.x = pQVar1->x;
  (this->fields)._rotation2D.y = fVar2;
  (this->fields)._rotation2D.z = fVar3;
  (this->fields)._rotation2D.w = fVar4;
  GizmoTransform_OnRotation2DChanged(this,(MethodInfo *)0x0);
  return;
}


/* Void ChangeRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation3D
               (GizmoTransform *this,Quaternion rotation,MethodInfo *method)

{
  pQVar1 = QuaternionEx::QuaternionEx_Normalize(&rotation,rotation,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields)._rotation3D.x = pQVar1->x;
  (this->fields)._rotation3D.y = fVar2;
  (this->fields)._rotation3D.z = fVar3;
  (this->fields)._rotation3D.w = fVar4;
  GizmoTransform_OnRotation3DChanged(this,(MethodInfo *)0x0);
  return;
}


/* List`1[RTG.GizmoTransform] FilterParentsOnly(IEnumerable`1[RTG.GizmoTransform]) */

List_1_RTG_GizmoTransform_ *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_FilterParentsOnly
          (IEnumerable_1_RTG_GizmoTransform_ *transforms,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::GizmoTransform>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::GizmoTransform>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  if (transforms == (IEnumerable_1_RTG_GizmoTransform_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_RTG_GizmoTransform_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,10,MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_)
  ;
  iVar4 = func_?(0,TypeInfo__System__Collections__Generic__IEnumerable<RTG::GizmoTransform>
                          ,transforms);
  uStack_1 = 0;
code_?:
  uStack_1._0_1_ = 1;
  while (iVar4 != 0) {
    cVar5 = func_?();
    if (cVar5 == '\0') {
      uStack_1 = 0xffffffff;
      if (iVar4 != 0) {
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_RTG_GizmoTransform_ *)this;
      }
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_RTG_GizmoTransform_ *)this;
    }
    if (iVar4 == 0) break;
    this_00 = (GizmoTransform *)func_?();
    iVar6 = func_?();
    uStack_1._0_1_ = 3;
    while( true ) {
      if (iVar6 == 0) goto code_?;
      cVar5 = func_?();
      if (cVar5 == '\0') break;
      if (iVar6 == 0) goto code_?;
      transform = (GizmoTransform *)func_?();
      if (transform != this_00) {
        if (this_00 == (GizmoTransform *)0x0) goto code_?;
        bVar7 = GizmoTransform_IsChildOf(this_00,transform,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          func_?();
          goto code_?;
        }
      }
    }
    uStack_1._0_1_ = 1;
    func_?();
    uStack_1._0_1_ = 1;
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,(Object *)this_00,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
              );
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pLVar9 = (List_1_RTG_GizmoTransform_ *)(*pcVar8)();
  return pLVar9;
}


/* PlaneQuadrantId Get3DQuadrantFacingCamera(PlaneId, Camera) */

PlaneQuadrantId__Enum
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Get3DQuadrantFacingCamera
          (GizmoTransform *this,PlaneId__Enum planeId,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__RTG__PlaneIdHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__PlaneIdHelper);
  }
  axisIndex = PlaneIdHelper::PlaneIdHelper_PlaneIdToFirstAxisIndex(planeId,(MethodInfo *)0x0);
  axisIndex_00 = PlaneIdHelper::PlaneIdHelper_PlaneIdToSecondAxisIndex(planeId,(MethodInfo *)0x0);
  pVVar1 = GizmoTransform_GetAxis3D_1
                     (&VStack_2,this,axisIndex,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = GizmoTransform_GetAxis3D_1
                     ((Vector3 *)&stack0xffffffe8,this,axisIndex_00,AxisSign__Enum_Positive,
                      (MethodInfo *)0x0);
  fVar6 = (this->fields)._position3D.z;
  VStack_2.y = pVVar1->x;
  VStack_2.z = pVVar1->y;
  uVar7._0_4_ = (this->fields)._position3D.x;
  uVar7._4_4_ = (this->fields)._position3D.y;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VStack_2.z = (float)&UNK_?;
  point_00.z = fVar6;
  point_00.x = (float)uVar7;
  point_00.y = SUB84(uVar7,4);
  pointNormal_00.y = (float)uVar4;
  pointNormal_00.x = (float)uVar3;
  pointNormal_00.z = fVar5;
  bVar8 = CameraEx::CameraEx_IsPointFacingCamera(camera,point_00,pointNormal_00,(MethodInfo *)0x0);
  uVar9._0_4_ = (this->fields)._position3D.x;
  uVar9._4_4_ = (this->fields)._position3D.y;
  fStack10 = (this->fields)._position3D.z;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  point.z = fStack10;
  point.x = (float)uVar9;
  point.y = SUB84(uVar9,4);
  pointNormal.z = 0.0;
  pointNormal.x = VStack_2.y;
  pointNormal.y = VStack_2.z;
  bVar11 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,pointNormal,(MethodInfo *)0x0);
  if ((TypeInfo__RTG__PlaneIdHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  PVar12 = PlaneIdHelper::PlaneIdHelper_GetQuadrantFromAxesSigns
                    (planeId,bVar8 ^ AxisSign__Enum_Negative,bVar11 ^ AxisSign__Enum_Negative,
                     (MethodInfo *)0x0);
  return PVar12;
}


/* Vector2[] GetAxes2D() */

Vector2__Array *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxes2D
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 != (Vector2__Array *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pVVar1,(MethodInfo *)0x0);
    pVVar1 = (Vector2__Array *)func_?();
    return pVVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector2__Array *)(*pcVar4)();
  return pVVar1;
}


/* Vector3[] GetAxes3D() */

Vector3__Array *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxes3D
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._axes3D;
  if (pVVar1 != (Vector3__Array *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
              ((PlayableBehaviour *)pVVar1,(MethodInfo *)0x0);
    pVVar1 = (Vector3__Array *)func_?();
    return pVVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar4)();
  return pVVar1;
}


/* Vector2 GetAxis2D(AxisDescriptor) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis2D
                  (GizmoTransform *this,AxisDescriptor *axisDesc,MethodInfo *method)

{
  if ((axisDesc == (AxisDescriptor *)0x0) ||
     (pVVar1 = (this->fields)._axes2D, pVVar1 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    uVar2 = (axisDesc->fields)._index;
    if (uVar2 < pVVar1->max_length) {
      fStack_3 = pVVar1->vector[uVar2].x;
      fStack_4 = pVVar1->vector[uVar2].y;
      bVar5 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success
                        ((WebCompletionSource_1_T_Result_System_Object_ *)axisDesc,(MethodInfo *)0x0
                        );
      if (bVar5 != 0) {
        fStack_3 = (float)((uint)fStack_3 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fStack_4 = (float)((uint)fStack_4 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      VVar6.y = fStack_4;
      VVar6.x = fStack_3;
      return VVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar7)();
  return VVar6;
}


/* Vector2 GetAxis2D(Int32, AxisSign) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis2D_1
                  (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
                  )

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if ((uint)axisIndex < pVVar1->max_length) {
    fStack_2 = pVVar1->vector[axisIndex].x;
    fStack_3 = pVVar1->vector[axisIndex].y;
    if (axisSign == AxisSign__Enum_Negative) {
      fStack_2 = (float)((uint)fStack_2 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fStack_3 = (float)((uint)fStack_3 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    }
    VVar4.y = fStack_3;
    VVar4.x = fStack_2;
    return VVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
}


/* Vector3 GetAxis3D(AxisDescriptor) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,AxisDescriptor *axisDesc,
                    MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if ((axisDesc == (AxisDescriptor *)0x0) ||
     (pVVar1 = (this->fields)._axes3D, pVVar1 == (Vector3__Array *)0x0)) {
    func_?();
  }
  else {
    uVar2 = (axisDesc->fields)._index;
    if (uVar2 < pVVar1->max_length) {
      fVar3 = pVVar1->vector[uVar2].y;
      fVar4 = pVVar1->vector[uVar2].z;
      __return_storage_ptr__->x = pVVar1->vector[uVar2].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      bVar5 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success
                        ((WebCompletionSource_1_T_Result_System_Object_ *)axisDesc,(MethodInfo *)0x0
                        );
      if (bVar5 != 0) {
        uVar6 = __return_storage_ptr__->x;
        uVar7 = __return_storage_ptr__->y;
        uVar2 = uVar7 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        fVar4 = (float)((uint)__return_storage_ptr__->z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        __return_storage_ptr__->x =
             (float)(uVar6 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        __return_storage_ptr__->y = (float)uVar2;
        __return_storage_ptr__->z = fVar4;
      }
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Vector3 GetAxis3D(Int32, AxisSign) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis3D_1
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,int32_t axisIndex,
                    AxisSign__Enum axisSign,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  pVVar1 = (this->fields)._axes3D;
  __return_storage_ptr__->z = 0.0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if ((uint)axisIndex < pVVar1->max_length) {
    uVar2 = pVVar1->vector[axisIndex].x;
    uVar3 = pVVar1->vector[axisIndex].y;
    fVar4 = pVVar1->vector[axisIndex].z;
    __return_storage_ptr__->x = (float)uVar2;
    __return_storage_ptr__->y = (float)uVar3;
    __return_storage_ptr__->z = fVar4;
    if (axisSign == AxisSign__Enum_Negative) {
      fVar4 = (float)((uint)fVar4 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      uVar5 = uVar3 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      __return_storage_ptr__->x =
           (float)(uVar2 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      __return_storage_ptr__->y = (float)uVar5;
      __return_storage_ptr__->z = fVar4;
    }
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Plane GetPlane3D(PlaneId, PlaneQuadrantId) */

Plane * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetPlane3D
                  (Plane *__return_storage_ptr__,GizmoTransform *this,PlaneId__Enum planeId,
                  PlaneQuadrantId__Enum planeQuadrantId,MethodInfo *method)

{
  PStack_1._id = 0;
  PStack_1._quadrant = 0;
  PStack_1._firstAxisDescriptor = (AxisDescriptor *)0x0;
  PStack_1._secondAxisDescriptor = (AxisDescriptor *)0x0;
  PlaneDescriptor::PlaneDescriptor__ctor(&PStack_1,planeId,planeQuadrantId,(MethodInfo *)0x0);
  pVVar2 = GizmoTransform_GetAxis3D
                     ((Vector3 *)&stack0xfffffff0,this,PStack_1._firstAxisDescriptor,
                      (MethodInfo *)0x0);
  fVar3 = pVVar2->x;
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  pVVar2 = GizmoTransform_GetAxis3D
                     ((Vector3 *)&stack0xffffffd8,this,PStack_1._secondAxisDescriptor,
                      (MethodInfo *)0x0);
  uVar6 = pVVar2->x;
  uVar7 = pVVar2->y;
  value.y = (float)uVar6 * fVar5 - fVar3 * pVVar2->z;
  value.x = pVVar2->z * fVar4 - (float)uVar7 * fVar5;
  value.z = fVar3 * (float)uVar7 - (float)uVar6 * fVar4;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,value,(MethodInfo *)0x0);
  fVar5 = (this->fields)._position3D.x;
  fVar8 = (this->fields)._position3D.y;
  fVar3 = (this->fields)._position3D.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar2,(MethodInfo *)0x0);
  uVar9 = pVVar2->x;
  uVar10 = pVVar2->y;
  fVar4 = pVVar2->z;
  (__return_storage_ptr__->m_Normal).x = (float)uVar9;
  (__return_storage_ptr__->m_Normal).y = (float)uVar10;
  (__return_storage_ptr__->m_Normal).z = fVar4;
  __return_storage_ptr__->m_Distance =
       (float)((uint)(fVar8 * (float)uVar10 + fVar5 * (float)uVar9 + fVar3 * fVar4) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return __return_storage_ptr__;
}


/* Plane GetPlane3D(PlaneDescriptor) */

Plane * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetPlane3D_1
                  (Plane *__return_storage_ptr__,GizmoTransform *this,PlaneDescriptor planeDesc,
                  MethodInfo *method)

{
  pVVar1 = GizmoTransform_GetAxis3D
                     ((Vector3 *)&stack0xfffffff0,this,planeDesc._firstAxisDescriptor,
                      (MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = GizmoTransform_GetAxis3D
                     ((Vector3 *)&stack0xffffffd8,this,planeDesc._secondAxisDescriptor,
                      (MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  value.y = (float)uVar5 * fVar4 - fVar2 * pVVar1->z;
  value.x = pVVar1->z * fVar3 - (float)uVar6 * fVar4;
  value.z = fVar2 * (float)uVar6 - (float)uVar5 * fVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,value,(MethodInfo *)0x0);
  fVar4 = (this->fields)._position3D.x;
  fVar7 = (this->fields)._position3D.y;
  fVar2 = (this->fields)._position3D.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar1,(MethodInfo *)0x0);
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar3 = pVVar1->z;
  (__return_storage_ptr__->m_Normal).x = (float)uVar8;
  (__return_storage_ptr__->m_Normal).y = (float)uVar9;
  (__return_storage_ptr__->m_Normal).z = fVar3;
  __return_storage_ptr__->m_Distance =
       (float)((uint)(fVar7 * (float)uVar9 + fVar4 * (float)uVar8 + fVar2 * fVar3) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return __return_storage_ptr__;
}


/* Vector2 InverseTransformNormal2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformNormal2D
                  (GizmoTransform *this,Vector2 normal,MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffe0,(this->fields)._rotation2D,(MethodInfo *)0x0);
  point.z = 0.0;
  point._0_8_ = normal;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,*pQVar1,point,(MethodInfo *)0x0);
  fStack3 = pVVar2->z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,*pVVar2,(MethodInfo *)0x0);
  VVar4.x = pVVar2->x;
  VVar4.y = pVVar2->y;
  return VVar4;
}


/* Vector3 InverseTransformNormal3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformNormal3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 normal,
                    MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffec,(this->fields)._rotation3D,(MethodInfo *)0x0);
  point.y = normal.y;
  point.x = normal.x;
  point.z = normal.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&normal,*pQVar1,point,(MethodInfo *)0x0);
  uVar3 = pVVar2->y;
  fStack4 = pVVar2->z;
  normal.z = (float)&normal;
  normal.y = (float)&UNK_?;
  uStack5 = uVar3;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)normal.z,*pVVar2,(MethodInfo *)0x0);
  fVar6 = pVVar2->y;
  fVar7 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar7;
  return __return_storage_ptr__;
}


/* Vector2 InverseTransformPoint2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformPoint2D
                  (GizmoTransform *this,Vector2 point,MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffe0,(this->fields)._rotation2D,(MethodInfo *)0x0);
  point_00.y = point.y - (this->fields)._position2D.y;
  point_00.x = point.x - (this->fields)._position2D.x;
  point_00.z = 0.0;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,*pQVar1,point_00,(MethodInfo *)0x0);
  VVar3.x = pVVar2->x;
  VVar3.y = pVVar2->y;
  return VVar3;
}


/* Vector3 InverseTransformPoint3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformPoint3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 point,
                    MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     ((Quaternion *)&stack0xffffffe0,(this->fields)._rotation3D,(MethodInfo *)0x0);
  uVar2 = (this->fields)._position3D.x;
  uVar3 = (this->fields)._position3D.y;
  point.z = point.z - (this->fields)._position3D.z;
  point_00.y = point.y - (float)uVar3;
  point_00.x = point.x - (float)uVar2;
  point_00.z = point.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&point,*pQVar1,point_00,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Boolean IsChildOf(GizmoTransform) */

bool Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_IsChildOf
               (GizmoTransform *this,GizmoTransform *transform,MethodInfo *method)

{
  for (pGVar1 = (this->fields)._parent; pGVar1 != transform; pGVar1 = (pGVar1->fields)._parent) {
    bVar2 = true;
    if (pGVar1 == (GizmoTransform *)0x0) goto code_?;
  }
  bVar2 = pGVar1 == (GizmoTransform *)0x0;
code_?:
  return !bVar2;
}


/* Void OnChanged(GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnChanged
               (GizmoTransform *this,GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  pGVar1 = (this->fields).Changed;
  if (changeData.TRSDimension != 2) {
    (this->fields)._firingChanged2DEvent = 1;
    if (pGVar1 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar1->fields)._._.invoke_impl)
                ((pGVar1->fields)._._.method_code,this,changeData.ChangeReason,
                 changeData.TRSDimension,(pGVar1->fields)._._.method);
    }
    (this->fields)._firingChanged2DEvent = 0;
    return;
  }
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar1 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar1->fields)._._.invoke_impl)
              ((pGVar1->fields)._._.method_code,this,changeData.ChangeReason,2,
               (pGVar1->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnLocalPosition2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalPosition2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = &(this->fields)._localPosition2D;
  fVar2 = pVVar1->x;
  fVar3 = (this->fields)._localPosition2D.y;
  if ((this->fields)._parent != (GizmoTransform *)0x0) {
    puStack_4 = (undefined *)0x0;
    point.z = 0.0;
    point.x = pVVar1->x;
    point.y = pVVar1->y;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&VStack_6,(((this->fields)._parent)->fields)._rotation2D,point,
                        (MethodInfo *)0x0);
    uVar7 = pVVar5->x;
    uVar8 = pVVar5->y;
    pGVar9 = (this->fields)._parent;
    fStack_10 = (float)uVar7;
    puStack_11 = (undefined *)uVar8;
    if (pGVar9 == (GizmoTransform *)0x0) {
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar2 = (float)uVar7 + (pGVar9->fields)._position2D.x;
    fVar3 = (float)uVar8 + (pGVar9->fields)._position2D.y;
  }
  (this->fields)._position2D.x = fVar2;
  (this->fields)._position2D.y = fVar3;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar13 = (this->fields).Changed;
    puStack_4 = (pGVar13->fields)._._.method_code;
    (*(pGVar13->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnLocalPosition3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalPosition3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = &(this->fields)._localPosition3D;
  fVar2 = pVVar1->y;
  fVar3 = (this->fields)._localPosition3D.z;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    (this->fields)._position3D.x = pVVar1->x;
    (this->fields)._position3D.y = fVar2;
  }
  else {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&VStack_4,(((this->fields)._parent)->fields)._rotation3D,*pVVar1,
                        (MethodInfo *)0x0);
    uVar5 = pVVar1->x;
    uVar6 = pVVar1->y;
    pGVar7 = (this->fields)._parent;
    if (pGVar7 == (GizmoTransform *)0x0) {
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar9 = (pGVar7->fields)._position3D.x;
    uVar10 = (pGVar7->fields)._position3D.y;
    fVar3 = (pGVar7->fields)._position3D.z + pVVar1->z;
    (this->fields)._position3D.x = (float)uVar9 + (float)uVar5;
    (this->fields)._position3D.y = (float)uVar10 + (float)uVar6;
    VStack_4.x = (float)uVar9;
    VStack_4.y = (float)uVar10;
  }
  (this->fields)._position3D.z = fVar3;
  VStack_4.z = (float)&UNK_?;
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar11 = (this->fields).Changed;
    VStack_4.z = (float)(pGVar11->fields)._._.method_code;
    VStack_4.y = (float)&UNK_?;
    (*(pGVar11->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnLocalRotation2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalRotation2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localRotation2D.x;
    fVar2 = (this->fields)._localRotation2D.y;
    fVar3 = (this->fields)._localRotation2D.z;
    fVar4 = (this->fields)._localRotation2D.w;
  }
  else {
    fVar1 = (this->fields)._localRotation2D.x;
    fVar2 = (this->fields)._localRotation2D.y;
    fVar3 = (this->fields)._localRotation2D.z;
    fVar4 = (this->fields)._localRotation2D.w;
    pGVar5 = (this->fields)._parent;
    fVar6 = (pGVar5->fields)._rotation2D.y;
    fVar7 = (pGVar5->fields)._rotation2D.z;
    fVar8 = (pGVar5->fields)._rotation2D.w;
    quat.y = (fVar6 * fVar4 + fVar2 * fVar8 + fVar7 * fVar1) -
             fVar3 * (pGVar5->fields)._rotation2D.x;
    quat.x = (fVar4 * (pGVar5->fields)._rotation2D.x + fVar1 * fVar8 + fVar3 * fVar6) -
             fVar2 * fVar7;
    quat.z = (fVar7 * fVar4 + fVar3 * fVar8 + fVar2 * (pGVar5->fields)._rotation2D.x) -
             fVar6 * (this->fields)._localRotation2D.x;
    quat.w = ((fVar4 * fVar8 - (pGVar5->fields)._rotation2D.x * (this->fields)._localRotation2D.x) -
             fVar2 * fVar6) - fVar7 * fVar3;
    pQVar9 = QuaternionEx::QuaternionEx_Normalize
                       ((Quaternion *)&stack0xffffffd0,quat,(MethodInfo *)0x0);
    fVar1 = pQVar9->x;
    fVar2 = pQVar9->y;
    fVar3 = pQVar9->z;
    fVar4 = pQVar9->w;
  }
  (this->fields)._rotation2D.x = fVar1;
  (this->fields)._rotation2D.y = fVar2;
  (this->fields)._rotation2D.z = fVar3;
  (this->fields)._rotation2D.w = fVar4;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation
                    ((this->fields)._rotation2D,(MethodInfo *)0x0);
  (this->fields)._rotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(((this->fields).Changed)->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnLocalRotation3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalRotation3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localRotation3D.x;
    fVar2 = (this->fields)._localRotation3D.y;
    fVar3 = (this->fields)._localRotation3D.z;
    fVar4 = (this->fields)._localRotation3D.w;
  }
  else {
    fVar1 = (this->fields)._localRotation3D.x;
    fVar2 = (this->fields)._localRotation3D.y;
    fVar3 = (this->fields)._localRotation3D.z;
    fVar4 = (this->fields)._localRotation3D.w;
    pGVar5 = (this->fields)._parent;
    fVar6 = (pGVar5->fields)._rotation3D.y;
    fVar7 = (pGVar5->fields)._rotation3D.z;
    fVar8 = (pGVar5->fields)._rotation3D.w;
    quat.y = (fVar6 * fVar4 + fVar2 * fVar8 + fVar7 * fVar1) -
             fVar3 * (pGVar5->fields)._rotation3D.x;
    quat.x = (fVar4 * (pGVar5->fields)._rotation3D.x + fVar1 * fVar8 + fVar3 * fVar6) -
             fVar2 * fVar7;
    quat.z = (fVar7 * fVar4 + fVar3 * fVar8 + fVar2 * (pGVar5->fields)._rotation3D.x) -
             fVar6 * (this->fields)._localRotation3D.x;
    quat.w = ((fVar4 * fVar8 - (pGVar5->fields)._rotation3D.x * (this->fields)._localRotation3D.x) -
             fVar2 * fVar6) - fVar7 * fVar3;
    pQVar9 = QuaternionEx::QuaternionEx_Normalize
                       ((Quaternion *)&stack0xffffffd0,quat,(MethodInfo *)0x0);
    fVar1 = pQVar9->x;
    fVar2 = pQVar9->y;
    fVar3 = pQVar9->z;
    fVar4 = pQVar9->w;
  }
  (this->fields)._rotation3D.x = fVar1;
  (this->fields)._rotation3D.y = fVar2;
  (this->fields)._rotation3D.z = fVar3;
  (this->fields)._rotation3D.w = fVar4;
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(((this->fields).Changed)->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnParentChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnParentChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position3D.y;
    fVar2 = (this->fields)._position2D.y;
    fVar3 = (this->fields)._position3D.z;
    (this->fields)._localPosition3D.x = (this->fields)._position3D.x;
    (this->fields)._localPosition3D.y = fVar1;
    fVar1 = (this->fields)._rotation3D.x;
    fVar4 = (this->fields)._rotation3D.y;
    fVar5 = (this->fields)._rotation3D.z;
    fVar6 = (this->fields)._rotation3D.w;
    (this->fields)._localPosition3D.z = fVar3;
    (this->fields)._localPosition2D.y = fVar2;
    (this->fields)._localRotation3D.x = fVar1;
    (this->fields)._localRotation3D.y = fVar4;
    (this->fields)._localRotation3D.z = fVar5;
    (this->fields)._localRotation3D.w = fVar6;
    (this->fields)._localPosition2D.x = (this->fields)._position2D.x;
    fVar2 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar1 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar2;
    (this->fields)._localRotation2D.z = fVar3;
    (this->fields)._localRotation2D.w = fVar1;
    fVar2 = (this->fields)._rotation2DDegrees;
code_?:
    (this->fields)._localRotation2DDegrees = fVar2;
    GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
    GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
    (this->fields)._firingChanged2DEvent = 1;
    if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
      pGVar7 = (this->fields).Changed;
      pvStack8 = (pGVar7->fields)._._.method;
      uStack9 = 0;
      uStack10 = 1;
      pGStack11 = this;
      (*(pGVar7->fields)._._.invoke_impl)();
    }
    (this->fields)._firingChanged2DEvent = 0;
    return;
  }
  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                      ((Quaternion *)&stack0xffffffc0,(((this->fields)._parent)->fields)._rotation3D
                       ,(MethodInfo *)0x0);
  uVar13 = (this->fields)._position3D.x;
  uVar14 = (this->fields)._position3D.y;
  pGVar15 = (this->fields)._parent;
  if (pGVar15 != (GizmoTransform *)0x0) {
    uVar16 = (pGVar15->fields)._position3D.x;
    uVar17 = (pGVar15->fields)._position3D.y;
    point_00.y = (float)uVar14 - (float)uVar17;
    point_00.x = (float)uVar13 - (float)uVar16;
    point_00.z = (this->fields)._position3D.z - (pGVar15->fields)._position3D.z;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&puStack_19,*pQVar12,point_00,(MethodInfo *)0x0);
    pGVar15 = (this->fields)._parent;
    fVar3 = pVVar18->y;
    fVar2 = pVVar18->z;
    (this->fields)._localPosition3D.x = pVVar18->x;
    (this->fields)._localPosition3D.y = fVar3;
    (this->fields)._localPosition3D.z = fVar2;
    if (pGVar15 != (GizmoTransform *)0x0) {
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                          ((Quaternion *)&stack0xffffffc0,(pGVar15->fields)._rotation3D,
                           (MethodInfo *)0x0);
      fVar2 = (this->fields)._rotation3D.x;
      fVar3 = (this->fields)._rotation3D.y;
      fVar1 = (this->fields)._rotation3D.z;
      fVar4 = (this->fields)._rotation3D.w;
      fVar5 = pQVar12->y;
      fVar6 = pQVar12->z;
      fVar20 = pQVar12->w;
      puStack_19 = (undefined *)
                   ((fVar4 * pQVar12->x + fVar2 * fVar20 + fVar1 * fVar5) - fVar3 * fVar6);
      QVar21.y = (fVar5 * fVar4 + fVar3 * fVar20 + fVar6 * fVar2) - fVar1 * pQVar12->x;
      QVar21.x = (float)puStack_19;
      QVar21.z = (fVar6 * fVar4 + fVar1 * fVar20 + fVar3 * pQVar12->x) -
                 fVar5 * (this->fields)._rotation3D.x;
      QVar21.w = ((fVar4 * fVar20 - pQVar12->x * (this->fields)._rotation3D.x) - fVar3 * fVar5) -
                 fVar6 * fVar1;
      pQVar12 = QuaternionEx::QuaternionEx_Normalize
                          ((Quaternion *)&stack0xffffffc0,QVar21,(MethodInfo *)0x0);
      pGVar15 = (this->fields)._parent;
      fVar2 = pQVar12->y;
      fVar3 = pQVar12->z;
      fVar1 = pQVar12->w;
      (this->fields)._localRotation3D.x = pQVar12->x;
      (this->fields)._localRotation3D.y = fVar2;
      (this->fields)._localRotation3D.z = fVar3;
      (this->fields)._localRotation3D.w = fVar1;
      if (pGVar15 != (GizmoTransform *)0x0) {
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                            ((Quaternion *)&stack0xffffffc0,(pGVar15->fields)._rotation2D,
                             (MethodInfo *)0x0);
        pGVar15 = (this->fields)._parent;
        if (pGVar15 != (GizmoTransform *)0x0) {
          point.y = (this->fields)._position2D.y - (pGVar15->fields)._position2D.y;
          point.x = (this->fields)._position2D.x - (pGVar15->fields)._position2D.x;
          point.z = 0.0;
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffe0,*pQVar12,point,(MethodInfo *)0x0);
          uVar22 = pVVar18->x;
          uVar23 = pVVar18->y;
          pGVar15 = (this->fields)._parent;
          (this->fields)._localPosition2D.x = (float)uVar22;
          (this->fields)._localPosition2D.y = (float)uVar23;
          if (pGVar15 != (GizmoTransform *)0x0) {
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                                ((Quaternion *)&stack0xffffffc0,(pGVar15->fields)._rotation2D,
                                 (MethodInfo *)0x0);
            fVar2 = (this->fields)._rotation2D.x;
            fVar3 = (this->fields)._rotation2D.y;
            fVar1 = (this->fields)._rotation2D.z;
            fVar4 = (this->fields)._rotation2D.w;
            fVar5 = pQVar12->y;
            fVar6 = pQVar12->z;
            fVar20 = pQVar12->w;
            puStack_19 = (undefined *)
                         ((fVar4 * pQVar12->x + fVar2 * fVar20 + fVar1 * fVar5) - fVar3 * fVar6
                         );
            quat.y = (fVar5 * fVar4 + fVar3 * fVar20 + fVar6 * fVar2) - fVar1 * pQVar12->x;
            quat.x = (float)puStack_19;
            quat.z = (fVar6 * fVar4 + fVar1 * fVar20 + fVar3 * pQVar12->x) -
                     fVar5 * (this->fields)._rotation2D.x;
            quat.w = ((fVar4 * fVar20 - pQVar12->x * (this->fields)._rotation2D.x) - fVar3 * fVar5
                     ) - fVar6 * fVar1;
            pQVar12 = QuaternionEx::QuaternionEx_Normalize
                                ((Quaternion *)&stack0xffffffc0,quat,(MethodInfo *)0x0);
            fVar2 = pQVar12->y;
            fVar3 = pQVar12->z;
            fVar1 = pQVar12->w;
            QVar21 = *pQVar12;
            (this->fields)._localRotation2D.x = pQVar12->x;
            (this->fields)._localRotation2D.y = fVar2;
            (this->fields)._localRotation2D.z = fVar3;
            (this->fields)._localRotation2D.w = fVar1;
            fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(QVar21,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnPosition2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnPosition2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position2D.x;
    fVar2 = (this->fields)._position2D.y;
  }
  else {
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffe0,
                        (((this->fields)._parent)->fields)._rotation2D,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._parent;
    if (pGVar4 == (GizmoTransform *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    point.y = (this->fields)._position2D.y - (pGVar4->fields)._position2D.y;
    point.x = (this->fields)._position2D.x - (pGVar4->fields)._position2D.x;
    point.z = 0.0;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe4,*pQVar3,point,(MethodInfo *)0x0);
    fVar1 = pVVar6->x;
    fVar2 = pVVar6->y;
  }
  (this->fields)._localPosition2D.x = fVar1;
  (this->fields)._localPosition2D.y = fVar2;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar7 = (this->fields).Changed;
    pvStack8 = (pGVar7->fields)._._.method;
    uStack9 = 1;
    puStack10 = (pGVar7->fields)._._.method_code;
    (*(pGVar7->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnPosition3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnPosition3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    uVar1._0_4_ = (this->fields)._position3D.x;
    uVar1._4_4_ = (this->fields)._position3D.y;
    fVar2 = (this->fields)._position3D.z;
  }
  else {
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffd4,
                        (((this->fields)._parent)->fields)._rotation3D,(MethodInfo *)0x0);
    uVar4 = (this->fields)._position3D.x;
    uVar5 = (this->fields)._position3D.y;
    pGVar6 = (this->fields)._parent;
    if (pGVar6 == (GizmoTransform *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar8 = (pGVar6->fields)._position3D.x;
    uVar9 = (pGVar6->fields)._position3D.y;
    point.y = (float)uVar5 - (float)uVar9;
    point.x = (float)uVar4 - (float)uVar8;
    point.z = (this->fields)._position3D.z - (pGVar6->fields)._position3D.z;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffe4,*pQVar3,point,(MethodInfo *)0x0);
    uVar1._0_4_ = pVVar10->x;
    uVar1._4_4_ = pVVar10->y;
    fVar2 = pVVar10->z;
  }
  (this->fields)._localPosition3D.x = (float)(int)uVar1;
  (this->fields)._localPosition3D.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  (this->fields)._localPosition3D.z = fVar2;
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    pGVar11 = (this->fields).Changed;
    pvStack12 = (pGVar11->fields)._._.method;
    uStack13 = 2;
    (*(pGVar11->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnRotation2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnRotation2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.x;
    fVar2 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar4 = (this->fields)._rotation2D.w;
  }
  else {
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffc0,
                        (((this->fields)._parent)->fields)._rotation2D,(MethodInfo *)0x0);
    fVar1 = (this->fields)._rotation2D.x;
    fVar2 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar4 = (this->fields)._rotation2D.w;
    fVar6 = pQVar5->y;
    fVar7 = pQVar5->z;
    fVar8 = pQVar5->w;
    quat.y = (fVar6 * fVar4 + fVar2 * fVar8 + fVar7 * fVar1) - fVar3 * pQVar5->x;
    quat.x = (fVar4 * pQVar5->x + fVar1 * fVar8 + fVar3 * fVar6) - fVar2 * fVar7;
    quat.z = (fVar7 * fVar4 + fVar3 * fVar8 + fVar2 * pQVar5->x) -
             fVar6 * (this->fields)._rotation2D.x;
    quat.w = ((fVar4 * fVar8 - pQVar5->x * (this->fields)._rotation2D.x) - fVar2 * fVar6) -
             fVar7 * fVar3;
    pQVar5 = QuaternionEx::QuaternionEx_Normalize
                       ((Quaternion *)&stack0xffffffc0,quat,(MethodInfo *)0x0);
    fVar1 = pQVar5->x;
    fVar2 = pQVar5->y;
    fVar3 = pQVar5->z;
    fVar4 = pQVar5->w;
  }
  (this->fields)._localRotation2D.x = fVar1;
  (this->fields)._localRotation2D.y = fVar2;
  (this->fields)._localRotation2D.z = fVar3;
  (this->fields)._localRotation2D.w = fVar4;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation
                    ((this->fields)._localRotation2D,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged2DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(((this->fields).Changed)->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnRotation3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnRotation3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation3D.x;
    fVar2 = (this->fields)._rotation3D.y;
    fVar3 = (this->fields)._rotation3D.z;
    fVar4 = (this->fields)._rotation3D.w;
  }
  else {
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                       ((Quaternion *)&stack0xffffffc0,
                        (((this->fields)._parent)->fields)._rotation3D,(MethodInfo *)0x0);
    fVar1 = (this->fields)._rotation3D.x;
    fVar2 = (this->fields)._rotation3D.y;
    fVar3 = (this->fields)._rotation3D.z;
    fVar4 = (this->fields)._rotation3D.w;
    fVar6 = pQVar5->y;
    fVar7 = pQVar5->z;
    fVar8 = pQVar5->w;
    quat.y = (fVar6 * fVar4 + fVar2 * fVar8 + fVar7 * fVar1) - fVar3 * pQVar5->x;
    quat.x = (fVar4 * pQVar5->x + fVar1 * fVar8 + fVar3 * fVar6) - fVar2 * fVar7;
    quat.z = (fVar7 * fVar4 + fVar3 * fVar8 + fVar2 * pQVar5->x) -
             fVar6 * (this->fields)._rotation3D.x;
    quat.w = ((fVar4 * fVar8 - pQVar5->x * (this->fields)._rotation3D.x) - fVar2 * fVar6) -
             fVar7 * fVar3;
    pQVar5 = QuaternionEx::QuaternionEx_Normalize
                       ((Quaternion *)&stack0xffffffc0,quat,(MethodInfo *)0x0);
    fVar1 = pQVar5->x;
    fVar2 = pQVar5->y;
    fVar3 = pQVar5->z;
    fVar4 = pQVar5->w;
  }
  (this->fields)._localRotation3D.x = fVar1;
  (this->fields)._localRotation3D.y = fVar2;
  (this->fields)._localRotation3D.z = fVar3;
  (this->fields)._localRotation3D.w = fVar4;
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  (this->fields)._firingChanged3DEvent = 1;
  if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(((this->fields).Changed)->fields)._._.invoke_impl)();
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void Rotate2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate2D
               (GizmoTransform *this,float rotation,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent == 0) &&
     (fVar1 = (this->fields)._rotation2DDegrees, rotation_00 = fVar1 + rotation,
     fVar1 != rotation_00)) {
    GizmoTransform_ChangeRotation2D(this,rotation_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void Rotate2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate2D_1
               (GizmoTransform *this,Quaternion rotation,MethodInfo *method)

{
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(rotation,(MethodInfo *)0x0);
  if (((this->fields)._firingChanged2DEvent == 0) &&
     (fVar2 = (this->fields)._rotation2DDegrees, fVar1 = fVar2 + fVar1, fVar2 != fVar1)) {
    GizmoTransform_ChangeRotation2D(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Rotate3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate3D
               (GizmoTransform *this,Quaternion rotation,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation3D.x;
  fVar2 = (this->fields)._rotation3D.y;
  fVar3 = (this->fields)._rotation3D.z;
  fVar4 = (this->fields)._rotation3D.w;
  value.y = (rotation.y * fVar4 + rotation.w * fVar2 + rotation.z * (this->fields)._rotation3D.x) -
            rotation.x * fVar3;
  value.x = (rotation.w * fVar1 + rotation.x * fVar4 + rotation.y * fVar3) - rotation.z * fVar2;
  value.z = (rotation.z * fVar4 + rotation.w * fVar3 + rotation.x * fVar2) -
            rotation.y * (this->fields)._rotation3D.x;
  value.w = ((rotation.w * fVar4 - rotation.x * fVar1) - rotation.y * fVar2) - rotation.z * fVar3;
  GizmoTransform_set_Rotation3D(this,value,(MethodInfo *)0x0);
  return;
}


/* Void SetParent(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_SetParent
               (GizmoTransform *this,GizmoTransform *newParent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                   );
    cRam_? = '\x01';
  }
  if (((this->fields)._firingChanged3DEvent == 0) && ((this->fields)._parent != newParent)) {
    pGVar1 = (this->fields)._parent;
    if (pGVar1 != (GizmoTransform *)0x0) {
      pLVar2 = (pGVar1->fields)._children;
      if (pLVar2 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)pLVar2,(Object *)this,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    (this->fields)._parent = newParent;
    func_?(&(this->fields)._parent,newParent);
    pGVar1 = (this->fields)._parent;
    if ((pGVar1 == (GizmoTransform *)0x0) ||
       (pLVar2 = (pGVar1->fields)._children, pLVar2 == (List_1_RTG_GizmoTransform_ *)0x0)) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar2,(Object *)this,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
              );
    GizmoTransform_OnParentChanged(this,(MethodInfo *)0x0);
  }
  return;
}


/* Vector2 TransformNormal2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformNormal2D
                  (GizmoTransform *this,Vector2 normal,MethodInfo *method)

{
  point.z = 0.0;
  point._0_8_ = normal;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&puStack_2,(this->fields)._rotation2D,point,(MethodInfo *)0x0);
  stack0xfffffff4 = (float)&VStack_3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_3,*pVVar1,(MethodInfo *)0x0);
  VVar4.x = pVVar1->x;
  VVar4.y = pVVar1->y;
  return VVar4;
}


/* Vector3 TransformNormal3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformNormal3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 normal,
                    MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&normal,(this->fields)._rotation3D,normal,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  normal.x = (float)&normal;
  normal.y = (float)uVar2;
  normal.z = (float)uVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)normal.x,*pVVar1,(MethodInfo *)0x0);
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 TransformPoint2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformPoint2D
                  (GizmoTransform *this,Vector2 point,MethodInfo *method)

{
  uStack_1 = 0;
  point_00.z = 0.0;
  point_00._0_8_ = point;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,(this->fields)._rotation2D,point_00,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  VVar6.y = (float)uVar5 + (this->fields)._position2D.y;
  VVar6.x = (float)uVar4 + (this->fields)._position2D.x;
  return VVar6;
}


/* Vector3 TransformPoint3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformPoint3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 point,
                    MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&point,(this->fields)._rotation3D,point,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  uVar5 = (this->fields)._position3D.x;
  uVar6 = (this->fields)._position3D.y;
  fVar7 = (this->fields)._position3D.z;
  __return_storage_ptr__->x = (float)uVar2 + (float)uVar5;
  __return_storage_ptr__->y = (float)uVar3 + (float)uVar6;
  __return_storage_ptr__->z = fVar7 + fVar4;
  return __return_storage_ptr__;
}


/* Vector2 TransformVector2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformVector2D
                  (GizmoTransform *this,Vector2 vec,MethodInfo *method)

{
  uStack_1 = 0;
  point.z = 0.0;
  point._0_8_ = vec;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,(this->fields)._rotation2D,point,(MethodInfo *)0x0);
  VVar4.x = pVVar2->x;
  VVar4.y = pVVar2->y;
  return VVar4;
}


/* Vector3 TransformVector3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformVector3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 vec,
                    MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&vec,(this->fields)._rotation3D,vec,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void Update2DAxes() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Update2DAxes
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->zeroVector).x;
  uVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  fVar5 = (this->fields)._rotation2D.x;
  VStack_6.x = (this->fields)._rotation2D.y;
  VStack_6.y = (this->fields)._rotation2D.z;
  VStack_6.z = (this->fields)._rotation2D.w;
  fStack_7 = (float)uVar2;
  uStack_8 = uVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pos.y = (float)uStack_8;
  pos.x = fStack_7;
  pos.z = fVar4;
  q.y = VStack_6.x;
  q.x = fVar5;
  q.z = VStack_6.y;
  q.w = VStack_6.z;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff60,pos,q,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  pVVar10 = (this->fields)._axes2D;
  uVar11 = pMVar9->m10;
  uVar12 = pMVar9->m20;
  uVar13 = pMVar9->m30;
  auVar14._8_4_ = uVar13;
  auVar14._4_4_ = uVar12;
  auVar14._0_4_ = uVar11;
  fVar4 = pMVar9->m01;
  fVar5 = pMVar9->m11;
  fVar15 = pMVar9->m21;
  fVar16 = pMVar9->m02;
  fVar17 = pMVar9->m12;
  fVar18 = pMVar9->m22;
  fVar19 = pMVar9->m32;
  pVVar20 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis(&VStack_6,*pMVar9,0,(MethodInfo *)0x0);
  uVar21 = pVVar20->x;
  uVar22 = pVVar20->y;
  fStack_23 = (float)uVar21;
  fStack_7 = (float)uVar22;
  if (pVVar10 != (Vector2__Array *)0x0) {
    if (pVVar10->max_length == 0) goto code_?;
    pVVar10->vector[0].x = (float)uVar21;
    pVVar10->vector[0].y = (float)uVar22;
    pVVar10 = (this->fields)._axes2D;
    auVar14._12_4_ = fVar4;
    auVar14._16_4_ = fVar5;
    auVar14._20_4_ = fVar15;
    auVar14._24_4_ = 0;
    auVar14 = auVar14 << 0x20;
    matrix.m31 = 1.4013e-45;
    matrix.m00 = (float)auVar14._0_4_;
    matrix.m10 = (float)auVar14._4_4_;
    matrix.m20 = (float)auVar14._8_4_;
    matrix.m30 = (float)auVar14._12_4_;
    matrix.m01 = (float)auVar14._16_4_;
    matrix.m11 = (float)auVar14._20_4_;
    matrix.m21 = (float)auVar14._24_4_;
    matrix.m02 = fVar16;
    matrix.m12 = fVar17;
    matrix.m22 = fVar18;
    matrix.m32 = fVar19;
    matrix.m03 = fVar5;
    matrix.m13 = fVar15;
    matrix.m23 = 1.4013e-45;
    matrix.m33 = fVar16;
    pVVar20 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis(&VStack_6,matrix,1,(MethodInfo *)0x0);
    uVar24 = pVVar20->x;
    uVar25 = pVVar20->y;
    fStack_23 = (float)uVar24;
    fStack_7 = (float)uVar25;
    if (pVVar10 != (Vector2__Array *)0x0) {
      if (1 < pVVar10->max_length) {
        pVVar10->vector[1].x = (float)uVar24;
        pVVar10->vector[1].y = (float)uVar25;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Update3DAxes() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Update3DAxes
               (GizmoTransform *this,MethodInfo *method)

{
  auVar1._0_20_ = in_stack_2._0_20_;
  auVar1._20_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->zeroVector).x;
  uVar5 = (pVVar3->zeroVector).y;
  auVar6._16_4_ = uVar5;
  auVar6._12_4_ = uVar4;
  fVar7 = (pVVar3->zeroVector).z;
  auVar6._20_4_ = auVar1._20_4_;
  auVar6._0_12_ = auVar1._0_12_;
  fVar8 = (this->fields)._rotation3D.x;
  fVar9 = (this->fields)._rotation3D.y;
  uVar10 = (this->fields)._rotation3D.z;
  uVar11 = (this->fields)._rotation3D.w;
  auVar12._4_4_ = uVar11;
  auVar12._0_4_ = uVar10;
  auVar12._8_16_ = auVar6._8_16_;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pos.z = fVar7;
  pos.x = (float)auVar12._12_8_;
  pos.y = SUB84(auVar12._12_8_,4);
  q.y = fVar9;
  q.x = fVar8;
  q.z = (float)auVar12._0_4_;
  q.w = auVar12._4_4_;
  pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff70,pos,q,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  pVVar14 = (this->fields)._axes3D;
  fVar7 = pMVar13->m00;
  fVar8 = pMVar13->m10;
  fVar9 = pMVar13->m20;
  fVar15 = pMVar13->m30;
  fVar16 = pMVar13->m01;
  method = (MethodInfo *)pMVar13->m11;
  fVar17 = pMVar13->m21;
  fVar18 = pMVar13->m31;
  fVar19 = pMVar13->m32;
  fVar20 = pMVar13->m13;
  uVar21 = pMVar13->m23;
  uVar22 = pMVar13->m33;
  auVar23._4_4_ = uVar22;
  auVar23._0_4_ = uVar21;
  auVar23._8_16_ = auVar12._8_16_;
  pVVar24 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis
                      ((Vector3 *)&stack0xfffffff0,*pMVar13,0,(MethodInfo *)0x0);
  if (pVVar14 != (Vector3__Array *)0x0) {
    fVar25 = pVVar24->y;
    fVar26 = pVVar24->z;
    if (pVVar14->max_length == 0) goto code_?;
    pVVar14->vector[0].x = pVVar24->x;
    pVVar14->vector[0].y = fVar25;
    uVar27 = 0;
    uVar28 = 1;
    pVVar14->vector[0].z = fVar26;
    pVVar14 = (this->fields)._axes3D;
    uVar29 = auVar23._0_4_;
    fVar26 = auVar23._4_4_;
    uVar30 = 0;
    MVar31.m10 = fVar8;
    MVar31.m00 = fVar7;
    MVar31.m20 = fVar9;
    MVar31.m30 = fVar15;
    MVar31.m01 = fVar16;
    MVar31.m11 = (float)method;
    MVar31.m21 = fVar17;
    MVar31.m31 = fVar18;
    MVar31.m02 = (float)method;
    MVar31.m12 = fVar17;
    MVar31.m22 = fVar18;
    MVar31.m32 = fVar19;
    MVar31.m03 = 0.0;
    MVar31.m13 = fVar20;
    MVar31.m23 = (float)uVar29;
    MVar31.m33 = fVar26;
    fVar7 = (float)method;
    fVar8 = fVar17;
    fVar9 = fVar18;
    fVar15 = fVar20;
    pVVar24 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis
                        ((Vector3 *)&stack0xfffffff0,MVar31,1,(MethodInfo *)0x0);
    if (pVVar14 != (Vector3__Array *)0x0) {
      fVar25 = pVVar24->y;
      fVar16 = pVVar24->z;
      if (pVVar14->max_length < 2) goto code_?;
      pVVar14->vector[1].x = pVVar24->x;
      pVVar14->vector[1].y = fVar25;
      pVVar14->vector[1].z = fVar16;
      pVVar14 = (this->fields)._axes3D;
      fVar32 = (float)uVar29;
      fVar33 = fVar20;
      uVar34 = CONCAT44(fVar32,fVar33);
      fVar35 = fVar26;
      auVar36 = CONCAT48(fVar35,uVar34);
      fVar37 = (float)uVar28;
      auVar38 = CONCAT412(fVar37,auVar36);
      fVar39 = fVar8;
      auVar40 = CONCAT416(fVar39,auVar38);
      fVar41 = fVar9;
      auVar42 = CONCAT420(fVar41,auVar40);
      this = (GizmoTransform *)uVar30;
      fVar43 = fVar19;
      fStack44 = fVar17;
      fStack45 = fVar18;
      fStack46 = fVar7;
      auVar47._24_4_ = uVar27;
      fStack48 = fVar15;
      fStack49 = fVar20;
      fStack50 = (float)uVar29;
      MVar31 = (Matrix4x4)CONCAT4024(auVar51,auVar42);
      pVVar24 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis
                          ((Vector3 *)&stack0xfffffff0,MVar31,2,(MethodInfo *)0x0);
      if (pVVar14 != (Vector3__Array *)0x0) {
        fVar8 = pVVar24->y;
        fVar7 = pVVar24->z;
        if (2 < pVVar14->max_length) {
          pVVar14->vector[2].x = pVVar24->x;
          pVVar14->vector[2].y = fVar8;
          pVVar14->vector[2].z = fVar7;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar52 = (code *)swi(3);
  (*pcVar52)();
  return;
}


/* Void UpdateChildTransforms2D() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_UpdateChildTransforms2D
               (GizmoTransform *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff00;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff00;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._children;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                       );
    uStack_11 = 0;
    LStack_8._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_8._index = pLVar9->_index;
    LStack_8._version = pLVar9->_version;
    LStack_8._current = *(Object **)&pLVar9->_current;
    uStack_2 = 1;
    pLStack_12 = &LStack_8;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                        );
      this_01 = LStack_8._current;
      if (bVar13 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                   ,in_stack_14);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      point.z = 0.0;
      point._0_8_ = *(ulonglong *)((int)LStack_8._current + 0x50);
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&puStack_16,(this->fields)._rotation2D,point,(MethodInfo *)0x0)
      ;
      uStack_17._0_4_ = pVVar15->x;
      uStack_17._4_4_ = pVVar15->y;
      fVar18 = (this->fields)._position2D.x;
      if ((RegexCharClass_SingleRange)this_01 == (RegexCharClass_SingleRange)0x0) break;
      fStack_19 = *(float *)((int)this_01 + 0x74);
      fStack_20 = *(float *)((int)this_01 + 0x78);
      fStack_21 = *(float *)((int)this_01 + 0x7c);
      *(float *)((int)this_01 + 0x4c) = (float)uStack_17._4_4_ + (this->fields)._position2D.y;
      *(float *)((int)this_01 + 0x48) = (float)(undefined4)uStack_17 + fVar18;
      fVar18 = (this->fields)._rotation2D.y;
      LStack_10._list =
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._rotation2D.z;
      fVar22 = (this->fields)._rotation2D.w;
      fStack_23 = ((fStack_21 * fVar22 -
                   (this->fields)._rotation2D.x * *(float *)((int)this_01 + 0x70)) -
                  fStack_19 * fVar18) - (float)LStack_10._list * fStack_20;
      uStack_24 = CONCAT44(fStack_23,(undefined4)uStack_24);
      fStack_25 = ((float)LStack_10._list * fStack_21 + fStack_20 * fVar22 +
                  fStack_19 * (this->fields)._rotation2D.x) -
                  fVar18 * *(float *)((int)this_01 + 0x70);
      fStack_26 = (fVar18 * fStack_21 + fStack_19 * fVar22 +
                  (float)LStack_10._list * *(float *)((int)this_01 + 0x70)) -
                  fStack_20 * (this->fields)._rotation2D.x;
      fStack_27 = (fStack_21 * (this->fields)._rotation2D.x +
                   *(float *)((int)this_01 + 0x70) * fVar22 + fStack_20 * fVar18) -
                  fStack_19 * (float)LStack_10._list;
      QVar28.y = fStack_26;
      QVar28.x = fStack_27;
      QVar28.z = fStack_25;
      QVar28.w = fStack_23;
      LStack_10._index = (int32_t)LStack_10._list;
      LStack_10._version = (int32_t)LStack_10._list;
      LStack_10._current = (RegexCharClass_SingleRange)LStack_10._list;
      fStack_29 = fStack_21;
      fStack_30 = fStack_21;
      fStack_31 = fStack_21;
      fStack_32 = fStack_20;
      fStack_33 = fStack_20;
      fStack_34 = fStack_20;
      fStack_35 = fStack_19;
      fStack_36 = fStack_19;
      fStack_37 = fStack_19;
      pQVar38 = QuaternionEx::QuaternionEx_Normalize
                          ((Quaternion *)&stack0xffffff10,QVar28,(MethodInfo *)0x0);
      fVar18 = pQVar38->y;
      fVar22 = pQVar38->z;
      fVar39 = pQVar38->w;
      QVar28 = *pQVar38;
      *(float *)((int)this_01 + 0x5c) = pQVar38->x;
      *(float *)((int)this_01 + 0x60) = fVar18;
      *(float *)((int)this_01 + 100) = fVar22;
      *(float *)((int)this_01 + 0x68) = fVar39;
      fVar18 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(QVar28,(MethodInfo *)0x0);
      uStack_24 = CONCAT44(fVar18,(undefined4)uStack_24);
      *(float *)((int)this_01 + 0x58) = fVar18;
      GizmoTransform_Update2DAxes((GizmoTransform *)this_01,(MethodInfo *)0x0);
      GizmoTransform_UpdateChildTransforms2D((GizmoTransform *)this_01,(MethodInfo *)0x0);
      uStack_24 = 0;
      *(undefined1 *)((int)this_01 + 0xd) = 1;
      if (*(int *)((int)this_01 + 8) != 0) {
        (**(code **)(*(int *)((int)this_01 + 8) + 0xc))();
      }
      *(undefined1 *)((int)this_01 + 0xd) = 0;
    }
  }
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void UpdateChildTransforms3D() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_UpdateChildTransforms3D
               (GizmoTransform *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff00;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff00;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._children;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                       );
    uStack_11 = 0;
    LStack_8._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_8._index = pLVar9->_index;
    LStack_8._version = pLVar9->_version;
    LStack_8._current = *(Object **)&pLVar9->_current;
    uStack_2 = 1;
    pLStack_12 = &LStack_8;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                        );
      this_01 = LStack_8._current;
      if (bVar13 == 0) {
        uStack_2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                   ,in_stack_14);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_16,(this->fields)._rotation3D,
                          *(Vector3 *)((int)LStack_8._current + 0x1c),(MethodInfo *)0x0);
      uStack_17._0_4_ = pVVar15->x;
      uStack_17._4_4_ = pVVar15->y;
      fStack_18 = pVVar15->z;
      uStack_19._0_4_ = (this->fields)._position3D.x;
      uStack_19._4_4_ = (this->fields)._position3D.y;
      fStack_20 = (this->fields)._position3D.z;
      fStack_21 = (float)uStack_19._4_4_ + (float)uStack_17._4_4_;
      fStack_22 = (float)(undefined4)uStack_19 + (float)(undefined4)uStack_17;
      fStack_23 = fStack_20 + fStack_18;
      if ((RegexCharClass_SingleRange)this_01 == (RegexCharClass_SingleRange)0x0) break;
      fStack_24 = *(float *)((int)this_01 + 0x3c);
      fStack_25 = *(float *)((int)this_01 + 0x40);
      fStack_26 = *(float *)((int)this_01 + 0x44);
      *(ulonglong *)((int)this_01 + 0x10) = CONCAT44(fStack_21,fStack_22);
      *(float *)((int)this_01 + 0x18) = fStack_23;
      fVar27 = (this->fields)._rotation3D.y;
      LStack_10._list =
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._rotation3D.z;
      fVar28 = (this->fields)._rotation3D.w;
      fStack_29 = ((fStack_26 * fVar28 -
                   (this->fields)._rotation3D.x * *(float *)((int)this_01 + 0x38)) -
                  fStack_24 * fVar27) - (float)LStack_10._list * fStack_25;
      uStack_30 = CONCAT44(fStack_29,(undefined4)uStack_30);
      fStack_31 = ((float)LStack_10._list * fStack_26 + fStack_25 * fVar28 +
                  fStack_24 * (this->fields)._rotation3D.x) -
                  fVar27 * *(float *)((int)this_01 + 0x38);
      fStack_32 = (fVar27 * fStack_26 + fStack_24 * fVar28 +
                  (float)LStack_10._list * *(float *)((int)this_01 + 0x38)) -
                  fStack_25 * (this->fields)._rotation3D.x;
      fStack_33 = (fStack_26 * (this->fields)._rotation3D.x +
                   *(float *)((int)this_01 + 0x38) * fVar28 + fStack_25 * fVar27) -
                  fStack_24 * (float)LStack_10._list;
      quat.y = fStack_32;
      quat.x = fStack_33;
      quat.z = fStack_31;
      quat.w = fStack_29;
      LStack_10._index = (int32_t)LStack_10._list;
      LStack_10._version = (int32_t)LStack_10._list;
      LStack_10._current = (RegexCharClass_SingleRange)LStack_10._list;
      fStack_34 = fStack_26;
      fStack_35 = fStack_26;
      fStack_36 = fStack_26;
      fStack_37 = fStack_25;
      fStack_38 = fStack_25;
      fStack_39 = fStack_25;
      fStack_40 = fStack_24;
      fStack_41 = fStack_24;
      fStack_42 = fStack_24;
      pQVar43 = QuaternionEx::QuaternionEx_Normalize
                          ((Quaternion *)&stack0xffffff10,quat,(MethodInfo *)0x0);
      fVar27 = pQVar43->y;
      fVar28 = pQVar43->z;
      fVar44 = pQVar43->w;
      *(float *)((int)this_01 + 0x28) = pQVar43->x;
      *(float *)((int)this_01 + 0x2c) = fVar27;
      *(float *)((int)this_01 + 0x30) = fVar28;
      *(float *)((int)this_01 + 0x34) = fVar44;
      GizmoTransform_Update3DAxes((GizmoTransform *)this_01,(MethodInfo *)0x0);
      GizmoTransform_UpdateChildTransforms3D((GizmoTransform *)this_01,(MethodInfo *)0x0);
      *(undefined1 *)((int)this_01 + 0xc) = 1;
      uStack_30 = 0;
      if (*(int *)((int)this_01 + 8) != 0) {
        VStack_16.y = *(float *)(*(int *)((int)this_01 + 8) + 0x14);
        VStack_16.x = 2.8026e-45;
        (**(code **)(*(int *)((int)this_01 + 8) + 0xc))();
      }
      *(undefined1 *)((int)this_01 + 0xc) = 0;
    }
  }
  func_?();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* GizmoTransform() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform__ctor
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._rotation3D.x = (pQVar1->identityQuaternion).x;
  (this->fields)._rotation3D.y = fVar2;
  (this->fields)._rotation3D.z = fVar3;
  (this->fields)._rotation3D.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._localRotation3D.x = (pQVar1->identityQuaternion).x;
  (this->fields)._localRotation3D.y = fVar2;
  (this->fields)._localRotation3D.z = fVar3;
  (this->fields)._localRotation3D.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._rotation2D.x = (pQVar1->identityQuaternion).x;
  (this->fields)._rotation2D.y = fVar2;
  (this->fields)._rotation2D.z = fVar3;
  (this->fields)._rotation2D.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._localRotation2D.x = (pQVar1->identityQuaternion).x;
  (this->fields)._localRotation2D.y = fVar2;
  (this->fields)._localRotation2D.z = fVar3;
  (this->fields)._localRotation2D.w = fVar4;
  pVVar5 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  (this->fields)._axes3D = pVVar5;
  func_?(&(this->fields)._axes3D,pVVar5);
  pVVar6 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,2);
  (this->fields)._axes2D = pVVar6;
  func_?(&(this->fields)._axes2D,pVVar6);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,10,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_);
  method_00 = (MethodInfo *)&(this->fields)._children;
  (this->fields)._children = (List_1_RTG_GizmoTransform_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  return;
}


/* Void add_Changed(GizmoEntityTransformChangedHandler) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_add_Changed
               (GizmoTransform *this,GizmoEntityTransformChangedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).Changed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoEntityTransformChangedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoEntityTransformChangedHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Boolean get_CanChange2D() */

bool Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_CanChange2D
               (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._firingChanged2DEvent == 0;
}


/* List`1[RTG.GizmoTransform] get_Children() */

List_1_RTG_GizmoTransform_ *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Children
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_System__Collections__Generic__IEnumerable<RTG::GizmoTransform>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._children;
  this_00 = (List_1_RTG_GizmoTransform_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_System__Collections__Generic__IEnumerable<RTG::GizmoTransform>_
            );
  return this_00;
}


/* Vector2 get_LocalPosition2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_LocalPosition2D
                  (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._localPosition2D;
}


/* Vector3 get_Look3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Look3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._axes3D;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (2 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[2].y;
    fVar8 = pVVar2->vector[2].z;
    __return_storage_ptr__->x = pVVar2->vector[2].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Int32 get_NumChildren() */

int32_t Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_NumChildren
                  (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._children;
  if (pLVar2 != (List_1_RTG_GizmoTransform_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Vector2 get_Position2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Position2D
                  (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._position2D;
}


/* Vector2 get_Right2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Right2D
                  (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if (pVVar1->max_length != 0) {
    return pVVar1->vector[0];
  }
  func_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Vector3 get_Right3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Right3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._axes3D;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (pVVar2->max_length != 0) {
    fVar7 = pVVar2->vector[0].y;
    fVar8 = pVVar2->vector[0].z;
    __return_storage_ptr__->x = pVVar2->vector[0].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Quaternion get_Rotation2D() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Rotation2D
          (Quaternion *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation2D.y;
  fVar2 = (this->fields)._rotation2D.z;
  fVar3 = (this->fields)._rotation2D.w;
  __return_storage_ptr__->x = (this->fields)._rotation2D.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector2 get_Up2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Up2D
                  (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if (1 < pVVar1->max_length) {
    return pVVar1->vector[1];
  }
  func_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Vector3 get_Up3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Up3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields)._axes3D;
  if (pVVar2 == (Vector3__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (1 < pVVar2->max_length) {
    fVar7 = pVVar2->vector[1].y;
    fVar8 = pVVar2->vector[1].z;
    __return_storage_ptr__->x = pVVar2->vector[1].x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_9 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Void remove_Changed(GizmoEntityTransformChangedHandler) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_remove_Changed
               (GizmoTransform *this,GizmoEntityTransformChangedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).Changed;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoEntityTransformChangedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoEntityTransformChangedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoEntityTransformChangedHandler *)func_?(&this->fields,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_LocalPosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalPosition2D
               (GizmoTransform *this,Vector2 value,MethodInfo *method)

{
  if ((this->fields)._firingChanged2DEvent == 0) {
    fVar1 = (this->fields)._localPosition2D.x - value.x;
    fVar2 = (this->fields)._localPosition2D.y - value.y;
    bVar3 = fVar2 * fVar2 + fVar1 * fVar1 < _UNK_?;
    puStack_4 = (undefined *)(uint)bVar3;
    if (puStack_4 == (undefined *)0x0) {
      (this->fields)._localPosition2D.x = value.x;
      (this->fields)._localPosition2D.y = value.y;
      if ((this->fields)._parent != (GizmoTransform *)0x0) {
        point.z._0_1_ = bVar3;
        point._0_8_ = value;
        point.z._1_3_ = 0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           (&VStack_6,(((this->fields)._parent)->fields)._rotation2D,point,
                            (MethodInfo *)0x0);
        uVar7 = pVVar5->x;
        uVar8 = pVVar5->y;
        pGVar9 = (this->fields)._parent;
        fStack_10 = (float)uVar7;
        puStack_11 = (undefined *)uVar8;
        if (pGVar9 == (GizmoTransform *)0x0) {
          func_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        value.x = (pGVar9->fields)._position2D.x + (float)uVar7;
        value.y = (pGVar9->fields)._position2D.y + (float)uVar8;
      }
      (this->fields)._position2D.x = value.x;
      (this->fields)._position2D.y = value.y;
      GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
      (this->fields)._firingChanged2DEvent = 1;
      if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
        pGVar13 = (this->fields).Changed;
        puStack_4 = (pGVar13->fields)._._.method_code;
        (*(pGVar13->fields)._._.invoke_impl)();
      }
      (this->fields)._firingChanged2DEvent = 0;
    }
  }
  return;
}


/* Void set_LocalPosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalPosition3D
               (GizmoTransform *this,Vector3 value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    uVar1 = (this->fields)._localPosition3D.x;
    uVar2 = (this->fields)._localPosition3D.y;
    VStack_3.z = (this->fields)._localPosition3D.z;
    if (_UNK_? <=
        ((float)uVar2 - value.y) * ((float)uVar2 - value.y) +
        ((float)uVar1 - value.x) * ((float)uVar1 - value.x) +
        (VStack_3.z - value.z) * (VStack_3.z - value.z)) {
      uVar4 = value._0_8_;
      (this->fields)._localPosition3D.x = (float)(int)uVar4;
      (this->fields)._localPosition3D.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      (this->fields)._localPosition3D.z = value.z;
      VStack_3.x = (float)uVar1;
      VStack_3.y = (float)uVar2;
      if ((this->fields)._parent == (GizmoTransform *)0x0) {
        (this->fields)._position3D.x = (float)(int)uVar4;
        (this->fields)._position3D.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        (this->fields)._position3D.z = value.z;
      }
      else {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            (&VStack_3,(((this->fields)._parent)->fields)._rotation3D,value,
                             (MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        fVar8 = pVVar5->z;
        pGVar9 = (this->fields)._parent;
        if (pGVar9 == (GizmoTransform *)0x0) {
          func_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar11 = (pGVar9->fields)._position3D.x;
        uVar12 = (pGVar9->fields)._position3D.y;
        fVar13 = (pGVar9->fields)._position3D.z;
        (this->fields)._position3D.x = (float)uVar11 + (float)uVar6;
        (this->fields)._position3D.y = (float)uVar12 + (float)uVar7;
        (this->fields)._position3D.z = fVar13 + fVar8;
        VStack_3.x = (float)uVar11;
        VStack_3.y = (float)uVar12;
      }
      VStack_3.z = (float)&UNK_?;
      GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
      (this->fields)._firingChanged3DEvent = 1;
      if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
        pGVar14 = (this->fields).Changed;
        VStack_3.z = (float)(pGVar14->fields)._._.method_code;
        VStack_3.y = (float)&UNK_?;
        (*(pGVar14->fields)._._.invoke_impl)();
      }
      (this->fields)._firingChanged3DEvent = 0;
    }
  }
  return;
}


/* Void set_LocalRotation2DDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalRotation2DDegrees
               (GizmoTransform *this,float value,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent == 0) &&
     ((this->fields)._localRotation2DDegrees != value)) {
    (this->fields)._localRotation2DDegrees = value;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffec,value,
                        TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                        (MethodInfo *)0x0);
    pQVar1 = QuaternionEx::QuaternionEx_Normalize
                       ((Quaternion *)&stack0xffffffec,*pQVar1,(MethodInfo *)0x0);
    fVar2 = pQVar1->y;
    fVar3 = pQVar1->z;
    fVar4 = pQVar1->w;
    (this->fields)._localRotation2D.x = pQVar1->x;
    (this->fields)._localRotation2D.y = fVar2;
    (this->fields)._localRotation2D.z = fVar3;
    (this->fields)._localRotation2D.w = fVar4;
    GizmoTransform_OnLocalRotation2DChanged(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_LocalRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalRotation3D
               (GizmoTransform *this,Quaternion value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    puVar1 = (undefined8 *)func_?(&uStack_2,&(this->fields)._localRotation3D,0);
    uStack_3 = *puVar1;
    fStack_4 = *(float *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(&QStack_5.y,&value,0);
    uVar6 = *puVar1;
    fStack_7 = *(float *)(puVar1 + 1);
    uStack_2._0_4_ = (float)uVar6;
    uStack_2._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    if (_UNK_? <=
        (uStack_3._4_4_ - uStack_2._4_4_) * (uStack_3._4_4_ - uStack_2._4_4_) +
        ((float)uStack_3 - (float)uStack_2) * ((float)uStack_3 - (float)uStack_2) +
        (fStack_4 - fStack_7) * (fStack_4 - fStack_7)) {
      quat.y = value.y;
      quat.x = value.x;
      quat.z = value.z;
      quat.w = value.w;
      uStack_2 = uVar6;
      pQVar8 = QuaternionEx::QuaternionEx_Normalize(&QStack_5,quat,(MethodInfo *)0x0);
      fVar9 = pQVar8->y;
      fVar10 = pQVar8->z;
      fVar11 = pQVar8->w;
      (this->fields)._localRotation3D.x = pQVar8->x;
      (this->fields)._localRotation3D.y = fVar9;
      (this->fields)._localRotation3D.z = fVar10;
      (this->fields)._localRotation3D.w = fVar11;
      GizmoTransform_OnLocalRotation3DChanged(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_Position2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Position2D
               (GizmoTransform *this,Vector2 value,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent == 0) &&
     (fVar1 = (this->fields)._position2D.x - value.x, fVar2 = (this->fields)._position2D.y - value.y
     , _UNK_? <= fVar2 * fVar2 + fVar1 * fVar1)) {
    (this->fields)._position2D.x = value.x;
    (this->fields)._position2D.y = value.y;
    fVar2 = value.y;
    fVar1 = value.x;
    if ((this->fields)._parent != (GizmoTransform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                         ((Quaternion *)&stack0xffffffe0,
                          (((this->fields)._parent)->fields)._rotation2D,(MethodInfo *)0x0);
      pGVar4 = (this->fields)._parent;
      if (pGVar4 == (GizmoTransform *)0x0) {
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      point.y = (this->fields)._position2D.y - (pGVar4->fields)._position2D.y;
      point.x = (this->fields)._position2D.x - (pGVar4->fields)._position2D.x;
      point.z = 0.0;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffe4,*pQVar3,point,(MethodInfo *)0x0);
      fVar1 = pVVar6->x;
      fVar2 = pVVar6->y;
    }
    (this->fields)._localPosition2D.x = fVar1;
    (this->fields)._localPosition2D.y = fVar2;
    GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
    (this->fields)._firingChanged2DEvent = 1;
    if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
      pGVar7 = (this->fields).Changed;
      pvStack8 = (pGVar7->fields)._._.method;
      uStack9 = 1;
      (*(pGVar7->fields)._._.invoke_impl)();
    }
    (this->fields)._firingChanged2DEvent = 0;
  }
  return;
}


/* Void set_Position3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Position3D
               (GizmoTransform *this,Vector3 value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    uVar1 = (this->fields)._position3D.x;
    uVar2 = (this->fields)._position3D.y;
    fVar3 = (this->fields)._position3D.z - value.z;
    if (_UNK_? <=
        ((float)uVar2 - value.y) * ((float)uVar2 - value.y) +
        ((float)uVar1 - value.x) * ((float)uVar1 - value.x) + fVar3 * fVar3) {
      pGVar4 = (this->fields)._parent;
      uVar5 = value._0_8_;
      (this->fields)._position3D.x = (float)(int)uVar5;
      (this->fields)._position3D.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->fields)._position3D.z = value.z;
      if (pGVar4 != (GizmoTransform *)0x0) {
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                            ((Quaternion *)&stack0xffffffd4,
                             (((this->fields)._parent)->fields)._rotation3D,(MethodInfo *)0x0);
        uVar7 = (this->fields)._position3D.x;
        uVar8 = (this->fields)._position3D.y;
        pGVar4 = (this->fields)._parent;
        if (pGVar4 == (GizmoTransform *)0x0) {
          func_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar10 = (pGVar4->fields)._position3D.x;
        uVar11 = (pGVar4->fields)._position3D.y;
        point.y = (float)uVar8 - (float)uVar11;
        point.x = (float)uVar7 - (float)uVar10;
        point.z = (this->fields)._position3D.z - (pGVar4->fields)._position3D.z;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffffe4,*pQVar6,point,(MethodInfo *)0x0);
        uVar5._0_4_ = pVVar12->x;
        uVar5._4_4_ = pVVar12->y;
        value.z = pVVar12->z;
      }
      (this->fields)._localPosition3D.x = (float)(int)uVar5;
      (this->fields)._localPosition3D.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->fields)._localPosition3D.z = value.z;
      GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
      (this->fields)._firingChanged3DEvent = 1;
      if ((this->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(((this->fields).Changed)->fields)._._.invoke_impl)();
      }
      (this->fields)._firingChanged3DEvent = 0;
    }
  }
  return;
}


/* Void set_Rotation2DDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Rotation2DDegrees
               (GizmoTransform *this,float value,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent == 0) && ((this->fields)._rotation2DDegrees != value)) {
    GizmoTransform_ChangeRotation2D(this,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Rotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Rotation3D
               (GizmoTransform *this,Quaternion value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    puVar1 = (undefined8 *)func_?(&uStack_2,&(this->fields)._rotation3D,0);
    uStack_3 = *puVar1;
    fStack_4 = *(float *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(&QStack_5.y,&value,0);
    uVar6 = *puVar1;
    fStack_7 = *(float *)(puVar1 + 1);
    uStack_2._0_4_ = (float)uVar6;
    uStack_2._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    if (_UNK_? <=
        (uStack_3._4_4_ - uStack_2._4_4_) * (uStack_3._4_4_ - uStack_2._4_4_) +
        ((float)uStack_3 - (float)uStack_2) * ((float)uStack_3 - (float)uStack_2) +
        (fStack_4 - fStack_7) * (fStack_4 - fStack_7)) {
      quat.y = value.y;
      quat.x = value.x;
      quat.z = value.z;
      quat.w = value.w;
      uStack_2 = uVar6;
      pQVar8 = QuaternionEx::QuaternionEx_Normalize(&QStack_5,quat,(MethodInfo *)0x0);
      fVar9 = pQVar8->y;
      fVar10 = pQVar8->z;
      fVar11 = pQVar8->w;
      (this->fields)._rotation3D.x = pQVar8->x;
      (this->fields)._rotation3D.y = fVar9;
      (this->fields)._rotation3D.z = fVar10;
      (this->fields)._rotation3D.w = fVar11;
      GizmoTransform_OnRotation3DChanged(this,(MethodInfo *)0x0);
    }
  }
  return;
}


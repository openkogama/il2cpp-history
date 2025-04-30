
/* Void Apply() */

void Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::LocalGizmoTransformSnapshot_Apply
               (LocalGizmoTransformSnapshot *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 == (GizmoTransform *)0x0) {
    return;
  }
  if ((this->fields)._parentTransform == (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Position3D
              (pGVar1,(this->fields)._localPosition3D,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._transform;
    if (pGVar1 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Rotation3D
                (pGVar1,(this->fields)._localRotation3D,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._transform;
      fVar2 = (this->fields)._localPosition2D.x;
      fVar3 = (this->fields)._localPosition2D.y;
      if (pGVar1 != (GizmoTransform *)0x0) {
        if (((pGVar1->fields)._firingChanged2DEvent == 0) &&
           (fVar4 = (pGVar1->fields)._position2D.x - fVar2,
           fVar5 = (pGVar1->fields)._position2D.y - fVar3,
           _UNK_? <= fVar5 * fVar5 + fVar4 * fVar4)) {
          pGVar6 = (pGVar1->fields)._parent;
          (pGVar1->fields)._position2D.x = fVar2;
          (pGVar1->fields)._position2D.y = fVar3;
          if (pGVar6 == (GizmoTransform *)0x0) {
            VStack_7.y = fVar2;
            VStack_7.z = fVar3;
          }
          else {
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                                ((Quaternion *)&stack0xffffffb8,(pGVar6->fields)._rotation2D,
                                 (MethodInfo *)0x0);
            pGVar6 = (pGVar1->fields)._parent;
            if (pGVar6 == (GizmoTransform *)0x0) goto code_?;
            VVar9.y = (pGVar1->fields)._position2D.y - (pGVar6->fields)._position2D.y;
            VVar9.x = (pGVar1->fields)._position2D.x - (pGVar6->fields)._position2D.x;
            VVar9.z = 0.0;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                (&VStack_7,*pQVar8,VVar9,(MethodInfo *)0x0);
            uVar11 = pVVar10->x;
            uVar12 = pVVar10->y;
            VStack_7.y = (float)uVar11;
            VStack_7.z = (float)uVar12;
          }
          (pGVar1->fields)._localPosition2D.x = VStack_7.y;
          (pGVar1->fields)._localPosition2D.y = VStack_7.z;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar1,(MethodInfo *)0x0);
          pGVar13 = (pGVar1->fields).Changed;
          (pGVar1->fields)._firingChanged2DEvent = 1;
          if (pGVar13 != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(pGVar13->fields)._._.invoke_impl)();
          }
          (pGVar1->fields)._firingChanged2DEvent = 0;
        }
        pGVar1 = (this->fields)._transform;
        if (pGVar1 != (GizmoTransform *)0x0) {
          if ((pGVar1->fields)._firingChanged2DEvent != 0) {
            return;
          }
          fVar2 = (this->fields)._localRotation2D_Degrees;
          if ((pGVar1->fields)._rotation2DDegrees == fVar2) {
            return;
          }
          GizmoTransform::GizmoTransform_ChangeRotation2D(pGVar1,fVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pVVar10 = &(this->fields)._localPosition3D;
    uVar14 = pVVar10->x;
    uVar15 = pVVar10->y;
    fVar2 = (this->fields)._localPosition3D.z;
    VVar9 = *pVVar10;
    if ((pGVar1->fields)._firingChanged3DEvent == 0) {
      VStack_7.x = (pGVar1->fields)._localPosition3D.x;
      VStack_7.y = (pGVar1->fields)._localPosition3D.y;
      VStack_7.z = (pGVar1->fields)._localPosition3D.z;
      if (_UNK_? <=
          (VStack_7.y - (float)uVar15) * (VStack_7.y - (float)uVar15) +
          (VStack_7.x - (float)uVar14) * (VStack_7.x - (float)uVar14) +
          (VStack_7.z - fVar2) * (VStack_7.z - fVar2)) {
        pGVar6 = (pGVar1->fields)._parent;
        (pGVar1->fields)._localPosition3D.x = (float)uVar14;
        (pGVar1->fields)._localPosition3D.y = (float)uVar15;
        (pGVar1->fields)._localPosition3D.z = fVar2;
        if (pGVar6 == (GizmoTransform *)0x0) {
          (pGVar1->fields)._position3D.x = (float)uVar14;
          (pGVar1->fields)._position3D.y = (float)uVar15;
          (pGVar1->fields)._position3D.z = fVar2;
        }
        else {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffe4,(pGVar6->fields)._rotation3D,VVar9,
                               (MethodInfo *)0x0);
          VStack_7.x = pVVar10->x;
          VStack_7.y = pVVar10->y;
          VStack_7.z = pVVar10->z;
          pGVar6 = (pGVar1->fields)._parent;
          if (pGVar6 == (GizmoTransform *)0x0) goto code_?;
          uVar16 = (pGVar6->fields)._position3D.x;
          uVar17 = (pGVar6->fields)._position3D.y;
          fVar2 = (pGVar6->fields)._position3D.z;
          (pGVar1->fields)._position3D.x = (float)uVar16 + VStack_7.x;
          (pGVar1->fields)._position3D.y = (float)uVar17 + VStack_7.y;
          (pGVar1->fields)._position3D.z = fVar2 + VStack_7.z;
        }
        GizmoTransform::GizmoTransform_UpdateChildTransforms3D(pGVar1,(MethodInfo *)0x0);
        pGVar13 = (pGVar1->fields).Changed;
        (pGVar1->fields)._firingChanged3DEvent = 1;
        if (pGVar13 != (GizmoEntityTransformChangedHandler *)0x0) {
          (*(pGVar13->fields)._._.invoke_impl)();
        }
        (pGVar1->fields)._firingChanged3DEvent = 0;
      }
    }
    pGVar1 = (this->fields)._transform;
    if (pGVar1 != (GizmoTransform *)0x0) {
      if ((pGVar1->fields)._firingChanged3DEvent == 0) {
        pVVar10 = &VStack_7;
        puVar18 = (undefined8 *)func_?();
        fVar3 = 0.0;
        fVar2 = *(float *)(puVar18 + 1);
        puVar19 = &stack0xffffffc8;
        puVar20 = &stack0xffffffd8;
        fVar4 = (float)*puVar18;
        fVar5 = (float)((ulonglong)*puVar18 >> 0x20);
        puVar18 = (undefined8 *)func_?();
        VStack_7._0_8_ = *puVar18;
        VStack_7.z = *(float *)(puVar18 + 1);
        if (_UNK_? <=
            (fVar5 - VStack_7.y) * (fVar5 - VStack_7.y) +
            (fVar4 - VStack_7.x) * (fVar4 - VStack_7.x) +
            (fVar2 - VStack_7.z) * (fVar2 - VStack_7.z)) {
          quat.y = (float)puVar19;
          quat.x = (float)puVar20;
          quat.z = fVar3;
          quat.w = (float)pVVar10;
          pQVar8 = QuaternionEx::QuaternionEx_Normalize
                              ((Quaternion *)&stack0xffffffb8,quat,(MethodInfo *)0x0);
          fVar2 = pQVar8->y;
          fVar3 = pQVar8->z;
          fVar4 = pQVar8->w;
          (pGVar1->fields)._localRotation3D.x = pQVar8->x;
          (pGVar1->fields)._localRotation3D.y = fVar2;
          (pGVar1->fields)._localRotation3D.z = fVar3;
          (pGVar1->fields)._localRotation3D.w = fVar4;
          GizmoTransform::GizmoTransform_OnLocalRotation3DChanged(pGVar1,(MethodInfo *)0x0);
        }
      }
      pGVar1 = (this->fields)._transform;
      pVVar21 = &(this->fields)._localPosition2D;
      fVar2 = pVVar21->x;
      fVar3 = (this->fields)._localPosition2D.y;
      if (pGVar1 != (GizmoTransform *)0x0) {
        if (((pGVar1->fields)._firingChanged2DEvent == 0) &&
           (fVar5 = (pGVar1->fields)._localPosition2D.x - fVar2,
           fVar4 = (pGVar1->fields)._localPosition2D.y - fVar3,
           _UNK_? <= fVar4 * fVar4 + fVar5 * fVar5)) {
          pGVar6 = (pGVar1->fields)._parent;
          (pGVar1->fields)._localPosition2D.x = fVar2;
          (pGVar1->fields)._localPosition2D.y = fVar3;
          if (pGVar6 == (GizmoTransform *)0x0) {
            VStack_7.y = fVar2;
            VStack_7.z = fVar3;
          }
          else {
            point.z = 0.0;
            point.x = pVVar21->x;
            point.y = pVVar21->y;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffd8,(pGVar6->fields)._rotation2D,point,
                                 (MethodInfo *)0x0);
            uVar22 = pVVar10->x;
            uVar23 = pVVar10->y;
            pGVar6 = (pGVar1->fields)._parent;
            if (pGVar6 == (GizmoTransform *)0x0) goto code_?;
            VStack_7.y = (float)uVar22 + (pGVar6->fields)._position2D.x;
            VStack_7.z = (float)uVar23 + (pGVar6->fields)._position2D.y;
          }
          (pGVar1->fields)._position2D.x = VStack_7.y;
          (pGVar1->fields)._position2D.y = VStack_7.z;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar1,(MethodInfo *)0x0);
          pGVar13 = (pGVar1->fields).Changed;
          (pGVar1->fields)._firingChanged2DEvent = 1;
          if (pGVar13 != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(pGVar13->fields)._._.invoke_impl)();
          }
          (pGVar1->fields)._firingChanged2DEvent = 0;
        }
        pGVar1 = (this->fields)._transform;
        if (pGVar1 != (GizmoTransform *)0x0) {
          if ((pGVar1->fields)._firingChanged2DEvent != 0) {
            return;
          }
          fVar2 = (this->fields)._localRotation2D_Degrees;
          if ((pGVar1->fields)._localRotation2DDegrees == fVar2) {
            return;
          }
          (pGVar1->fields)._localRotation2DDegrees = fVar2;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                              ((Quaternion *)&stack0xffffffb8,fVar2,
                               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                               (MethodInfo *)0x0);
          pQVar8 = QuaternionEx::QuaternionEx_Normalize
                              ((Quaternion *)&stack0xffffffb8,*pQVar8,(MethodInfo *)0x0);
          fVar2 = pQVar8->y;
          fVar3 = pQVar8->z;
          fVar4 = pQVar8->w;
          (pGVar1->fields)._localRotation2D.x = pQVar8->x;
          (pGVar1->fields)._localRotation2D.y = fVar2;
          (pGVar1->fields)._localRotation2D.z = fVar3;
          (pGVar1->fields)._localRotation2D.w = fVar4;
          GizmoTransform::GizmoTransform_OnLocalRotation2DChanged(pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* List`1[RTG.LocalGizmoTransformSnapshot] GetSnapshotCollection(IEnumerable`1[RTG.Gizmo]) */

List_1_RTG_LocalGizmoTransformSnapshot_ *
Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::
LocalGizmoTransformSnapshot_GetSnapshotCollection
          (IEnumerable_1_RTG_Gizmo_ *gizmos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__Add_RTG__LocalGizmoTransformSnapshot_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>)
    ;
    func_?(&TypeInfo__RTG__LocalGizmoTransformSnapshot);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>
                           );
  if (gizmos == (IEnumerable_1_RTG_Gizmo_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List__
              );
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_RTG_LocalGizmoTransformSnapshot_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,0x14,
             MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List_int_
            );
  piVar4 = (int *)func_?(0,TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>,
                                  gizmos);
  uStack_1 = 1;
  while (piVar4 != (int *)0x0) {
    cVar5 = func_?();
    if (cVar5 == '\0') {
      uStack_1 = 0xffffffff;
      if (piVar4 != (int *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_RTG_LocalGizmoTransformSnapshot_ *)this;
    }
    if (piVar4 == (int *)0x0) break;
    iVar6 = *piVar4;
    uVar7 = 0;
    if (*(ushort *)(iVar6 + 0xb6) != 0) {
      do {
        if (*(IEnumerator_1_RTG_Gizmo___Class **)(*(int *)(iVar6 + 0x58) + (uint)uVar7 * 8) ==
            TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>) {
          puVar8 = (undefined4 *)
                   (iVar6 + (*(int *)(*(int *)(iVar6 + 0x58) + 4 + (uint)uVar7 * 8) + 0x18) * 8);
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(iVar6 + 0xb6));
    }
    puVar8 = (undefined4 *)func_?();
code_?:
    iVar6 = (*(code *)*puVar8)();
    method_00 = (MethodInfo *)&UNK_?;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,method_00);
    if ((iVar6 == 0) || (pOVar9 = *(Object__Class **)(iVar6 + 0xf8), value == (Object *)0x0)) break;
    if (pOVar9 != (Object__Class *)0x0) {
      value[1].klass = pOVar9;
      func_?();
      value[1].monitor = (MonitorData *)(pOVar9->_1).element_size;
      func_?();
      pIVar10 = (pOVar9->_0).castClass;
      value[2] = *(Object *)&(pOVar9->_0).this_arg.attrs;
      value[3].klass = (Object__Class *)pIVar10;
      pIVar10 = (pOVar9->_0).klass;
      pFVar11 = (pOVar9->_0).fields;
      pOVar12 = (Object__Class *)(pOVar9->_0).events;
      value[3].monitor = (MonitorData *)(pOVar9->_0).interopData;
      value[4].klass = (Object__Class *)pIVar10;
      value[4].monitor = (MonitorData *)pFVar11;
      value[5].klass = pOVar12;
      pOVar12 = (Object__Class *)(pOVar9->_0).implementedInterfaces;
      value[5].monitor = (MonitorData *)(pOVar9->_0).nestedTypes;
      value[6].klass = pOVar12;
      value[6].monitor = (MonitorData *)(pOVar9->_1).initializationExceptionGCHandle;
    }
    if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this,value,
               MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__Add_RTG__LocalGizmoTransformSnapshot_
              );
  }
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar14 = (List_1_RTG_LocalGizmoTransformSnapshot_ *)(*pcVar13)();
  return pLVar14;
}


/* Void Snapshot(GizmoTransform) */

void Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::LocalGizmoTransformSnapshot_Snapshot
               (LocalGizmoTransformSnapshot *this,GizmoTransform *transform,MethodInfo *method)

{
  if (transform != (GizmoTransform *)0x0) {
    (this->fields)._transform = transform;
    func_?(&this->fields,transform);
    pGVar1 = (transform->fields)._parent;
    ppGVar2 = &(this->fields)._parentTransform;
    *ppGVar2 = pGVar1;
    func_?(ppGVar2,pGVar1);
    fVar3 = (transform->fields)._localPosition3D.y;
    fVar4 = (transform->fields)._localPosition3D.z;
    (this->fields)._localPosition3D.x = (transform->fields)._localPosition3D.x;
    (this->fields)._localPosition3D.y = fVar3;
    (this->fields)._localPosition3D.z = fVar4;
    fVar4 = (transform->fields)._localRotation3D.y;
    fVar3 = (transform->fields)._localRotation3D.z;
    fVar5 = (transform->fields)._localRotation3D.w;
    (this->fields)._localRotation3D.x = (transform->fields)._localRotation3D.x;
    (this->fields)._localRotation3D.y = fVar4;
    (this->fields)._localRotation3D.z = fVar3;
    (this->fields)._localRotation3D.w = fVar5;
    fVar4 = (transform->fields)._localPosition2D.y;
    (this->fields)._localPosition2D.x = (transform->fields)._localPosition2D.x;
    (this->fields)._localPosition2D.y = fVar4;
    (this->fields)._localRotation2D_Degrees = (transform->fields)._localRotation2DDegrees;
  }
  return;
}


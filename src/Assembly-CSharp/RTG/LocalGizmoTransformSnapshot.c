
/* Void Apply() */

void Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::LocalGizmoTransformSnapshot_Apply
               (LocalGizmoTransformSnapshot *this,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._transform;
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
          (pGVar1->fields)._position2D.x = fVar2;
          (pGVar1->fields)._position2D.y = fVar3;
          if ((pGVar1->fields)._parent != (GizmoTransform *)0x0) {
            pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                                ((Quaternion *)&stack0xffffffb8,
                                 (((pGVar1->fields)._parent)->fields)._rotation2D,(MethodInfo *)0x0
                                );
            pGVar7 = (pGVar1->fields)._parent;
            if (pGVar7 == (GizmoTransform *)0x0) goto code_?;
            VVar8.y = (pGVar1->fields)._position2D.y - (pGVar7->fields)._position2D.y;
            VVar8.x = (pGVar1->fields)._position2D.x - (pGVar7->fields)._position2D.x;
            VVar8.z = 0.0;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xfffffff0,*pQVar6,VVar8,(MethodInfo *)0x0);
            fVar2 = pVVar9->x;
            fVar3 = pVVar9->y;
          }
          (pGVar1->fields)._localPosition2D.x = fVar2;
          (pGVar1->fields)._localPosition2D.y = fVar3;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar1,(MethodInfo *)0x0);
          (pGVar1->fields)._firingChanged2DEvent = 1;
          if ((pGVar1->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(((pGVar1->fields).Changed)->fields)._._.invoke_impl)();
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
    pVVar9 = &(this->fields)._localPosition3D;
    uVar10 = pVVar9->x;
    uVar11 = pVVar9->y;
    fVar2 = (this->fields)._localPosition3D.z;
    VVar8 = *pVVar9;
    if (((pGVar1->fields)._firingChanged3DEvent == 0) &&
       (uVar12 = (pGVar1->fields)._localPosition3D.x, uVar13 = (pGVar1->fields)._localPosition3D.y,
       fVar3 = (pGVar1->fields)._localPosition3D.z - fVar2,
       _UNK_? <=
       ((float)uVar13 - (float)uVar11) * ((float)uVar13 - (float)uVar11) +
       ((float)uVar12 - (float)uVar10) * ((float)uVar12 - (float)uVar10) + fVar3 * fVar3)) {
      (pGVar1->fields)._localPosition3D.x = (float)uVar10;
      (pGVar1->fields)._localPosition3D.y = (float)uVar11;
      (pGVar1->fields)._localPosition3D.z = fVar2;
      if ((pGVar1->fields)._parent == (GizmoTransform *)0x0) {
        (pGVar1->fields)._position3D.x = (float)uVar10;
        (pGVar1->fields)._position3D.y = (float)uVar11;
        (pGVar1->fields)._position3D.z = fVar2;
      }
      else {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffffe4,
                             (((pGVar1->fields)._parent)->fields)._rotation3D,VVar8,
                             (MethodInfo *)0x0);
        uVar14 = pVVar9->x;
        uVar15 = pVVar9->y;
        fVar2 = pVVar9->z;
        pGVar7 = (pGVar1->fields)._parent;
        if (pGVar7 == (GizmoTransform *)0x0) goto code_?;
        uVar16 = (pGVar7->fields)._position3D.x;
        uVar17 = (pGVar7->fields)._position3D.y;
        fVar3 = (pGVar7->fields)._position3D.z;
        (pGVar1->fields)._position3D.x = (float)uVar16 + (float)uVar14;
        (pGVar1->fields)._position3D.y = (float)uVar17 + (float)uVar15;
        (pGVar1->fields)._position3D.z = fVar3 + fVar2;
      }
      GizmoTransform::GizmoTransform_UpdateChildTransforms3D(pGVar1,(MethodInfo *)0x0);
      (pGVar1->fields)._firingChanged3DEvent = 1;
      if ((pGVar1->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(((pGVar1->fields).Changed)->fields)._._.invoke_impl)();
      }
      (pGVar1->fields)._firingChanged3DEvent = 0;
    }
    pGVar1 = (this->fields)._transform;
    if (pGVar1 != (GizmoTransform *)0x0) {
      if ((pGVar1->fields)._firingChanged3DEvent == 0) {
        puVar18 = (undefined8 *)func_?();
        fVar4 = 0.0;
        fVar2 = *(float *)(puVar18 + 1);
        puVar19 = &stack0xffffffc8;
        puVar20 = &stack0xffffffd8;
        fVar3 = (float)*puVar18;
        fVar5 = (float)((ulonglong)*puVar18 >> 0x20);
        puVar21 = &UNK_?;
        puVar18 = (undefined8 *)func_?();
        fStack_22 = (float)((ulonglong)*puVar18 >> 0x20);
        fVar3 = fVar3 - (float)*puVar18;
        if (_UNK_? <=
            (fVar5 - fStack_22) * (fVar5 - fStack_22) + fVar3 * fVar3 +
            (fVar2 - *(float *)(puVar18 + 1)) * (fVar2 - *(float *)(puVar18 + 1))) {
          quat.y = (float)puVar20;
          quat.x = (float)puVar21;
          quat.z = (float)puVar19;
          quat.w = fVar4;
          pQVar6 = QuaternionEx::QuaternionEx_Normalize
                              ((Quaternion *)&stack0xffffffb8,quat,(MethodInfo *)0x0);
          fVar2 = pQVar6->y;
          fVar3 = pQVar6->z;
          fVar4 = pQVar6->w;
          (pGVar1->fields)._localRotation3D.x = pQVar6->x;
          (pGVar1->fields)._localRotation3D.y = fVar2;
          (pGVar1->fields)._localRotation3D.z = fVar3;
          (pGVar1->fields)._localRotation3D.w = fVar4;
          GizmoTransform::GizmoTransform_OnLocalRotation3DChanged(pGVar1,(MethodInfo *)0x0);
        }
      }
      pGVar1 = (this->fields)._transform;
      pVVar23 = &(this->fields)._localPosition2D;
      fVar2 = pVVar23->x;
      fVar3 = (this->fields)._localPosition2D.y;
      if (pGVar1 != (GizmoTransform *)0x0) {
        if (((pGVar1->fields)._firingChanged2DEvent == 0) &&
           (fVar4 = (pGVar1->fields)._localPosition2D.x - fVar2,
           fVar5 = (pGVar1->fields)._localPosition2D.y - fVar3,
           bVar24 = fVar5 * fVar5 + fVar4 * fVar4 < _UNK_?, !bVar24)) {
          (pGVar1->fields)._localPosition2D.x = fVar2;
          (pGVar1->fields)._localPosition2D.y = fVar3;
          if ((pGVar1->fields)._parent != (GizmoTransform *)0x0) {
            point.z._0_1_ = bVar24;
            point.x = pVVar23->x;
            point.y = pVVar23->y;
            point.z._1_3_ = 0;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffd8,
                                 (((pGVar1->fields)._parent)->fields)._rotation2D,point,
                                 (MethodInfo *)0x0);
            uVar25 = pVVar9->x;
            uVar26 = pVVar9->y;
            pGVar7 = (pGVar1->fields)._parent;
            if (pGVar7 == (GizmoTransform *)0x0) goto code_?;
            fVar2 = (pGVar7->fields)._position2D.x + (float)uVar25;
            fVar3 = (pGVar7->fields)._position2D.y + (float)uVar26;
          }
          (pGVar1->fields)._position2D.x = fVar2;
          (pGVar1->fields)._position2D.y = fVar3;
          GizmoTransform::GizmoTransform_UpdateChildTransforms2D(pGVar1,(MethodInfo *)0x0);
          (pGVar1->fields)._firingChanged2DEvent = 1;
          if ((pGVar1->fields).Changed != (GizmoEntityTransformChangedHandler *)0x0) {
            (*(((pGVar1->fields).Changed)->fields)._._.invoke_impl)();
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
          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                              ((Quaternion *)&stack0xffffffb8,fVar2,
                               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                               (MethodInfo *)0x0);
          pQVar6 = QuaternionEx::QuaternionEx_Normalize
                              ((Quaternion *)&stack0xffffffb8,*pQVar6,(MethodInfo *)0x0);
          fVar2 = pQVar6->y;
          fVar3 = pQVar6->z;
          fVar4 = pQVar6->w;
          (pGVar1->fields)._localRotation2D.x = pQVar6->x;
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
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
    (this->fields)._parentTransform = pGVar1;
    func_?(&(this->fields)._parentTransform,pGVar1);
    fVar2 = (transform->fields)._localPosition3D.y;
    fVar3 = (transform->fields)._localPosition3D.z;
    (this->fields)._localPosition3D.x = (transform->fields)._localPosition3D.x;
    (this->fields)._localPosition3D.y = fVar2;
    (this->fields)._localPosition3D.z = fVar3;
    fVar3 = (transform->fields)._localRotation3D.y;
    fVar2 = (transform->fields)._localRotation3D.z;
    fVar4 = (transform->fields)._localRotation3D.w;
    (this->fields)._localRotation3D.x = (transform->fields)._localRotation3D.x;
    (this->fields)._localRotation3D.y = fVar3;
    (this->fields)._localRotation3D.z = fVar2;
    (this->fields)._localRotation3D.w = fVar4;
    fVar3 = (transform->fields)._localPosition2D.y;
    (this->fields)._localPosition2D.x = (transform->fields)._localPosition2D.x;
    (this->fields)._localPosition2D.y = fVar3;
    (this->fields)._localRotation2D_Degrees = (transform->fields)._localRotation2DDegrees;
  }
  return;
}


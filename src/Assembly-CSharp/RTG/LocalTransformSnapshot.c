
/* Void Apply() */

void Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_Apply
               (LocalTransformSnapshot *this,MethodInfo *method)

{
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields)._transform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pTVar2 = (this->fields)._parentTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._transform;
    if (bVar3 == 0) {
      if (pTVar2 == (Transform *)0x0) goto code_?;
      uVar4 = (this->fields)._localPosition.x;
      uVar5 = (this->fields)._localPosition.y;
      this = (LocalTransformSnapshot *)(this->fields)._localPosition.z;
      fVar6 = (float)uVar5;
      fVar7 = (float)uVar4;
      VVar8 = (Vector3)CONCAT84(uVar9,fVar7);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,VVar8,(MethodInfo *)0x0);
      pTVar2 = (pLVar1->fields)._transform;
      if (pTVar2 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,(pLVar1->fields)._localRotation,(MethodInfo *)0x0);
    }
    else {
      if (pTVar2 == (Transform *)0x0) goto code_?;
      uVar10 = (this->fields)._localPosition.x;
      uVar11 = (this->fields)._localPosition.y;
      this = (LocalTransformSnapshot *)(this->fields)._localPosition.z;
      fVar6 = (float)uVar11;
      fVar12 = (float)uVar10;
      VVar8 = (Vector3)CONCAT84(uVar9,fVar12);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,VVar8,(MethodInfo *)0x0);
      pTVar2 = (pLVar1->fields)._transform;
      if (pTVar2 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar2,(pLVar1->fields)._localRotation,(MethodInfo *)0x0);
    }
    pTVar2 = (pLVar1->fields)._transform;
    if (pTVar2 == (Transform *)0x0) {
code_?:
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar2,(pLVar1->fields)._localScale,(MethodInfo *)0x0);
  }
  return;
}


/* List`1[RTG.LocalTransformSnapshot] GetSnapshotCollection(IEnumerable`1[UnityEngine.GameObject])
    */

List_1_RTG_LocalTransformSnapshot_ *
Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__Add_RTG__LocalTransformSnapshot_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>);
    func_?(&TypeInfo__RTG__LocalTransformSnapshot);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                           );
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_RTG_LocalTransformSnapshot_ *)this;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,0x14,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_int_)
  ;
  pIVar4 = gameObjects->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>) {
        ppMVar7 = &(&gameObjects->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].
                   GetEnumerator.method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?();
code_?:
  piVar8 = (int *)(*(code *)*ppMVar7)();
  uStack_1 = 1;
  while (piVar8 != (int *)0x0) {
    cVar9 = func_?();
    if (cVar9 == '\0') {
      uStack_1 = 0xffffffff;
      if (piVar8 == (int *)0x0) {
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_RTG_LocalTransformSnapshot_ *)this;
      }
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_RTG_LocalTransformSnapshot_ *)this;
    }
    if (piVar8 == (int *)0x0) break;
    uVar5 = 0;
    uVar6 = *(ushort *)(*piVar8 + 0xb6);
    if (uVar6 != 0) {
      do {
        if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
             (*(int *)(*piVar8 + 0x58) + (uint)uVar5 * 8) ==
            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
          puVar10 = (undefined4 *)
                   (*piVar8 + (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar5 * 8) + 0x18) * 8
                   );
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    puVar10 = (undefined4 *)func_?();
code_?:
    this_00 = (GameObject *)(*(code *)*puVar10)();
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    method_00 = (MethodInfo *)&UNK_?;
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      this_01 = (LocalTransformSnapshot *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this_01,ExceptionArgument__Enum_obj,method_00);
      if (((this_00 == (GameObject *)0x0) ||
          (transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this_00,(MethodInfo *)0x0),
          this_01 == (LocalTransformSnapshot *)0x0)) ||
         (LocalTransformSnapshot_Snapshot(this_01,transform,(MethodInfo *)0x0),
         this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__Add_RTG__LocalTransformSnapshot_
                );
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar13 = (List_1_RTG_LocalTransformSnapshot_ *)(*pcVar12)();
  return pLVar13;
}


/* Boolean SameAs(Transform) */

bool Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_SameAs
               (LocalTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._parentTransform;
  if (transform != (Transform *)0x0) {
    y = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                  (transform,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)y,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields)._localPosition.z;
      uVar4 = (this->fields)._localPosition.x;
      uVar5 = (this->fields)._localPosition.y;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd4,transform,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      fVar3 = fVar3 - pVVar6->z;
      if (((float)uVar5 - (float)uVar8) * ((float)uVar5 - (float)uVar8) +
          ((float)uVar4 - (float)uVar7) * ((float)uVar4 - (float)uVar7) + fVar3 * fVar3 <
          _UNK_?) {
        fVar3 = (this->fields)._localRotation.x;
        __return_storage_ptr__ = (Quaternion *)(this->fields)._localRotation.z;
        pTVar1 = (Transform *)(this->fields)._localRotation.w;
        puVar9 = &UNK_?;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                            (__return_storage_ptr__,pTVar1,(MethodInfo *)0x0);
        if (_UNK_? <
            (float)puVar9 * pQVar10->y + fVar3 * pQVar10->x +
            (float)__return_storage_ptr__ * pQVar10->z + (float)pTVar1 * pQVar10->w) {
          method_00 = (MethodInfo *)(this->fields)._localScale.z;
          uVar11._0_4_ = (this->fields)._localScale.x;
          uVar11._4_4_ = (this->fields)._localScale.y;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)(undefined4)uVar11,(Transform *)uVar11._4_4_,method_00);
          uVar12 = pVVar6->x;
          uVar13 = pVVar6->y;
          fVar14 = (float)uVar11 - (float)uVar12;
          fVar15 = (float)((ulonglong)uVar11 >> 0x20) - (float)uVar13;
          fVar3 = (float)method_00 - pVVar6->z;
          return fVar15 * fVar15 + fVar14 * fVar14 + fVar3 * fVar3 < _UNK_?;
        }
      }
    }
    return 0;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar2 = (*pcVar16)();
  return bVar2;
}


/* Void Snapshot(Transform) */

void Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_Snapshot
               (LocalTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)transform,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._transform = transform;
    func_?(&this->fields);
    if (transform == (Transform *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (transform,(MethodInfo *)0x0);
    ppTVar4 = &(this->fields)._parentTransform;
    *ppTVar4 = pTVar3;
    func_?(ppTVar4);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
    fVar6 = pVVar5->y;
    fVar7 = pVVar5->z;
    (this->fields)._localPosition.x = pVVar5->x;
    (this->fields)._localPosition.y = fVar6;
    (this->fields)._localPosition.z = fVar7;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffec,transform,(MethodInfo *)0x0);
    fVar7 = pQVar8->y;
    fVar6 = pQVar8->z;
    fVar9 = pQVar8->w;
    (this->fields)._localRotation.x = pQVar8->x;
    (this->fields)._localRotation.y = fVar7;
    (this->fields)._localRotation.z = fVar6;
    (this->fields)._localRotation.w = fVar9;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xfffffff0,transform,(MethodInfo *)0x0);
    fVar6 = pVVar5->y;
    fVar7 = pVVar5->z;
    (this->fields)._localScale.x = pVVar5->x;
    (this->fields)._localScale.y = fVar6;
    (this->fields)._localScale.z = fVar7;
  }
  return;
}


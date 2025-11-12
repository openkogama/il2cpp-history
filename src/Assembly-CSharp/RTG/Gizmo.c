
/* Boolean AddBehaviour(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::Gizmo::Gizmo_AddBehaviour
               (Gizmo *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__MoveGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MoveGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__ObjectTransformGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectTransformGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__RotationGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RotationGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__ScaleGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ScaleGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__UniversalGizmo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UniversalGizmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((behaviour == (IGizmoBehaviour *)0x0) ||
     (lVar1 = FUN_?(0,TypeInfo__RTG__IGizmoBehaviour,behaviour), lVar1 != 0)) {
    return 0;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pGStackX_10 >> 0xc);
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
  pIVar6 = behaviour->klass;
  pUVar7 = (UniversalGizmo *)0x0;
  uVar8 = 0;
  uVar9._0_1_ = (pIVar6->_1).rank;
  uVar9._1_1_ = (pIVar6->_1).minimumAlignment;
  pGStackX_10 = this;
  if (uVar9 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar8].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IGizmoBehaviour) {
        pVVar10 = &(pIVar6->vtable).get_Gizmo + (pIVar6->interfaceOffsets[uVar8].offset + 2);
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  pVVar10 = (VirtualInvokeData *)FUN_?(behaviour,TypeInfo__RTG__IGizmoBehaviour,2);
code_?:
  (*pVVar10->methodPtr)(behaviour,this);
  pGVar11 = (this->fields)._behaviours;
  if (pGVar11 == (GizmoBehaviourCollection *)0x0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  bVar14 = false;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar15 = (pGVar11->fields)._behaviours;
  if (pLVar15 == (List_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
  if (((pLVar15->fields)._size != 0) &&
     (iVar16 = mscorlib.dll::System::Array::Array_IndexOf_69
                         ((Object__Array *)(pLVar15->fields)._items,(Object *)behaviour,0,
                          (pLVar15->fields)._size,
                          (MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                           ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
     iVar16 != -1)) {
    return 0;
  }
  if ((pGVar11->fields)._behaviours == (List_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
  FUN_?();
  pTVar17 = (Type *)FUN_?(&(behaviour->klass->_0).byval_arg);
  pIVar18 = TypeRef__RTG__MoveGizmo;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
  pIVar18 = TypeRef__RTG__RotationGizmo;
  if (pTVar17 == pTVar19) {
    bVar20 = (TypeInfo__RTG__MoveGizmo->_1).naturalAligment;
    if (((behaviour->klass->_1).naturalAligment < bVar20) ||
       (bVar21 = true,
       (MoveGizmo__Class *)(behaviour->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
       TypeInfo__RTG__MoveGizmo)) {
      bVar21 = bVar14;
    }
    ppUVar22 = (UniversalGizmo **)&(this->fields)._moveGizmo;
    if (bVar21) {
      pUVar7 = (UniversalGizmo *)behaviour;
    }
    (this->fields)._moveGizmo = (MoveGizmo *)pUVar7;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
    pIVar18 = TypeRef__RTG__ScaleGizmo;
    if (pTVar17 == pTVar19) {
      bVar20 = (TypeInfo__RTG__RotationGizmo->_1).naturalAligment;
      if (((behaviour->klass->_1).naturalAligment < bVar20) ||
         (bVar21 = true,
         (RotationGizmo__Class *)(behaviour->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
         TypeInfo__RTG__RotationGizmo)) {
        bVar21 = bVar14;
      }
      ppUVar22 = (UniversalGizmo **)&(this->fields)._rotationGizmo;
      if (bVar21) {
        pUVar7 = (UniversalGizmo *)behaviour;
      }
      (this->fields)._rotationGizmo = (RotationGizmo *)pUVar7;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
      pIVar18 = TypeRef__RTG__UniversalGizmo;
      if (pTVar17 == pTVar19) {
        bVar20 = (TypeInfo__RTG__ScaleGizmo->_1).naturalAligment;
        if (((behaviour->klass->_1).naturalAligment < bVar20) ||
           (bVar21 = true,
           (ScaleGizmo__Class *)(behaviour->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
           TypeInfo__RTG__ScaleGizmo)) {
          bVar21 = bVar14;
        }
        ppUVar22 = (UniversalGizmo **)&(this->fields)._scaleGizmo;
        if (bVar21) {
          pUVar7 = (UniversalGizmo *)behaviour;
        }
        (this->fields)._scaleGizmo = (ScaleGizmo *)pUVar7;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
        pIVar18 = TypeRef__RTG__ObjectTransformGizmo;
        if (pTVar17 == pTVar19) {
          bVar20 = (TypeInfo__RTG__UniversalGizmo->_1).naturalAligment;
          if (((behaviour->klass->_1).naturalAligment < bVar20) ||
             (bVar21 = true,
             (UniversalGizmo__Class *)(behaviour->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
             TypeInfo__RTG__UniversalGizmo)) {
            bVar21 = bVar14;
          }
          ppUVar22 = &(this->fields)._universalGizmo;
          if (bVar21) {
            pUVar7 = (UniversalGizmo *)behaviour;
          }
          (this->fields)._universalGizmo = pUVar7;
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
          if (pTVar17 != pTVar19) goto code_?;
          bVar20 = (TypeInfo__RTG__ObjectTransformGizmo->_1).naturalAligment;
          if (((behaviour->klass->_1).naturalAligment < bVar20) ||
             (bVar21 = true,
             (ObjectTransformGizmo__Class *)
             (behaviour->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
             TypeInfo__RTG__ObjectTransformGizmo)) {
            bVar21 = bVar14;
          }
          ppUVar22 = (UniversalGizmo **)&(this->fields)._objectTransformGizmo;
          if (bVar21) {
            pUVar7 = (UniversalGizmo *)behaviour;
          }
          (this->fields)._objectTransformGizmo = (ObjectTransformGizmo *)pUVar7;
        }
      }
    }
  }
  func_?(ppUVar22);
code_?:
  FUN_?(4,TypeInfo__RTG__IGizmoBehaviour,behaviour);
  FUN_?(6,TypeInfo__RTG__IGizmoBehaviour,behaviour);
  return 1;
}


/* Object AddBehaviour[Object]() */

Object * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_AddBehaviour_1(Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  behaviour = (IGizmoBehaviour *)
              mscorlib.dll::System::Activator::Activator_CreateInstance_24
                        (((method->field7_0x38).rgctx_data)->method);
  Gizmo_AddBehaviour(this,behaviour,(MethodInfo *)0x0);
  return (Object *)behaviour;
}


/* GizmoHandle CreateHandle(Int32) */

GizmoHandle *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_CreateHandle(Gizmo *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pGVar1->fields)._idToHandle;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
        return (GizmoHandle *)0x0;
      }
      pGVar3 = (GizmoHandle *)FUN_?(TypeInfo__RTG__GizmoHandle);
      GizmoHandle::GizmoHandle__ctor(pGVar3,this,id,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._handles;
      if (pGVar1 != (GizmoHandleCollection *)0x0) {
        GizmoHandleCollection::GizmoHandleCollection_Add
                  (pGVar1,(IGizmoHandle *)pGVar3,(MethodInfo *)0x0);
        return pGVar3;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pGVar3 = (GizmoHandle *)(*pcVar4)();
  return pGVar3;
}


/* Void EndDragSession() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_EndDragSession(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0) {
code_?:
    (this->fields)._activeDragSession = (IGizmoDragSession *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields)._activeDragSession >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    return;
  }
  FUN_?(0xd,TypeInfo__RTG__IGizmoDragSession,(this->fields)._activeDragSession);
  (this->fields)._dragInfo._isDragged = 0;
  if ((this->fields).PreDragEnd != (GizmoPreDragEndHandler *)0x0) {
    pGVar5 = (this->fields).PreDragEnd;
    (*(pGVar5->fields)._._.invoke_impl)
              ((pGVar5->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar5->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (this_00,(MethodInfo *)0x0);
    while (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar7 = FUN_?(0);
      if (cVar7 == '\0') {
        if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIVar6);
        }
        iVar8 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        if ((this->fields).PostDragEnd != (GizmoPostDragEndHandler *)0x0) {
          pGVar9 = (this->fields).PostDragEnd;
          (*(pGVar9->fields)._._.invoke_impl)
                    ((pGVar9->fields)._._.method_code,this,iVar8,(pGVar9->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      pIVar10 = pIVar6->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pIVar10->_1).rank;
      uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        uVar13 = uVar11;
        do {
          if (pIVar10->interfaceOffsets[uVar13].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            pIVar14 = &pIVar10->vtable + pIVar10->interfaceOffsets[uVar13].offset;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      pIVar14 = (IEnumerator_1_RTG_IGizmoBehaviour___VTable *)
                FUN_?(pIVar6,
                              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              ,0);
code_?:
      plVar15 = (longlong *)
                (*(pIVar14->get_Current).methodPtr)(pIVar6,(pIVar14->get_Current).method);
      if (plVar15 == (longlong *)0x0) goto code_?;
      lVar16 = *plVar15;
      if (*(ushort *)(lVar16 + 0x12e) != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar11 * 0x10)
              == TypeInfo__RTG__IGizmoBehaviour) {
            puVar17 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 1) *
                       0x10 + 0x138 + lVar16);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar16 + 0x12e));
      }
      puVar17 = (undefined8 *)FUN_?(plVar15,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar7 = (*(code *)*puVar17)(plVar15,puVar17[1]);
      if (cVar7 != '\0') {
        FUN_?(0x11,TypeInfo__RTG__IGizmoBehaviour,plVar15,(this->fields)._dragInfo._handleId
                     );
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* List`1[RTG.GizmoHandleHoverData] GetAllHandlesHoverData(Ray) */

List_1_RTG_GizmoHandleHoverData_ *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetAllHandlesHoverData
          (Gizmo *this,Ray *hoverRay,MethodInfo *method)

{
  this_00 = (this->fields)._handles;
  if (this_00 != (GizmoHandleCollection *)0x0) {
    RStack_1.m_Origin.x = (hoverRay->m_Origin).x;
    RStack_1.m_Origin.y = (hoverRay->m_Origin).y;
    RStack_1._8_8_ = *(undefined8 *)&(hoverRay->m_Origin).z;
    RStack_1.m_Direction.y = (hoverRay->m_Direction).y;
    RStack_1.m_Direction.z = (hoverRay->m_Direction).z;
    pLVar2 = GizmoHandleCollection::GizmoHandleCollection_GetAllHandlesHoverData
                       (this_00,&RStack_1,(MethodInfo *)0x0);
    return pLVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (List_1_RTG_GizmoHandleHoverData_ *)(*pcVar3)();
  return pLVar2;
}


/* List`1[System.Object] GetBehavioursOfType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetBehavioursOfType(Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(method);
  }
  pGVar2 = (this->fields)._behaviours;
  if (pGVar2 == (GizmoBehaviourCollection *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_System_Object_ *)(*pcVar3)();
    return pLVar4;
  }
  lVar5 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar5 + 0x38) == 0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar5 + 0x38) == 0) {
      FUN_?(lVar5);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (pGVar2->fields)._behaviours;
  if (pLVar6 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar6->fields)._size == 0) {
      lVar7 = **(longlong **)(lVar5 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_?(lVar7);
      }
      pLVar4 = (List_1_System_Object_ *)FUN_?(lVar7);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
                 *(MethodInfo **)(*(longlong *)(lVar5 + 0x38) + 8));
      return pLVar4;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar6 = (pGVar2->fields)._behaviours;
    if (pLVar6 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      capacity = (pLVar6->fields)._size;
      lVar7 = **(longlong **)(lVar5 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_?(lVar7);
      }
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)FUN_?(lVar7);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                (this_00,capacity,*(MethodInfo **)(*(longlong *)(lVar5 + 0x38) + 0x10));
      lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x18);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar7 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar7 = FUN_?(lVar7,1);
        plVar8 = (longlong *)FUN_?(lVar7 + 0x20);
      }
      pLVar4 = (List_1_System_Object_ *)(pGVar2->fields)._behaviours;
      if (pLVar4 != (List_1_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        puStack_14 = (undefined *)
                     ((ulonglong)
                      (uint)((List_1_RTG_IGizmoBehaviour___Fields *)&pLVar4->fields)->_version <<
                     0x20);
        uStack_15 = 0;
        auStack_1._8_8_ = puStack_14;
        pOStack_16 = (Object *)0x0;
        uStack_10 = 0;
        puStack_14 = auStack_1;
        auStack_1._0_8_ = pLVar4;
code_?:
        bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                           );
        pOVar18 = pOStack_16;
        if (bVar17 == 0) {
          return (List_1_System_Object_ *)this_00;
        }
        if (pOStack_16 != (Object *)0x0) {
          plVar19 = (longlong *)FUN_?(&(pOStack_16->klass->_0).byval_arg);
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (plVar19 == plVar8) goto code_?;
          if (plVar19 != (longlong *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_System_Object_ *)(*pcVar3)();
  return pLVar4;
code_?:
  cVar20 = (**(code **)(*plVar19 + 0x288))(plVar19,plVar8,*(undefined8 *)(*plVar19 + 0x290));
  if (cVar20 != '\0') {
code_?:
    if (this_00 ==
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) goto code_?;
    uVar21 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x28);
    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_?(lVar7);
    }
    uVar22 = FUN_?(pOVar18,lVar7);
    FUN_?(this_00,uVar22,uVar21);
  }
  goto code_?;
}


/* IGizmoBehaviour GetFirstBehaviourOfType(Type) */

IGizmoBehaviour *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetFirstBehaviourOfType
          (Gizmo *this,Type *behaviourType,MethodInfo *method)

{
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
                       (this_00,behaviourType,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
        return (IGizmoBehaviour *)0x0;
      }
      pIVar2 = (pLVar1->fields)._items;
      if (pIVar2 != (IGizmoBehaviour__Array *)0x0) {
        if ((int)pIVar2->max_length == 0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          pIVar4 = (IGizmoBehaviour *)(*pcVar3)();
          return pIVar4;
        }
        return pIVar2->vector[0];
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IGizmoBehaviour *)(*pcVar3)();
  return pIVar4;
}


/* Object GetFirstBehaviourOfType[Object]() */

Object * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetFirstBehaviourOfType_1
                   (Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    lVar1 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      FUN_?(lVar1);
    }
    pLVar2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType_1
                       (this_00,(MethodInfo *)**(undefined8 **)(lVar1 + 0x38));
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        return (Object *)0x0;
      }
      pOVar3 = (pLVar2->fields)._items;
      if (pOVar3 != (Object__Array *)0x0) {
        if ((int)pOVar3->max_length == 0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pOVar5 = (Object *)(*pcVar4)();
          return pOVar5;
        }
        return pOVar3->vector[0];
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar4)();
  return pOVar5;
}


/* IGizmoHandle GetHandleById_SystemCall(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetHandleById_SystemCall
          (Gizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_;
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pGVar1->fields)._idToHandle;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,handleId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar3 < 0) {
        uVar4 = func_?(pMVar2->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar4);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pIVar6 = (IGizmoHandle *)(*pcVar5)();
        return pIVar6;
      }
      pDVar7 = (this_00->fields)._entries;
      if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar3 < (uint)pDVar7->max_length) {
          return *(IGizmoHandle **)&pDVar7->vector[(int)uVar3].value.y;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pIVar6 = (IGizmoHandle *)(*pcVar5)();
        return pIVar6;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pIVar6 = (IGizmoHandle *)(*pcVar5)();
      return pIVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IGizmoHandle *)(*pcVar5)();
  return pIVar6;
}


/* Camera GetWorkCamera() */

Camera * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetWorkCamera(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    if (*(int *)&pOVar1[3].monitor != 2) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (pOVar1 != (Object *)0x0) {
        return (Camera *)pOVar1[4].monitor;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Camera *)(*pcVar2)();
      return pCVar3;
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
      if (pOVar1 != (Object *)0x0) {
        return (Camera *)pOVar1[2].monitor;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Camera *)(*pcVar2)();
      return pCVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Void HandleInputDeviceEvents_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_HandleInputDeviceEvents_SystemCall
               (Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled != 0) {
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar1 == (Object *)0x0) || (pOVar2 = pOVar1[2].klass, pOVar2 == (Object__Class *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar4 = FUN_?(10,TypeInfo__RTG__IInputDevice,pOVar2,0);
    if (cVar4 == '\0') {
      cVar4 = FUN_?(0xb,TypeInfo__RTG__IInputDevice,pOVar2,0);
      if (cVar4 != '\0') {
        Gizmo_EndDragSession(this,(MethodInfo *)0x0);
      }
    }
    else {
      Gizmo_OnInputDevicePickButtonDown(this,(MethodInfo *)0x0);
    }
    cVar4 = FUN_?(0xc,TypeInfo__RTG__IInputDevice,pOVar2);
    if (cVar4 != '\0') {
      Gizmo_OnInputDeviceMoved(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnGUI_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnGUI_SystemCall(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                     (this_00,(MethodInfo *)0x0);
  do {
    if (pIVar2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      if (pIVar2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        return;
      }
      FUN_?(0,TypeInfo__System__IDisposable,pIVar2);
      return;
    }
    if (pIVar2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar4 = pIVar2->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      uVar7 = uVar5;
      do {
        if (pIVar4->interfaceOffsets[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
           ) {
          pVVar8 = &(&pIVar4->vtable)[pIVar4->interfaceOffsets[uVar7].offset].get_Current;
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    pVVar8 = (VirtualInvokeData *)
             FUN_?(pIVar2,
                           TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                           ,0);
code_?:
    plVar9 = (longlong *)(*pVVar8->methodPtr)(pIVar2,pVVar8->method);
    if (plVar9 == (longlong *)0x0) {
      FUN_?();
      goto code_?;
    }
    lVar10 = *plVar9;
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      do {
        if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
            TypeInfo__RTG__IGizmoBehaviour) {
          puVar11 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 1) *
                    0x10 + 0x138 + lVar10);
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar11 = (undefined8 *)FUN_?(plVar9,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
    cVar3 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    if (cVar3 != '\0') {
      FUN_?(0x14,TypeInfo__RTG__IGizmoBehaviour,plVar9);
    }
  } while( true );
}


/* Void OnInputDeviceMoved() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDeviceMoved(Gizmo *this,MethodInfo *method)

{
  pGStackX_20 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
    cVar2 = FUN_?(9,TypeInfo__RTG__IInputDevice,pOVar1[2].klass,0);
    if ((cVar2 == '\0') ||
       (((this->fields)._activeDragSession == (IGizmoDragSession *)0x0 ||
        (cVar2 = FUN_?(0,TypeInfo__RTG__IGizmoDragSession,(this->fields)._activeDragSession)
        , cVar2 == '\0')))) {
      return;
    }
    if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
      cVar2 = FUN_?(0xc,TypeInfo__RTG__IGizmoDragSession);
      if (cVar2 == '\0') {
        return;
      }
      if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
        puVar3 = (undefined8 *)FUN_?(&uStack_4,2,TypeInfo__RTG__IGizmoDragSession);
        fVar5 = *(float *)(puVar3 + 1);
        uVar6 = *puVar3;
        (this->fields)._dragInfo._totalOffset.x = (float)(int)uVar6;
        (this->fields)._dragInfo._totalOffset.y = (float)(int)((ulonglong)uVar6 >> 0x20);
        (this->fields)._dragInfo._totalOffset.z = fVar5;
        if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
          puVar3 = (undefined8 *)FUN_?(&uStack_4,5,TypeInfo__RTG__IGizmoDragSession);
          fVar5 = *(float *)(puVar3 + 1);
          uVar6 = *puVar3;
          (this->fields)._dragInfo._relativeOffset.x = (float)(int)uVar6;
          (this->fields)._dragInfo._relativeOffset.y = (float)(int)((ulonglong)uVar6 >> 0x20);
          (this->fields)._dragInfo._relativeOffset.z = fVar5;
          if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
            pfVar7 = (float *)FUN_?(&uStack_8,3,TypeInfo__RTG__IGizmoDragSession);
            fVar5 = pfVar7[1];
            fVar9 = pfVar7[2];
            fVar10 = pfVar7[3];
            (this->fields)._dragInfo._totalRotation.x = *pfVar7;
            (this->fields)._dragInfo._totalRotation.y = fVar5;
            (this->fields)._dragInfo._totalRotation.z = fVar9;
            (this->fields)._dragInfo._totalRotation.w = fVar10;
            if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
              puVar3 = (undefined8 *)FUN_?(&uStack_4,4,TypeInfo__RTG__IGizmoDragSession);
              fVar5 = *(float *)(puVar3 + 1);
              uVar6 = *puVar3;
              (this->fields)._dragInfo._totalScale.x = (float)(int)uVar6;
              (this->fields)._dragInfo._totalScale.y = (float)(int)((ulonglong)uVar6 >> 0x20);
              (this->fields)._dragInfo._totalScale.z = fVar5;
              if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                pfVar7 = (float *)FUN_?(&uStack_8,6,TypeInfo__RTG__IGizmoDragSession);
                fVar5 = pfVar7[1];
                fVar9 = pfVar7[2];
                fVar10 = pfVar7[3];
                (this->fields)._dragInfo._relativeRotation.x = *pfVar7;
                (this->fields)._dragInfo._relativeRotation.y = fVar5;
                (this->fields)._dragInfo._relativeRotation.z = fVar9;
                (this->fields)._dragInfo._relativeRotation.w = fVar10;
                if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                  puVar3 = (undefined8 *)
                            FUN_?(&uStack_4,7,TypeInfo__RTG__IGizmoDragSession);
                  fVar5 = *(float *)(puVar3 + 1);
                  uVar6 = *puVar3;
                  (this->fields)._dragInfo._relativeScale.x = (float)(int)uVar6;
                  (this->fields)._dragInfo._relativeScale.y = (float)(int)((ulonglong)uVar6 >> 0x20)
                  ;
                  (this->fields)._dragInfo._relativeScale.z = fVar5;
                  if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                    puVar3 = (undefined8 *)
                              FUN_?(&uStack_4,2,TypeInfo__RTG__IGizmoDragSession);
                    uStack_11 = *puVar3;
                    uStack_12 = *(undefined4 *)(puVar3 + 1);
                    fVar5 = (float)FUN_?(&uStack_11);
                    if ((fVar5 == 0.0) ||
                       ((this->fields).OffsetDragAxisModify ==
                        (GizmoOffsetDragAxisModifyHandler *)0x0)) {
code_?:
                      if ((this->fields).PreDragUpdate != (GizmoPreDragUpdateHandler *)0x0) {
                        pGVar13 = (this->fields).PreDragUpdate;
                        (*(pGVar13->fields)._._.invoke_impl)
                                  ((pGVar13->fields)._._.method_code,this,
                                   (this->fields)._dragInfo._handleId,(pGVar13->fields)._._.method);
                      }
                      this_00 = (this->fields)._behaviours;
                      if (this_00 != (GizmoBehaviourCollection *)0x0) {
                        pIStackX_18 = GizmoBehaviourCollection::
                                      GizmoBehaviourCollection_GetEnumerator
                                                (this_00,(MethodInfo *)0x0);
                        uStack_8 = 0;
                        ppIStack_14 = &pIStackX_18;
                        while (pIStackX_18 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                          cVar2 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                          if (cVar2 == '\0') {
                            if (pIStackX_18 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                              FUN_?(0,TypeInfo__System__IDisposable,pIStackX_18);
                            }
                            if ((this->fields).PostDragUpdate == (GizmoPostDragUpdateHandler *)0x0)
                            {
                              return;
                            }
                            pGVar15 = (this->fields).PostDragUpdate;
                            (*(pGVar15->fields)._._.invoke_impl)
                                      ((pGVar15->fields)._._.method_code,this,
                                       (this->fields)._dragInfo._handleId,
                                       (pGVar15->fields)._._.method);
                            return;
                          }
                          if (pIStackX_18 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0)
                          goto code_?;
                          lVar16 = FUN_?(0,
                                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                                );
                          if (lVar16 == 0) goto code_?;
                          cVar2 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar16);
                          if (cVar2 != '\0') {
                            FUN_?(0x10,TypeInfo__RTG__IGizmoBehaviour,lVar16,
                                          (this->fields)._dragInfo._handleId);
                          }
                        }
                        goto code_?;
                      }
                    }
                    else if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                      puVar3 = (undefined8 *)
                                FUN_?(&uStack_8,5,TypeInfo__RTG__IGizmoDragSession);
                      uStack_17 = *puVar3;
                      fVar5 = *(float *)(puVar3 + 1);
                      fStack_18 = fVar5;
                      uStack_4 = uStack_17;
                      fVar9 = (float)FUN_?(&uStack_17);
                      if (_UNK_? < fVar9) {
                        fVar10 = (float)uStack_4 / fVar9;
                        fVar19 = uStack_4._4_4_ / fVar9;
                        fVar5 = fVar5 / fVar9;
                      }
                      else {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
                        fVar10 = (pVVar20->zeroVector).x;
                        fVar19 = (pVVar20->zeroVector).y;
                        fVar5 = (pVVar20->zeroVector).z;
                      }
                      uStack_17 = CONCAT44(fVar19,fVar10);
                      pGVar21 = (this->fields).OffsetDragAxisModify;
                      if (((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) &&
                         (uVar22 = FUN_?(0,TypeInfo__RTG__IGizmoHandle),
                         pGVar21 != (GizmoOffsetDragAxisModifyHandler *)0x0)) {
                        uStack_4 = CONCAT44(fVar19,(undefined4)uStack_17);
                        fStack_23 = fVar5;
                        puVar3 = (undefined8 *)
                                  (*(pGVar21->fields)._._.invoke_impl)
                                            (&uStack_8,(pGVar21->fields)._._.method_code,this,
                                             &uStack_4,uVar22,(pGVar21->fields)._._.method);
                        uStack_4 = *puVar3;
                        fVar5 = *(float *)(puVar3 + 1);
                        if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                          puVar3 = (undefined8 *)
                                    FUN_?(&uStack_8,5,TypeInfo__RTG__IGizmoDragSession);
                          uStack_11 = *puVar3;
                          uStack_12 = *(undefined4 *)(puVar3 + 1);
                          fVar9 = (float)FUN_?(&uStack_11);
                          (this->fields)._dragInfo._relativeOffset.x = (float)uStack_4 * fVar9;
                          (this->fields)._dragInfo._relativeOffset.y = uStack_4._4_4_ * fVar9;
                          (this->fields)._dragInfo._relativeOffset.z = fVar5 * fVar9;
                          if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                            puVar3 = (undefined8 *)
                                      FUN_?(&uStack_8,2,TypeInfo__RTG__IGizmoDragSession);
                            uStack_4 = *puVar3;
                            fVar5 = *(float *)(puVar3 + 1);
                            if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                              puVar3 = (undefined8 *)
                                        FUN_?(&uStack_8,5,TypeInfo__RTG__IGizmoDragSession)
                              ;
                              uVar6 = *puVar3;
                              fVar9 = *(float *)(puVar3 + 1);
                              uStack_8._0_4_ = (this->fields)._dragInfo._relativeOffset.x;
                              uStack_8._4_4_ = (this->fields)._dragInfo._relativeOffset.y;
                              fVar10 = (this->fields)._dragInfo._relativeOffset.z;
                              (this->fields)._dragInfo._totalOffset.x =
                                   ((float)uStack_4 - (float)uVar6) + (float)(undefined4)uStack_8;
                              (this->fields)._dragInfo._totalOffset.y =
                                   (uStack_4._4_4_ - (float)((ulonglong)uVar6 >> 0x20)) +
                                   (float)uStack_8._4_4_;
                              (this->fields)._dragInfo._totalOffset.z = (fVar5 - fVar9) + fVar10;
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnInputDevicePickButtonDown() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDevicePickButtonDown
               (Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) {
    return;
  }
  if ((this->fields).PreHandlePicked != (GizmoPreHandlePickedHandler *)0x0) {
    pGVar1 = (this->fields).PreHandlePicked;
    uVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,(this->fields)._hoveredHandle);
    (*(pGVar1->fields)._._.invoke_impl)
              ((pGVar1->fields)._._.method_code,this,uVar2,(pGVar1->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pIVar3 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    while (pIVar3 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar4 = FUN_?(0);
      if (cVar4 == '\0') {
        if (pIVar3 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIVar3);
        }
        if ((this->fields).PostHandlePicked != (GizmoPostHandlePickedHandler *)0x0) {
          pGVar5 = (this->fields).PostHandlePicked;
          if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
          uVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
          (*(pGVar5->fields)._._.invoke_impl)
                    ((pGVar5->fields)._._.method_code,this,uVar2,(pGVar5->fields)._._.method);
        }
        Gizmo_TryActivateDragSession(this,(MethodInfo *)0x0);
        return;
      }
      if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      pIVar6 = pIVar3->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pIVar6->_1).rank;
      uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        uVar9 = uVar7;
        do {
          if (pIVar6->interfaceOffsets[uVar9].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            pIVar10 = &pIVar6->vtable + pIVar6->interfaceOffsets[uVar9].offset;
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
      pIVar10 = (IEnumerator_1_RTG_IGizmoBehaviour___VTable *)
                FUN_?(pIVar3,
                              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              ,0);
code_?:
      plVar11 = (longlong *)
                (*(pIVar10->get_Current).methodPtr)(pIVar3,(pIVar10->get_Current).method);
      if (plVar11 == (longlong *)0x0) goto code_?;
      lVar12 = *plVar11;
      if (*(ushort *)(lVar12 + 0x12e) != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar7 * 0x10)
              == TypeInfo__RTG__IGizmoBehaviour) {
            puVar13 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 1) *
                       0x10 + 0x138 + lVar12);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
      }
      puVar13 = (undefined8 *)FUN_?(plVar11,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar4 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      if (cVar4 != '\0') {
        if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
        uVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
        FUN_?(10,TypeInfo__RTG__IGizmoBehaviour,plVar11,uVar2);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnInputDevicePickButtonUp() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDevicePickButtonUp
               (Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0) {
code_?:
    (this->fields)._activeDragSession = (IGizmoDragSession *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields)._activeDragSession >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    return;
  }
  FUN_?(0xd,TypeInfo__RTG__IGizmoDragSession,(this->fields)._activeDragSession);
  (this->fields)._dragInfo._isDragged = 0;
  if ((this->fields).PreDragEnd != (GizmoPreDragEndHandler *)0x0) {
    pGVar5 = (this->fields).PreDragEnd;
    (*(pGVar5->fields)._._.invoke_impl)
              ((pGVar5->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar5->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (this_00,(MethodInfo *)0x0);
    while (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar7 = FUN_?(0);
      if (cVar7 == '\0') {
        if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIVar6);
        }
        iVar8 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        if ((this->fields).PostDragEnd != (GizmoPostDragEndHandler *)0x0) {
          pGVar9 = (this->fields).PostDragEnd;
          (*(pGVar9->fields)._._.invoke_impl)
                    ((pGVar9->fields)._._.method_code,this,iVar8,(pGVar9->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      pIVar10 = pIVar6->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pIVar10->_1).rank;
      uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        uVar13 = uVar11;
        do {
          if (pIVar10->interfaceOffsets[uVar13].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            pIVar14 = &pIVar10->vtable + pIVar10->interfaceOffsets[uVar13].offset;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      pIVar14 = (IEnumerator_1_RTG_IGizmoBehaviour___VTable *)
                FUN_?(pIVar6,
                              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              ,0);
code_?:
      plVar15 = (longlong *)
                (*(pIVar14->get_Current).methodPtr)(pIVar6,(pIVar14->get_Current).method);
      if (plVar15 == (longlong *)0x0) goto code_?;
      lVar16 = *plVar15;
      if (*(ushort *)(lVar16 + 0x12e) != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar11 * 0x10)
              == TypeInfo__RTG__IGizmoBehaviour) {
            puVar17 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 1) *
                       0x10 + 0x138 + lVar16);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar16 + 0x12e));
      }
      puVar17 = (undefined8 *)FUN_?(plVar15,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar7 = (*(code *)*puVar17)(plVar15,puVar17[1]);
      if (cVar7 != '\0') {
        FUN_?(0x11,TypeInfo__RTG__IGizmoBehaviour,plVar15,(this->fields)._dragInfo._handleId
                     );
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnUpdateBegin_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnUpdateBegin_SystemCall(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  if ((this->fields).PreUpdateBegin != (GizmoPreUpdateBeginHandler *)0x0) {
    pGVar1 = (this->fields).PreUpdateBegin;
    (*(pGVar1->fields)._._.invoke_impl)
              ((pGVar1->fields)._._.method_code,this,(pGVar1->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                     (this_00,(MethodInfo *)0x0);
  do {
    if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar4 == '\0') {
      if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        return;
      }
      FUN_?(0,TypeInfo__System__IDisposable,pIVar3);
      return;
    }
    if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar5 = pIVar3->klass;
    uVar6 = 0;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      uVar8 = uVar6;
      do {
        if (pIVar5->interfaceOffsets[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
           ) {
          pVVar9 = &(&pIVar5->vtable)[pIVar5->interfaceOffsets[uVar8].offset].get_Current;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    pVVar9 = (VirtualInvokeData *)
             FUN_?(pIVar3,
                           TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                           ,0);
code_?:
    plVar10 = (longlong *)(*pVVar9->methodPtr)(pIVar3,pVVar9->method);
    if (plVar10 == (longlong *)0x0) {
      FUN_?();
      goto code_?;
    }
    lVar11 = *plVar10;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
            TypeInfo__RTG__IGizmoBehaviour) {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) *
                     0x10 + 0x138 + lVar11);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_?(plVar10,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
    cVar4 = (*(code *)*puVar12)(plVar10,puVar12[1]);
    if (cVar4 != '\0') {
      FUN_?(0x12,TypeInfo__RTG__IGizmoBehaviour,plVar10);
    }
  } while( true );
}


/* Void OnUpdateEnd_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnUpdateEnd_SystemCall(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 == (GizmoBehaviourCollection *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pIVar1 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    while (pIVar1 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar2 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar2 == '\0') {
        if (pIVar1 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIVar1);
        }
        if ((this->fields).PostUpdateEnd == (GizmoPostUpdateEndHandler *)0x0) {
          return;
        }
        pGVar3 = (this->fields).PostUpdateEnd;
        (*(pGVar3->fields)._._.invoke_impl)
                  ((pGVar3->fields)._._.method_code,this,(pGVar3->fields)._._.method);
        return;
      }
      if (pIVar1 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      pIVar4 = pIVar1->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        uVar7 = uVar5;
        do {
          if (pIVar4->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            pIVar8 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar7].offset;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      pIVar8 = (IEnumerator_1_RTG_IGizmoBehaviour___VTable *)
               FUN_?(pIVar1,
                             TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                             ,0);
code_?:
      plVar9 = (longlong *)(*(pIVar8->get_Current).methodPtr)(pIVar1,(pIVar8->get_Current).method);
      if (plVar9 == (longlong *)0x0) goto code_?;
      lVar10 = *plVar9;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar5 * 0x10)
              == TypeInfo__RTG__IGizmoBehaviour) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 1) *
                       0x10 + 0x138 + lVar10);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_?(plVar9,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar2 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      if (cVar2 != '\0') {
        FUN_?(0x13,TypeInfo__RTG__IGizmoBehaviour,plVar9);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean RemoveBehaviour(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::Gizmo::Gizmo_RemoveBehaviour
               (Gizmo *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (behaviour == (IGizmoBehaviour *)0x0) {
    return 0;
  }
  if ((MoveGizmo *)behaviour == (this->fields)._moveGizmo) {
    bVar1 = iRam_? != 0;
    (this->fields)._moveGizmo = (MoveGizmo *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._moveGizmo >> 0xc);
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
  }
  else if ((RotationGizmo *)behaviour == (this->fields)._rotationGizmo) {
    (this->fields)._rotationGizmo = (RotationGizmo *)0x0;
    func_?(&(this->fields)._rotationGizmo);
  }
  else if ((ScaleGizmo *)behaviour == (this->fields)._scaleGizmo) {
    (this->fields)._scaleGizmo = (ScaleGizmo *)0x0;
    func_?(&(this->fields)._scaleGizmo);
  }
  else if ((UniversalGizmo *)behaviour == (this->fields)._universalGizmo) {
    (this->fields)._universalGizmo = (UniversalGizmo *)0x0;
    func_?(&(this->fields)._universalGizmo);
  }
  else if ((ObjectTransformGizmo *)behaviour == (this->fields)._objectTransformGizmo) {
    (this->fields)._objectTransformGizmo = (ObjectTransformGizmo *)0x0;
    func_?(&(this->fields)._objectTransformGizmo);
  }
  pGVar6 = (this->fields)._behaviours;
  if (pGVar6 != (GizmoBehaviourCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
    ;
    this_00 = (List_1_System_Object_ *)(pGVar6->fields)._behaviours;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((this_00->fields)._items,(Object *)behaviour,0,(this_00->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (-1 < index) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt(this_00,index,pMVar7->klass->rgctx_data[0x2b].method);
        return 1;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Render_SystemCall(Camera, Plane[]) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_Render_SystemCall
               (Gizmo *this,Camera *camera,Plane__Array *worldFrustumPlanes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__)
      ;
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pGVar1->fields)._handles;
    if (pLVar2 != (List_1_RTG_IGizmoHandle_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        return;
      }
      this_00 = (this->fields)._behaviours;
      if (this_00 != (GizmoBehaviourCollection *)0x0) {
        pIVar3 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (this_00,(MethodInfo *)0x0);
        do {
          if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
            FUN_?();
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar5 == '\0') {
            if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              return;
            }
            FUN_?(0,TypeInfo__System__IDisposable,pIVar3);
            return;
          }
          if (pIVar3 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pIVar6 = pIVar3->klass;
          uVar7 = 0;
          uVar8._0_1_ = (pIVar6->_1).rank;
          uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
          if (uVar8 != 0) {
            uVar9 = uVar7;
            do {
              if (pIVar6->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                pVVar10 = &(&pIVar6->vtable)[pIVar6->interfaceOffsets[uVar9].offset].get_Current;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
          }
          pVVar10 = (VirtualInvokeData *)
                   FUN_?(pIVar3,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                 ,0);
code_?:
          plVar11 = (longlong *)(*pVVar10->methodPtr)(pIVar3,pVVar10->method);
          if (plVar11 == (longlong *)0x0) {
            FUN_?();
            goto code_?;
          }
          lVar12 = *plVar11;
          if (*(ushort *)(lVar12 + 0x12e) != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)
                   (*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar13 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 1
                           ) * 0x10 + 0x138 + lVar12);
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
          }
          puVar13 = (undefined8 *)FUN_?(plVar11,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar5 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          if (cVar5 != '\0') {
            FUN_?();
          }
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_SetEnabled(Gizmo *this,bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (enabled == (this->fields)._isEnabled) {
    return;
  }
  if (enabled == 0) {
    Gizmo_EndDragSession(this,(MethodInfo *)0x0);
    GizmoHoverInfo::GizmoHoverInfo_Reset(&(this->fields)._hoverInfo,(MethodInfo *)0x0);
    (this->fields)._hoveredHandle = (IGizmoHandle *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields)._hoveredHandle >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    (this->fields)._isEnabled = 0;
    pGVar5 = (this->fields)._behaviours;
    if (pGVar5 != (GizmoBehaviourCollection *)0x0) {
      pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar5,(MethodInfo *)0x0);
      while (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar7 == '\0') {
          if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,pIVar6);
          }
          if ((this->fields).PostDisabled == (GizmoPostDisabledHandler *)0x0) {
            return;
          }
          pGVar8 = (GizmoPostEnabledHandler *)(this->fields).PostDisabled;
          goto code_?;
        }
        if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        pIVar9 = pIVar6->klass;
        uVar10 = 0;
        uVar11._0_1_ = (pIVar9->_1).rank;
        uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar11 != 0) {
          uVar12 = uVar10;
          do {
            if (pIVar9->interfaceOffsets[uVar12].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
              pVVar13 = &(&pIVar9->vtable)[pIVar9->interfaceOffsets[uVar12].offset].get_Current;
              goto code_?;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar11);
        }
        pVVar13 = (VirtualInvokeData *)
                  FUN_?(pIVar6,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
        plVar14 = (longlong *)(*pVVar13->methodPtr)(pIVar6,pVVar13->method);
        if (plVar14 == (longlong *)0x0) goto code_?;
        lVar15 = *plVar14;
        if (*(ushort *)(lVar15 + 0x12e) != 0) {
          do {
            if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar10 * 0x10)
                == TypeInfo__RTG__IGizmoBehaviour) {
              puVar16 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 1)
                         * 0x10 + 0x138 + lVar15);
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar15 + 0x12e));
        }
        puVar16 = (undefined8 *)FUN_?(plVar14,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
        cVar7 = (*(code *)*puVar16)(plVar14,puVar16[1]);
        if (cVar7 != '\0') {
          FUN_?(9,TypeInfo__RTG__IGizmoBehaviour,plVar14);
        }
      }
      goto code_?;
    }
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    (this->fields)._isEnabled = 1;
    pGVar5 = (this->fields)._behaviours;
    if (pGVar5 == (GizmoBehaviourCollection *)0x0) goto code_?;
    pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (pGVar5,(MethodInfo *)0x0);
    while (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar7 == '\0') {
        if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIVar6);
        }
        if ((this->fields).PostEnabled == (GizmoPostEnabledHandler *)0x0) {
          return;
        }
        pGVar8 = (this->fields).PostEnabled;
code_?:
        (*(pGVar8->fields)._._.invoke_impl)
                  ((pGVar8->fields)._._.method_code,this,(pGVar8->fields)._._.method);
        return;
      }
      if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      pIVar9 = pIVar6->klass;
      uVar11 = 0;
      uVar10._0_1_ = (pIVar9->_1).rank;
      uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar10 != 0) {
        uVar12 = uVar11;
        do {
          if (pIVar9->interfaceOffsets[uVar12].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            pVVar13 = &(&pIVar9->vtable)[pIVar9->interfaceOffsets[uVar12].offset].get_Current;
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar10);
      }
      pVVar13 = (VirtualInvokeData *)
                FUN_?(pIVar6,
                              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              ,0);
code_?:
      plVar14 = (longlong *)(*pVVar13->methodPtr)(pIVar6,pVVar13->method);
      if (plVar14 == (longlong *)0x0) goto code_?;
      lVar15 = *plVar14;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar11 * 0x10)
              == TypeInfo__RTG__IGizmoBehaviour) {
            puVar16 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 1) *
                       0x10 + 0x138 + lVar15);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar16 = (undefined8 *)FUN_?(plVar14,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar7 = (*(code *)*puVar16)(plVar14,puVar16[1]);
      if (cVar7 != '\0') {
        FUN_?(8,TypeInfo__RTG__IGizmoBehaviour,plVar14);
      }
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void TryActivateDragSession() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_TryActivateDragSession(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) &&
     (lVar1 = FUN_?(2,TypeInfo__RTG__IGizmoHandle,(this->fields)._hoveredHandle),
     lVar1 != 0)) {
    pGVar2 = (this->fields)._behaviours;
    if (pGVar2 == (GizmoBehaviourCollection *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar4 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (pGVar2,(MethodInfo *)0x0);
    do {
      do {
        if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        cVar5 = FUN_?(0);
        if (cVar5 == '\0') {
          if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,pIVar4);
          }
          if ((this->fields).PreDragBeginAttempt != (GizmoPreDragBeginAttemptHandler *)0x0) {
            pGVar6 = (this->fields).PreDragBeginAttempt;
            if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
            uVar7 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
            (*(pGVar6->fields)._._.invoke_impl)
                      ((pGVar6->fields)._._.method_code,this,uVar7,(pGVar6->fields)._._.method);
          }
          pGVar2 = (this->fields)._behaviours;
          if (pGVar2 == (GizmoBehaviourCollection *)0x0) goto code_?;
          pIVar4 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                              (pGVar2,(MethodInfo *)0x0);
          goto code_?;
        }
        if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        lVar1 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              );
        if (lVar1 == 0) goto code_?;
        cVar5 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar1);
      } while (cVar5 == '\0');
      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
      uVar7 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
      cVar5 = FUN_?(0xb,TypeInfo__RTG__IGizmoBehaviour,lVar1,uVar7);
    } while (cVar5 != '\0');
    if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable,pIVar4);
    }
  }
  return;
code_?:
  if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar5 != '\0') {
      if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        lVar1 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              );
        if (lVar1 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable,pIVar4);
    }
    if ((this->fields).PostDragBeginAttempt != (GizmoPostDragBeginAttemptHandler *)0x0) {
      pGVar8 = (this->fields).PostDragBeginAttempt;
      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
      uVar7 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
      (*(pGVar8->fields)._._.invoke_impl)
                ((pGVar8->fields)._._.method_code,this,uVar7,(pGVar8->fields)._._.method);
    }
    if (((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) &&
       (lVar1 = FUN_?(2,TypeInfo__RTG__IGizmoHandle), lVar1 != 0)) {
      cVar5 = FUN_?(0xb,TypeInfo__RTG__IGizmoDragSession,lVar1);
      if (cVar5 == '\0') {
        return;
      }
      if ((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) {
        pIVar9 = (IGizmoDragSession *)FUN_?(2,TypeInfo__RTG__IGizmoHandle);
        (this->fields)._activeDragSession = pIVar9;
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(this->fields)._activeDragSession >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        (this->fields)._dragInfo._isDragged = 1;
        if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0)
        goto code_?;
        iVar14 = FUN_?(1);
        (this->fields)._dragInfo._dragChannel = iVar14;
        (this->fields)._dragInfo._handleDimension = (this->fields)._hoverInfo._handleDimension;
        (this->fields)._dragInfo._handleId = (this->fields)._hoverInfo._handleId;
        fVar15 = (this->fields)._hoverInfo._hoverPoint.z;
        fVar16 = (this->fields)._hoverInfo._hoverPoint.y;
        (this->fields)._dragInfo._dragBeginPoint.x = (this->fields)._hoverInfo._hoverPoint.x;
        (this->fields)._dragInfo._dragBeginPoint.y = fVar16;
        (this->fields)._dragInfo._dragBeginPoint.z = fVar15;
        if ((this->fields).PreDragBegin != (GizmoPreDragBeginHandler *)0x0) {
          pGVar17 = (this->fields).PreDragBegin;
          (*(pGVar17->fields)._._.invoke_impl)
                    ((pGVar17->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
                     (pGVar17->fields)._._.method);
        }
        pGVar2 = (this->fields)._behaviours;
        if (pGVar2 == (GizmoBehaviourCollection *)0x0) goto code_?;
        pIVar4 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                            (pGVar2,(MethodInfo *)0x0);
        while( true ) {
          if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
          cVar5 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar5 == '\0') {
            if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              FUN_?(0,TypeInfo__System__IDisposable,pIVar4);
            }
            if ((this->fields).PostDragBegin == (GizmoPostDragBeginHandler *)0x0) {
              return;
            }
            pGVar18 = (this->fields).PostDragBegin;
            (*(pGVar18->fields)._._.invoke_impl)
                      ((pGVar18->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
                       (pGVar18->fields)._._.method);
            return;
          }
          if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar19 = pIVar4->klass;
          uVar20 = 0;
          uVar21._0_1_ = (pIVar19->_1).rank;
          uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
          if (uVar21 != 0) {
            uVar22 = uVar20;
            do {
              if (pIVar19->interfaceOffsets[uVar22].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                pVVar23 = &(&pIVar19->vtable)[pIVar19->interfaceOffsets[uVar22].offset].get_Current;
                goto code_?;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar21);
          }
          pVVar23 = (VirtualInvokeData *)
                    FUN_?(pIVar4,
                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                  ,0);
code_?:
          plVar24 = (longlong *)(*pVVar23->methodPtr)(pIVar4,pVVar23->method);
          if (plVar24 == (longlong *)0x0) goto code_?;
          lVar1 = *plVar24;
          if (*(ushort *)(lVar1 + 0x12e) != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)
                   (*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar25 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) +
                           1) * 0x10 + 0x138 + lVar1);
                goto code_?;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *(ushort *)(lVar1 + 0x12e));
          }
          puVar25 = (undefined8 *)FUN_?(plVar24,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar5 = (*(code *)*puVar25)(plVar24,puVar25[1]);
          if (cVar5 != '\0') {
            FUN_?(0xf,TypeInfo__RTG__IGizmoBehaviour,plVar24,
                          (this->fields)._dragInfo._handleId);
          }
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  goto code_?;
code_?:
  cVar5 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar1);
  if (cVar5 != '\0') {
    if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
    uVar7 = FUN_?(0,TypeInfo__RTG__IGizmoHandle);
    FUN_?(0xc,TypeInfo__RTG__IGizmoBehaviour,lVar1,uVar7);
  }
  goto code_?;
}


/* Void UpdateHandleHoverInfo_SystemCall(GizmoHoverInfo) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_UpdateHandleHoverInfo_SystemCall
               (Gizmo *this,GizmoHoverInfo *hoverInfo,MethodInfo *method)

{
  pGStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoBehaviour);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIStack_2 = (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0;
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  if ((this->fields)._dragInfo._isDragged != 0) {
    return;
  }
  bVar3 = (this->fields)._hoverInfo._isHovered;
  iVar4 = (this->fields)._hoverInfo._handleId;
  GizmoHoverInfo::GizmoHoverInfo_Reset(&(this->fields)._hoverInfo,(MethodInfo *)0x0);
  (this->fields)._hoveredHandle = (IGizmoHandle *)0x0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._hoveredHandle >> 0xc);
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
  if ((hoverInfo->_isHovered == 0) || (hoverInfo->_handleId == 0)) {
code_?:
    bVar9 = (this->fields)._hoverInfo._isHovered;
    if (bVar3 == 0) {
      if (bVar9 == 0) {
        return;
      }
      if ((this->fields).PreHoverEnter != (GizmoPreHoverEnterHandler *)0x0) {
        pGVar10 = (this->fields).PreHoverEnter;
        (*(pGVar10->fields)._._.invoke_impl)
                  ((pGVar10->fields)._._.method_code,this,(this->fields)._hoverInfo._handleId,
                   (pGVar10->fields)._._.method);
      }
      pGVar11 = (this->fields)._behaviours;
      if (pGVar11 != (GizmoBehaviourCollection *)0x0) {
        pIStack_2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                               (pGVar11,(MethodInfo *)0x0);
        uStack_12 = 0;
        ppIStack_13 = &pIStack_2;
        while (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar14 == '\0') {
            if (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              FUN_?(0,TypeInfo__System__IDisposable,pIStack_2);
            }
            goto code_?;
          }
          if (pIStack_2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
          lVar15 = FUN_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                );
          if (lVar15 == 0) goto code_?;
          cVar14 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar15);
          if (cVar14 != '\0') {
            FUN_?(0xd,TypeInfo__RTG__IGizmoBehaviour,lVar15,
                          (this->fields)._hoverInfo._handleId);
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (bVar9 == 0) {
      if ((this->fields).PreHoverExit != (GizmoPreHoverExitHandler *)0x0) {
        pGVar16 = (this->fields).PreHoverExit;
        (*(pGVar16->fields)._._.invoke_impl)
                  ((pGVar16->fields)._._.method_code,this,iVar4,(pGVar16->fields)._._.method);
      }
      pGVar11 = (this->fields)._behaviours;
      if (pGVar11 == (GizmoBehaviourCollection *)0x0) goto code_?;
      pIStack_2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar11,(MethodInfo *)0x0);
      pGStack_1 = (Gizmo *)0x0;
      ppIStack_17 = &pIStack_2;
      while (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar14 == '\0') {
          if (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,pIStack_2);
          }
          if ((this->fields).PostHoverExit == (GizmoPostHoverExitHandler *)0x0) {
            return;
          }
          pGVar18 = (this->fields).PostHoverExit;
          pcVar19 = (pGVar18->fields)._._.invoke_impl;
          pvVar20 = (pGVar18->fields)._._.method;
          goto code_?;
        }
        if (pIStack_2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        lVar15 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              );
        if (lVar15 == 0) goto code_?;
        cVar14 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar15);
        if (cVar14 != '\0') {
          FUN_?(0xe,TypeInfo__RTG__IGizmoBehaviour,lVar15,iVar4);
        }
      }
      goto code_?;
    }
    if (bVar9 == 0) {
      return;
    }
    if (iVar4 != (this->fields)._hoverInfo._handleId) {
      if ((this->fields).PreHoverExit != (GizmoPreHoverExitHandler *)0x0) {
        pGVar16 = (this->fields).PreHoverExit;
        (*(pGVar16->fields)._._.invoke_impl)
                  ((pGVar16->fields)._._.method_code,this,iVar4,(pGVar16->fields)._._.method);
      }
      pGVar11 = (this->fields)._behaviours;
      if (pGVar11 == (GizmoBehaviourCollection *)0x0) goto code_?;
      pIStack_2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar11,(MethodInfo *)0x0);
      uStack_12 = 0;
      ppIStack_13 = &pIStack_2;
      while (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar14 = FUN_?(0);
        if (cVar14 == '\0') {
          if (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,pIStack_2);
          }
          if ((this->fields).PostHoverExit != (GizmoPostHoverExitHandler *)0x0) {
            pGVar18 = (this->fields).PostHoverExit;
            (*(pGVar18->fields)._._.invoke_impl)
                      ((pGVar18->fields)._._.method_code,this,iVar4,(pGVar18->fields)._._.method);
          }
          goto code_?;
        }
        if (pIStack_2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        lVar15 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                              );
        if (lVar15 == 0) goto code_?;
        cVar14 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar15);
        if (cVar14 != '\0') {
          FUN_?(0xe,TypeInfo__RTG__IGizmoBehaviour,lVar15,iVar4);
        }
      }
      goto code_?;
    }
code_?:
    if ((this->fields).PreHoverEnter != (GizmoPreHoverEnterHandler *)0x0) {
      pGVar10 = (this->fields).PreHoverEnter;
      (*(pGVar10->fields)._._.invoke_impl)
                ((pGVar10->fields)._._.method_code,this,(this->fields)._hoverInfo._handleId,
                 (pGVar10->fields)._._.method);
    }
    pGVar11 = (this->fields)._behaviours;
    if (pGVar11 == (GizmoBehaviourCollection *)0x0) goto code_?;
    pIStack_2 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar11,(MethodInfo *)0x0);
    uStack_12 = 0;
    ppIStack_13 = &pIStack_2;
    while (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar14 == '\0') {
        if (pIStack_2 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,pIStack_2);
        }
code_?:
        if ((this->fields).PostHoverEnter == (GizmoPostHoverEnterHandler *)0x0) {
          return;
        }
        pGVar18 = (GizmoPostHoverExitHandler *)(this->fields).PostHoverEnter;
        pcVar19 = (pGVar18->fields)._._.invoke_impl;
        pvVar20 = (pGVar18->fields)._._.method;
        iVar4 = (this->fields)._hoverInfo._handleId;
code_?:
        (*pcVar19)((pGVar18->fields)._._.method_code,this,iVar4,pvVar20);
        return;
      }
      if (pIStack_2 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
      lVar15 = FUN_?(0,
                             TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                            );
      if (lVar15 == 0) goto code_?;
      cVar14 = FUN_?(1,TypeInfo__RTG__IGizmoBehaviour,lVar15);
      if (cVar14 != '\0') {
        FUN_?(0xd,TypeInfo__RTG__IGizmoBehaviour,lVar15,(this->fields)._hoverInfo._handleId)
        ;
      }
    }
  }
  else {
    (this->fields)._hoverInfo._isHovered = 1;
    (this->fields)._hoverInfo._handleId = hoverInfo->_handleId;
    fVar21 = (hoverInfo->_hoverPoint).y;
    (this->fields)._hoverInfo._hoverPoint.x = (hoverInfo->_hoverPoint).x;
    (this->fields)._hoverInfo._hoverPoint.y = fVar21;
    (this->fields)._hoverInfo._hoverPoint.z = (hoverInfo->_hoverPoint).z;
    this_00 = (this->fields)._handles;
    if (this_00 != (GizmoHandleCollection *)0x0) {
      pIVar22 = GizmoHandleCollection::GizmoHandleCollection_GetHandleById
                          (this_00,hoverInfo->_handleId,(MethodInfo *)0x0);
      (this->fields)._hoveredHandle = pIVar22;
      func_?(&(this->fields)._hoveredHandle);
      (this->fields)._hoverInfo._handleDimension = hoverInfo->_handleDimension;
      goto code_?;
    }
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Gizmo() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo__ctor(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoBehaviourCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandleCollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Priority);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  pGVar1 = (GizmoBehaviourCollection *)FUN_?(TypeInfo__RTG__GizmoBehaviourCollection);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_RTG_IGizmoBehaviour_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
  pvVar3 = MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_->klass->
            rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pIVar4 = (IGizmoBehaviour__Array *)FUN_?(pvVar3);
  (pLVar2->fields)._items = pIVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (pGVar1->fields)._behaviours = pLVar2;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&pGVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (this->fields)._behaviours = pGVar1;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._behaviours >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pPVar11 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar9 = iRam_? != 0;
  (this->fields)._genericHoverPriority = pPVar11;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields)._genericHoverPriority >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pPVar11 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar9 = iRam_? != 0;
  (this->fields)._hoverPriority3D = pPVar11;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields)._hoverPriority3D >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pPVar11 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar9 = iRam_? != 0;
  (this->fields)._hoverPriority2D = pPVar11;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields)._hoverPriority2D >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  this_00 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(this_00,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  (this->fields)._transform = this_00;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pGVar12 = (GizmoHandleCollection *)FUN_?(TypeInfo__RTG__GizmoHandleCollection);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_RTG_IGizmoHandle_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
  bVar9 = iRam_? != 0;
  (pGVar12->fields)._handles = this_01;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(pGVar12->fields)._handles >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
            );
  iVar10 = iRam_?;
  (pGVar12->fields)._idToHandle = (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)this_02;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(pGVar12->fields)._idToHandle >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (pGVar12->fields)._gizmo = this;
  iVar13 = 0;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&pGVar12->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar13 = iRam_?;
    } while (!bVar9);
  }
  (this->fields)._handles = pGVar12;
  if (iVar13 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._handles >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  (this->fields)._hoverInfo._isHovered = 0;
  bVar9 = cRam_? == '\0';
  (this->fields)._hoverInfo._handleId = 0;
  (this->fields)._hoverInfo._handleDimension = 0;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar15 = (pVVar14->zeroVector).y;
  fVar16 = (pVVar14->zeroVector).z;
  (this->fields)._hoverInfo._hoverPoint.x = (pVVar14->zeroVector).x;
  (this->fields)._hoverInfo._hoverPoint.y = fVar15;
  (this->fields)._hoverInfo._hoverPoint.z = fVar16;
  cVar17 = cRam_?;
  (this->fields)._dragInfo._isDragged = 0;
  (this->fields)._dragInfo._handleId = 0;
  if (cVar17 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar17 = '\x01';
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar15 = (pVVar14->zeroVector).y;
  fVar16 = (pVVar14->zeroVector).z;
  (this->fields)._dragInfo._dragBeginPoint.x = (pVVar14->zeroVector).x;
  (this->fields)._dragInfo._dragBeginPoint.y = fVar15;
  (this->fields)._dragInfo._dragBeginPoint.z = fVar16;
  (this->fields)._dragInfo._dragChannel = 0;
  (this->fields)._dragInfo._handleDimension = 0;
  if (cVar17 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  bVar9 = cRam_? == '\0';
  uVar18 = (pVVar14->zeroVector).x;
  uVar19 = (pVVar14->zeroVector).y;
  fVar16 = (pVVar14->zeroVector).z;
  (this->fields)._dragInfo._relativeOffset.x = (float)uVar18;
  (this->fields)._dragInfo._relativeOffset.y = (float)uVar19;
  (this->fields)._dragInfo._totalOffset.x = (float)uVar18;
  (this->fields)._dragInfo._totalOffset.y = (float)uVar19;
  (this->fields)._dragInfo._relativeOffset.z = fVar16;
  (this->fields)._dragInfo._totalOffset.z = fVar16;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar20 = TypeInfo__UnityEngine__Quaternion->static_fields;
  bVar9 = cRam_? == '\0';
  fVar16 = (pQVar20->identityQuaternion).x;
  fVar15 = (pQVar20->identityQuaternion).y;
  fVar21 = (pQVar20->identityQuaternion).z;
  fVar22 = (pQVar20->identityQuaternion).w;
  (this->fields)._dragInfo._relativeRotation.x = fVar16;
  (this->fields)._dragInfo._relativeRotation.y = fVar15;
  (this->fields)._dragInfo._relativeRotation.z = fVar21;
  (this->fields)._dragInfo._relativeRotation.w = fVar22;
  (this->fields)._dragInfo._totalRotation.x = fVar16;
  (this->fields)._dragInfo._totalRotation.y = fVar15;
  (this->fields)._dragInfo._totalRotation.z = fVar21;
  (this->fields)._dragInfo._totalRotation.w = fVar22;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar23 = (pVVar14->oneVector).x;
  uVar24 = (pVVar14->oneVector).y;
  fVar16 = (pVVar14->oneVector).z;
  (this->fields)._dragInfo._relativeScale.x = (float)uVar23;
  (this->fields)._dragInfo._relativeScale.y = (float)uVar24;
  (this->fields)._dragInfo._totalScale.x = (float)uVar23;
  (this->fields)._dragInfo._totalScale.y = (float)uVar24;
  (this->fields)._dragInfo._relativeScale.z = fVar16;
  (this->fields)._dragInfo._totalScale.z = fVar16;
  return;
}


/* Void add_OffsetDragAxisModify(GizmoOffsetDragAxisModifyHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_OffsetDragAxisModify
               (Gizmo *this,GizmoOffsetDragAxisModifyHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).OffsetDragAxisModify;
  a = (this->fields).OffsetDragAxisModify;
  do {
    pGVar2 = (GizmoOffsetDragAxisModifyHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoOffsetDragAxisModifyHandler *)0x0;
    if (pGVar2 != (GizmoOffsetDragAxisModifyHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoOffsetDragAxisModifyHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostDisabled(GizmoPostDisabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDisabled
               (Gizmo *this,GizmoPostDisabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDisabled;
  a = (this->fields).PostDisabled;
  do {
    pGVar2 = (GizmoPostDisabledHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDisabledHandler *)0x0;
    if (pGVar2 != (GizmoPostDisabledHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDisabledHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDisabledHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostDragBegin(GizmoPostDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragBegin
               (Gizmo *this,GizmoPostDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBegin;
  a = (this->fields).PostDragBegin;
  do {
    pGVar2 = (GizmoPostDragBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragBeginHandler *)0x0;
    if (pGVar2 != (GizmoPostDragBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostDragBeginAttempt(GizmoPostDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragBeginAttempt
               (Gizmo *this,GizmoPostDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBeginAttempt;
  a = (this->fields).PostDragBeginAttempt;
  do {
    pGVar2 = (GizmoPostDragBeginAttemptHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragBeginAttemptHandler *)0x0;
    if (pGVar2 != (GizmoPostDragBeginAttemptHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragBeginAttemptHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostDragEnd(GizmoPostDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragEnd
               (Gizmo *this,GizmoPostDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragEnd;
  a = (this->fields).PostDragEnd;
  do {
    pGVar2 = (GizmoPostDragEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragEndHandler *)0x0;
    if (pGVar2 != (GizmoPostDragEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostDragUpdate(GizmoPostDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragUpdate
               (Gizmo *this,GizmoPostDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragUpdate;
  a = (this->fields).PostDragUpdate;
  do {
    pGVar2 = (GizmoPostDragUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragUpdateHandler *)0x0;
    if (pGVar2 != (GizmoPostDragUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostEnabled(GizmoPostEnabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostEnabled
               (Gizmo *this,GizmoPostEnabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  a = (this->fields).PostEnabled;
  do {
    pGVar2 = (GizmoPostEnabledHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostEnabledHandler *)0x0;
    if (pGVar2 != (GizmoPostEnabledHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostEnabledHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostEnabledHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = pGVar1->PostEnabled;
    bVar5 = a == pGVar2;
    if (bVar5) {
      pGVar1->PostEnabled = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostHandlePicked(GizmoPostHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHandlePicked
               (Gizmo *this,GizmoPostHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHandlePickedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHandlePicked;
  a = (this->fields).PostHandlePicked;
  do {
    pGVar2 = (GizmoPostHandlePickedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHandlePickedHandler *)0x0;
    if (pGVar2 != (GizmoPostHandlePickedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHandlePickedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostHoverEnter(GizmoPostHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHoverEnter
               (Gizmo *this,GizmoPostHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHoverEnterHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverEnter;
  a = (this->fields).PostHoverEnter;
  do {
    pGVar2 = (GizmoPostHoverEnterHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHoverEnterHandler *)0x0;
    if (pGVar2 != (GizmoPostHoverEnterHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHoverEnterHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostHoverExit(GizmoPostHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHoverExit
               (Gizmo *this,GizmoPostHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHoverExitHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverExit;
  a = (this->fields).PostHoverExit;
  do {
    pGVar2 = (GizmoPostHoverExitHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHoverExitHandler *)0x0;
    if (pGVar2 != (GizmoPostHoverExitHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHoverExitHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PostUpdateEnd(GizmoPostUpdateEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostUpdateEnd
               (Gizmo *this,GizmoPostUpdateEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostUpdateEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostUpdateEnd;
  a = (this->fields).PostUpdateEnd;
  do {
    pGVar2 = (GizmoPostUpdateEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostUpdateEndHandler *)0x0;
    if (pGVar2 != (GizmoPostUpdateEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostUpdateEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreDragBegin(GizmoPreDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragBegin
               (Gizmo *this,GizmoPreDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBegin;
  a = (this->fields).PreDragBegin;
  do {
    pGVar2 = (GizmoPreDragBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragBeginHandler *)0x0;
    if (pGVar2 != (GizmoPreDragBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreDragBeginAttempt(GizmoPreDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragBeginAttempt
               (Gizmo *this,GizmoPreDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBeginAttempt;
  a = (this->fields).PreDragBeginAttempt;
  do {
    pGVar2 = (GizmoPreDragBeginAttemptHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragBeginAttemptHandler *)0x0;
    if (pGVar2 != (GizmoPreDragBeginAttemptHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragBeginAttemptHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreDragEnd(GizmoPreDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragEnd
               (Gizmo *this,GizmoPreDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragEnd;
  a = (this->fields).PreDragEnd;
  do {
    pGVar2 = (GizmoPreDragEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragEndHandler *)0x0;
    if (pGVar2 != (GizmoPreDragEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreDragUpdate(GizmoPreDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragUpdate
               (Gizmo *this,GizmoPreDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragUpdate;
  a = (this->fields).PreDragUpdate;
  do {
    pGVar2 = (GizmoPreDragUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragUpdateHandler *)0x0;
    if (pGVar2 != (GizmoPreDragUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreHandlePicked(GizmoPreHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHandlePicked
               (Gizmo *this,GizmoPreHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHandlePicked;
  a = (this->fields).PreHandlePicked;
  do {
    pGVar2 = (GizmoPreHandlePickedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHandlePickedHandler *)0x0;
    if (pGVar2 != (GizmoPreHandlePickedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHandlePickedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreHoverEnter(GizmoPreHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHoverEnter
               (Gizmo *this,GizmoPreHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverEnter;
  a = (this->fields).PreHoverEnter;
  do {
    pGVar2 = (GizmoPreHoverEnterHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHoverEnterHandler *)0x0;
    if (pGVar2 != (GizmoPreHoverEnterHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHoverEnterHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreHoverExit(GizmoPreHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHoverExit
               (Gizmo *this,GizmoPreHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverExit;
  a = (this->fields).PreHoverExit;
  do {
    pGVar2 = (GizmoPreHoverExitHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHoverExitHandler *)0x0;
    if (pGVar2 != (GizmoPreHoverExitHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHoverExitHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Void add_PreUpdateBegin(GizmoPreUpdateBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreUpdateBegin
               (Gizmo *this,GizmoPreUpdateBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreUpdateBegin;
  a = (this->fields).PreUpdateBegin;
  do {
    pGVar2 = (GizmoPreUpdateBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreUpdateBeginHandler *)0x0;
    if (pGVar2 != (GizmoPreUpdateBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreUpdateBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = a == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* GizmoDragChannel get_ActiveDragChannel() */

GizmoDragChannel__Enum
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_ActiveDragChannel(Gizmo *this,MethodInfo *method)

{
  return (this->fields)._dragInfo._dragChannel;
}


/* Vector3 get_DragBeginPoint() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_DragBeginPoint
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._dragBeginPoint.z;
  fVar2 = (this->fields)._dragInfo._dragBeginPoint.y;
  __return_storage_ptr__->x = (this->fields)._dragInfo._dragBeginPoint.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* GizmoDragInfo get_DragInfo() */

GizmoDragInfo *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_DragInfo
          (GizmoDragInfo *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  uVar1 = *(undefined3 *)&(this->fields)._dragInfo.field_0x1;
  iVar2 = (this->fields)._dragInfo._handleId;
  fVar3 = (this->fields)._dragInfo._dragBeginPoint.x;
  fVar4 = (this->fields)._dragInfo._dragBeginPoint.y;
  fVar5 = (this->fields)._dragInfo._relativeScale.z;
  uVar6 = *(undefined8 *)&(this->fields)._dragInfo._dragBeginPoint.z;
  iVar7 = (this->fields)._dragInfo._handleDimension;
  fVar8 = (this->fields)._dragInfo._totalOffset.x;
  __return_storage_ptr__->_isDragged = (this->fields)._dragInfo._isDragged;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  __return_storage_ptr__->_handleId = iVar2;
  (__return_storage_ptr__->_dragBeginPoint).x = fVar3;
  (__return_storage_ptr__->_dragBeginPoint).y = fVar4;
  fVar3 = (this->fields)._dragInfo._totalOffset.y;
  fVar4 = (this->fields)._dragInfo._totalOffset.z;
  fVar9 = (this->fields)._dragInfo._totalRotation.x;
  fVar10 = (this->fields)._dragInfo._totalRotation.y;
  *(undefined8 *)&(__return_storage_ptr__->_dragBeginPoint).z = uVar6;
  __return_storage_ptr__->_handleDimension = iVar7;
  (__return_storage_ptr__->_totalOffset).x = fVar8;
  fVar8 = (this->fields)._dragInfo._totalRotation.z;
  fVar11 = (this->fields)._dragInfo._totalRotation.w;
  fVar12 = (this->fields)._dragInfo._totalScale.x;
  fVar13 = (this->fields)._dragInfo._totalScale.y;
  (__return_storage_ptr__->_totalOffset).y = fVar3;
  (__return_storage_ptr__->_totalOffset).z = fVar4;
  (__return_storage_ptr__->_totalRotation).x = fVar9;
  (__return_storage_ptr__->_totalRotation).y = fVar10;
  uVar6 = *(undefined8 *)&(this->fields)._dragInfo._totalScale.z;
  fVar3 = (this->fields)._dragInfo._relativeOffset.y;
  fVar4 = (this->fields)._dragInfo._relativeOffset.z;
  (__return_storage_ptr__->_totalRotation).z = fVar8;
  (__return_storage_ptr__->_totalRotation).w = fVar11;
  (__return_storage_ptr__->_totalScale).x = fVar12;
  (__return_storage_ptr__->_totalScale).y = fVar13;
  fVar8 = (this->fields)._dragInfo._relativeRotation.x;
  fVar9 = (this->fields)._dragInfo._relativeRotation.y;
  fVar10 = (this->fields)._dragInfo._relativeRotation.z;
  fVar11 = (this->fields)._dragInfo._relativeRotation.w;
  *(undefined8 *)&(__return_storage_ptr__->_totalScale).z = uVar6;
  (__return_storage_ptr__->_relativeOffset).y = fVar3;
  (__return_storage_ptr__->_relativeOffset).z = fVar4;
  fVar3 = (this->fields)._dragInfo._relativeScale.x;
  fVar4 = (this->fields)._dragInfo._relativeScale.y;
  (__return_storage_ptr__->_relativeRotation).x = fVar8;
  (__return_storage_ptr__->_relativeRotation).y = fVar9;
  (__return_storage_ptr__->_relativeRotation).z = fVar10;
  (__return_storage_ptr__->_relativeRotation).w = fVar11;
  (__return_storage_ptr__->_relativeScale).x = fVar3;
  (__return_storage_ptr__->_relativeScale).y = fVar4;
  (__return_storage_ptr__->_relativeScale).z = fVar5;
  return __return_storage_ptr__;
}


/* Camera get_FocusCamera() */

Camera * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_FocusCamera(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    return (Camera *)pOVar1[4].monitor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* GizmoHoverInfo get_HoverInfo() */

GizmoHoverInfo *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_HoverInfo
          (GizmoHoverInfo *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  uVar1 = *(undefined3 *)&(this->fields)._hoverInfo.field_0x1;
  iVar2 = (this->fields)._hoverInfo._handleId;
  iVar3 = (this->fields)._hoverInfo._handleDimension;
  fVar4 = (this->fields)._hoverInfo._hoverPoint.x;
  fVar5 = (this->fields)._hoverInfo._hoverPoint.y;
  fVar6 = (this->fields)._hoverInfo._hoverPoint.z;
  __return_storage_ptr__->_isHovered = (this->fields)._hoverInfo._isHovered;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  __return_storage_ptr__->_handleId = iVar2;
  __return_storage_ptr__->_handleDimension = iVar3;
  (__return_storage_ptr__->_hoverPoint).x = fVar4;
  (__return_storage_ptr__->_hoverPoint).y = fVar5;
  (__return_storage_ptr__->_hoverPoint).z = fVar6;
  return __return_storage_ptr__;
}


/* Vector3 get_HoverPoint() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_HoverPoint
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._hoverInfo._hoverPoint.z;
  fVar2 = (this->fields)._hoverInfo._hoverPoint.y;
  __return_storage_ptr__->x = (this->fields)._hoverInfo._hoverPoint.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Int32 get_NumHandles() */

int32_t Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_NumHandles(Gizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__)
      ;
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pGVar1->fields)._handles;
    if (pLVar2 != (List_1_RTG_IGizmoHandle_ *)0x0) {
      return (pLVar2->fields)._size;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._relativeOffset.z;
  fVar2 = (this->fields)._dragInfo._relativeOffset.y;
  __return_storage_ptr__->x = (this->fields)._dragInfo._relativeOffset.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Quaternion get_RelativeDragRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_RelativeDragRotation
          (Quaternion *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._relativeRotation.y;
  fVar2 = (this->fields)._dragInfo._relativeRotation.z;
  fVar3 = (this->fields)._dragInfo._relativeRotation.w;
  __return_storage_ptr__->x = (this->fields)._dragInfo._relativeRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_RelativeDragScale() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_RelativeDragScale
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._relativeScale.z;
  fVar2 = (this->fields)._dragInfo._relativeScale.y;
  __return_storage_ptr__->x = (this->fields)._dragInfo._relativeScale.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._totalOffset.z;
  fVar2 = (this->fields)._dragInfo._totalOffset.y;
  __return_storage_ptr__->x = (this->fields)._dragInfo._totalOffset.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Quaternion get_TotalDragRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_TotalDragRotation
          (Quaternion *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._totalRotation.y;
  fVar2 = (this->fields)._dragInfo._totalRotation.z;
  fVar3 = (this->fields)._dragInfo._totalRotation.w;
  __return_storage_ptr__->x = (this->fields)._dragInfo._totalRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_TotalDragScale() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_TotalDragScale
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._totalScale.z;
  fVar2 = (this->fields)._dragInfo._totalScale.y;
  __return_storage_ptr__->x = (this->fields)._dragInfo._totalScale.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void remove_OffsetDragAxisModify(GizmoOffsetDragAxisModifyHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_OffsetDragAxisModify
               (Gizmo *this,GizmoOffsetDragAxisModifyHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).OffsetDragAxisModify;
  source = (this->fields).OffsetDragAxisModify;
  do {
    pGVar2 = (GizmoOffsetDragAxisModifyHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoOffsetDragAxisModifyHandler *)0x0;
    if (pGVar2 != (GizmoOffsetDragAxisModifyHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoOffsetDragAxisModifyHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostDisabled(GizmoPostDisabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDisabled
               (Gizmo *this,GizmoPostDisabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDisabled;
  source = (this->fields).PostDisabled;
  do {
    pGVar2 = (GizmoPostDisabledHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDisabledHandler *)0x0;
    if (pGVar2 != (GizmoPostDisabledHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDisabledHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDisabledHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostDragBegin(GizmoPostDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragBegin
               (Gizmo *this,GizmoPostDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBegin;
  source = (this->fields).PostDragBegin;
  do {
    pGVar2 = (GizmoPostDragBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragBeginHandler *)0x0;
    if (pGVar2 != (GizmoPostDragBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostDragBeginAttempt(GizmoPostDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragBeginAttempt
               (Gizmo *this,GizmoPostDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBeginAttempt;
  source = (this->fields).PostDragBeginAttempt;
  do {
    pGVar2 = (GizmoPostDragBeginAttemptHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragBeginAttemptHandler *)0x0;
    if (pGVar2 != (GizmoPostDragBeginAttemptHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragBeginAttemptHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostDragEnd(GizmoPostDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragEnd
               (Gizmo *this,GizmoPostDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragEnd;
  source = (this->fields).PostDragEnd;
  do {
    pGVar2 = (GizmoPostDragEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragEndHandler *)0x0;
    if (pGVar2 != (GizmoPostDragEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostDragUpdate(GizmoPostDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragUpdate
               (Gizmo *this,GizmoPostDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostDragUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragUpdate;
  source = (this->fields).PostDragUpdate;
  do {
    pGVar2 = (GizmoPostDragUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostDragUpdateHandler *)0x0;
    if (pGVar2 != (GizmoPostDragUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostDragUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostEnabled(GizmoPostEnabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostEnabled
               (Gizmo *this,GizmoPostEnabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  source = (this->fields).PostEnabled;
  do {
    pGVar2 = (GizmoPostEnabledHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostEnabledHandler *)0x0;
    if (pGVar2 != (GizmoPostEnabledHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostEnabledHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostEnabledHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = pGVar1->PostEnabled;
    bVar5 = source == pGVar2;
    if (bVar5) {
      pGVar1->PostEnabled = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostHandlePicked(GizmoPostHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHandlePicked
               (Gizmo *this,GizmoPostHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHandlePickedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHandlePicked;
  source = (this->fields).PostHandlePicked;
  do {
    pGVar2 = (GizmoPostHandlePickedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHandlePickedHandler *)0x0;
    if (pGVar2 != (GizmoPostHandlePickedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHandlePickedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostHoverEnter(GizmoPostHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHoverEnter
               (Gizmo *this,GizmoPostHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHoverEnterHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverEnter;
  source = (this->fields).PostHoverEnter;
  do {
    pGVar2 = (GizmoPostHoverEnterHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHoverEnterHandler *)0x0;
    if (pGVar2 != (GizmoPostHoverEnterHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHoverEnterHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostHoverExit(GizmoPostHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHoverExit
               (Gizmo *this,GizmoPostHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostHoverExitHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverExit;
  source = (this->fields).PostHoverExit;
  do {
    pGVar2 = (GizmoPostHoverExitHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostHoverExitHandler *)0x0;
    if (pGVar2 != (GizmoPostHoverExitHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostHoverExitHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PostUpdateEnd(GizmoPostUpdateEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostUpdateEnd
               (Gizmo *this,GizmoPostUpdateEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPostUpdateEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostUpdateEnd;
  source = (this->fields).PostUpdateEnd;
  do {
    pGVar2 = (GizmoPostUpdateEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPostUpdateEndHandler *)0x0;
    if (pGVar2 != (GizmoPostUpdateEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPostUpdateEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreDragBegin(GizmoPreDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragBegin
               (Gizmo *this,GizmoPreDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBegin;
  source = (this->fields).PreDragBegin;
  do {
    pGVar2 = (GizmoPreDragBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragBeginHandler *)0x0;
    if (pGVar2 != (GizmoPreDragBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreDragBeginAttempt(GizmoPreDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragBeginAttempt
               (Gizmo *this,GizmoPreDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBeginAttempt;
  source = (this->fields).PreDragBeginAttempt;
  do {
    pGVar2 = (GizmoPreDragBeginAttemptHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragBeginAttemptHandler *)0x0;
    if (pGVar2 != (GizmoPreDragBeginAttemptHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragBeginAttemptHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreDragEnd(GizmoPreDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragEnd
               (Gizmo *this,GizmoPreDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragEnd;
  source = (this->fields).PreDragEnd;
  do {
    pGVar2 = (GizmoPreDragEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragEndHandler *)0x0;
    if (pGVar2 != (GizmoPreDragEndHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragEndHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreDragUpdate(GizmoPreDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragUpdate
               (Gizmo *this,GizmoPreDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragUpdate;
  source = (this->fields).PreDragUpdate;
  do {
    pGVar2 = (GizmoPreDragUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreDragUpdateHandler *)0x0;
    if (pGVar2 != (GizmoPreDragUpdateHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreDragUpdateHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreHandlePicked(GizmoPreHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHandlePicked
               (Gizmo *this,GizmoPreHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHandlePicked;
  source = (this->fields).PreHandlePicked;
  do {
    pGVar2 = (GizmoPreHandlePickedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHandlePickedHandler *)0x0;
    if (pGVar2 != (GizmoPreHandlePickedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHandlePickedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreHoverEnter(GizmoPreHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHoverEnter
               (Gizmo *this,GizmoPreHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverEnter;
  source = (this->fields).PreHoverEnter;
  do {
    pGVar2 = (GizmoPreHoverEnterHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHoverEnterHandler *)0x0;
    if (pGVar2 != (GizmoPreHoverEnterHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHoverEnterHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreHoverExit(GizmoPreHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHoverExit
               (Gizmo *this,GizmoPreHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverExit;
  source = (this->fields).PreHoverExit;
  do {
    pGVar2 = (GizmoPreHoverExitHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreHoverExitHandler *)0x0;
    if (pGVar2 != (GizmoPreHoverExitHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreHoverExitHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void remove_PreUpdateBegin(GizmoPreUpdateBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreUpdateBegin
               (Gizmo *this,GizmoPreUpdateBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreUpdateBegin;
  source = (this->fields).PreUpdateBegin;
  do {
    pGVar2 = (GizmoPreUpdateBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoPreUpdateBeginHandler *)0x0;
    if (pGVar2 != (GizmoPreUpdateBeginHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoPreUpdateBeginHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = *ppGVar1;
    bVar5 = source == pGVar2;
    if (bVar5) {
      *ppGVar1 = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}



/* Boolean AddBehaviour(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::Gizmo::Gizmo_AddBehaviour
               (Gizmo *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeRef__RTG__MoveGizmo);
    func_?(&TypeInfo__RTG__MoveGizmo);
    func_?(&TypeRef__RTG__ObjectTransformGizmo);
    func_?(&TypeInfo__RTG__ObjectTransformGizmo);
    func_?(&TypeRef__RTG__RotationGizmo);
    func_?(&TypeInfo__RTG__RotationGizmo);
    func_?(&TypeRef__RTG__ScaleGizmo);
    func_?(&TypeInfo__RTG__ScaleGizmo);
    func_?(&TypeRef__RTG__SceneGizmo);
    func_?(&TypeInfo__RTG__SceneGizmo);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__RTG__UniversalGizmo);
    func_?(&TypeInfo__RTG__UniversalGizmo);
    cRam_? = '\x01';
  }
  if ((behaviour == (IGizmoBehaviour *)0x0) ||
     (iVar1 = func_?(0,TypeInfo__RTG__IGizmoBehaviour,behaviour), iVar1 != 0)) {
    return 0;
  }
  pGVar2 = this;
  func_?(&stack0xfffffff8,this);
  pIVar3 = behaviour->klass;
  uVar4 = 0;
  sVar5._0_1_ = (pIVar3->_1).rank;
  sVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (sVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IGizmoBehaviour) {
        ppMVar6 = &(&(behaviour->klass->vtable).Init_SystemCall)
                    [behaviour->klass->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
      uVar7._0_1_ = (behaviour->klass->_1).rank;
      uVar7._1_1_ = (behaviour->klass->_1).minimumAlignment;
    } while (uVar4 < uVar7);
  }
  ppMVar6 = (MethodInfo **)func_?(behaviour,TypeInfo__RTG__IGizmoBehaviour,2);
code_?:
  (*(code *)*ppMVar6)(behaviour,pGVar2,ppMVar6[1]);
  pGVar8 = (this->fields)._behaviours;
  if (pGVar8 != (GizmoBehaviourCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                     );
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                     );
      cRam_? = '\x01';
    }
    pLVar9 = (List_1_System_Object_ *)(pGVar8->fields)._behaviours;
    if (pLVar9 != (List_1_System_Object_ *)0x0) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__Contains
                         (pLVar9,(Object *)behaviour,
                          MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                         );
      if (bVar10 != 0) {
        return 0;
      }
      pLVar9 = (List_1_System_Object_ *)(pGVar8->fields)._behaviours;
      if (pLVar9 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar9,(Object *)behaviour,
                   MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                  );
        lhs = mscorlib.dll::System::Object::Object_GetType((Object *)behaviour,(MethodInfo *)0x0);
        pIVar11 = TypeRef__RTG__MoveGizmo;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
        bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_EnumEquals
                           ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0);
        pIVar11 = TypeRef__RTG__RotationGizmo;
        if (bVar10 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
          bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                   UnsafeUtility_EnumEquals
                             ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0);
          pIVar11 = TypeRef__RTG__ScaleGizmo;
          if (bVar10 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
            bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_EnumEquals
                               ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0);
            pIVar11 = TypeRef__RTG__UniversalGizmo;
            if (bVar10 == 0) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
              bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                       UnsafeUtility::UnsafeUtility_EnumEquals
                                 ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0);
              pIVar11 = TypeRef__RTG__SceneGizmo;
              if (bVar10 == 0) {
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                    ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
                bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                         UnsafeUtility::UnsafeUtility_EnumEquals
                                   ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0)
                ;
                pIVar11 = TypeRef__RTG__ObjectTransformGizmo;
                if (bVar10 == 0) {
                  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar11,(MethodInfo *)0x0);
                  bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                           UnsafeUtility::UnsafeUtility_EnumEquals
                                     ((Int32Enum__Enum)lhs,(Int32Enum__Enum)pTVar12,
                                      (MethodInfo *)0x0);
                  if (bVar10 == 0) goto code_?;
                  pOVar13 = (ObjectTransformGizmo *)func_?();
                  (this->fields)._objectTransformGizmo = pOVar13;
                  pSStack14 = (SceneGizmo__Class *)TypeInfo__RTG__ObjectTransformGizmo;
                }
                else {
                  pSVar15 = (SceneGizmo *)func_?();
                  (this->fields)._sceneGizmo = pSVar15;
                  pSStack14 = TypeInfo__RTG__SceneGizmo;
                }
              }
              else {
                pUVar16 = (UniversalGizmo *)func_?();
                (this->fields)._universalGizmo = pUVar16;
                pSStack14 = (SceneGizmo__Class *)TypeInfo__RTG__UniversalGizmo;
              }
            }
            else {
              pSVar17 = (ScaleGizmo *)func_?();
              (this->fields)._scaleGizmo = pSVar17;
              pSStack14 = (SceneGizmo__Class *)TypeInfo__RTG__ScaleGizmo;
            }
          }
          else {
            pRVar18 = (RotationGizmo *)func_?();
            (this->fields)._rotationGizmo = pRVar18;
            pSStack14 = (SceneGizmo__Class *)TypeInfo__RTG__RotationGizmo;
          }
          pIStack19 = behaviour;
          func_?();
          func_?();
        }
        else {
          bVar20 = (TypeInfo__RTG__MoveGizmo->_1).naturalAligment;
          if (((behaviour->klass->_1).naturalAligment < bVar20) ||
             ((MoveGizmo__Class *)(behaviour->klass->_1).typeHierarchy[bVar20 - 1] !=
              TypeInfo__RTG__MoveGizmo)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          pMVar22 = (MoveGizmo *)0x0;
          if (bVar21) {
            pMVar22 = (MoveGizmo *)behaviour;
          }
          (this->fields)._moveGizmo = pMVar22;
          func_?();
        }
code_?:
        pSStack14 = (SceneGizmo__Class *)0x4;
        func_?();
        pIStack19 = behaviour;
        func_?();
        return 1;
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  bVar10 = (*pcVar23)();
  return bVar10;
}


/* Object AddBehaviour[Object]() */

Object * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_AddBehaviour_1(Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  behaviour = (IGizmoBehaviour *)
              mscorlib.dll::System::Activator::Activator_CreateInstance_11
                        (((method->field7_0x1c).rgctx_data)->method);
  Gizmo_AddBehaviour(this,behaviour,(MethodInfo *)0x0);
  return (Object *)behaviour;
}


/* GizmoHandle CreateHandle(Int32) */

GizmoHandle *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_CreateHandle(Gizmo *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoHandle);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pGVar1->fields)._idToHandle;
    if (pDVar2 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        return (GizmoHandle *)0x0;
      }
      pGVar4 = (GizmoHandle *)func_?(TypeInfo__RTG__GizmoHandle);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__
                       );
        func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>);
        func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>);
        func_?(&TypeInfo__RTG__Priority);
        cRam_? = '\x01';
      }
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__RTG__Priority);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar5,(MethodInfo *)0x0);
      ppPVar6 = &(pGVar4->fields)._genericHoverPriority;
      *ppPVar6 = (Priority *)pUVar5;
      func_?(ppPVar6,pUVar5);
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__RTG__Priority);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar5,(MethodInfo *)0x0);
      ppPVar6 = &(pGVar4->fields)._hoverPriority2D;
      *ppPVar6 = (Priority *)pUVar5;
      func_?(ppPVar6,pUVar5);
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__RTG__Priority);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar5,(MethodInfo *)0x0);
      ppPVar6 = &(pGVar4->fields)._hoverPriority3D;
      *ppPVar6 = (Priority *)pUVar5;
      func_?(ppPVar6,pUVar5);
      this_01 = (List_1_RTG_GizmoHandleShape3D_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>
                               );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__);
      (pGVar4->fields)._3DShapes = this_01;
      func_?();
      pLVar7 = TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>;
      this_02 = (List_1_RTG_GizmoHandleShape2D_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
      method_00 = (MethodInfo *)&(pGVar4->fields)._2DShapes;
      *(List_1_RTG_GizmoHandleShape2D_ **)method_00 = this_02;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pGVar4,ExceptionArgument__Enum_obj,method_00);
      ppGVar8 = &(pGVar4->fields)._gizmo;
      (pGVar4->fields)._id = (int32_t)pLVar7;
      *ppGVar8 = this;
      func_?(ppGVar8,this);
      if (*ppGVar8 != (Gizmo *)0x0) {
        pGVar9 = ((*ppGVar8)->fields)._transform;
        ppGVar10 = &(pGVar4->fields)._zoomFactorTransform;
        *ppGVar10 = pGVar9;
        func_?(ppGVar10,pGVar9);
        (pGVar4->fields)._Is2DHoverable_k__BackingField = 1;
        (pGVar4->fields)._Is3DHoverable_k__BackingField = 1;
        (pGVar4->fields)._Is2DVisible_k__BackingField = 1;
        (pGVar4->fields)._Is3DVisible_k__BackingField = 1;
        pGVar1 = (this->fields)._handles;
        if (pGVar1 != (GizmoHandleCollection *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                           );
            func_?(&TypeInfo__RTG__IGizmoHandle);
            func_?(&
                            MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_
                           );
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                           );
            func_?(&TypeInfo__RTG__IGizmoHandle);
            cRam_? = '\x01';
          }
          pDVar2 = (pGVar1->fields)._idToHandle;
          iVar11 = func_?(0,TypeInfo__RTG__IGizmoHandle,pGVar4);
          if (pDVar2 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,iVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                              );
            if ((bVar3 != 0) ||
               (pGVar12 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,pGVar4),
               pGVar12 != (pGVar1->fields)._gizmo)) {
              return pGVar4;
            }
            this_00 = (List_1_System_Object_ *)(pGVar1->fields)._handles;
            if (this_00 != (List_1_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        (this_00,(Object *)pGVar4,
                         MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_
                        );
              pDVar2 = (pGVar1->fields)._idToHandle;
              iVar11 = func_?(0,TypeInfo__RTG__IGizmoHandle,pGVar4);
              if (pDVar2 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar11,
                           (Object *)pGVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                          );
                return pGVar4;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pGVar4 = (GizmoHandle *)(*pcVar13)();
  return pGVar4;
}


/* Void EndDragSession() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_EndDragSession(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeInfo__RTG__IGizmoDragSession);
    cRam_? = '\x01';
  }
  pIVar4 = (this->fields)._activeDragSession;
  if (pIVar4 == (IGizmoDragSession *)0x0) {
code_?:
    ppIVar5 = &(this->fields)._activeDragSession;
    *ppIVar5 = (IGizmoDragSession *)0x0;
    func_?(ppIVar5,0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?(0xd,TypeInfo__RTG__IGizmoDragSession,pIVar4);
  (this->fields)._dragInfo._isDragged = 0;
  pGVar6 = (this->fields).PreDragEnd;
  if (pGVar6 != (GizmoPreDragEndHandler *)0x0) {
    (*(pGVar6->fields)._._.invoke_impl)
              ((pGVar6->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar6->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar7);
        }
        uStack_1 = 0xffffffff;
        iVar9 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        pGVar10 = (this->fields).PostDragEnd;
        if (pGVar10 != (GizmoPostDragEndHandler *)0x0) {
          (*(pGVar10->fields)._._.invoke_impl)
                    ((pGVar10->fields)._._.method_code,this,iVar9,(pGVar10->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar11 = pIVar7->klass;
      uVar12 = 0;
      uVar13._0_1_ = (pIVar11->_1).rank;
      uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
      if (uVar13 != 0) {
        do {
          if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar14 = &(&pIVar7->klass->vtable)[pIVar7->klass->interfaceOffsets[uVar12].offset].
                        get_Current.method;
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      ppMVar14 = (MethodInfo **)
                 func_?(pIVar7,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                 ,0);
code_?:
      piVar15 = (int *)(*(code *)*ppMVar14)(pIVar7,ppMVar14[1]);
      if (piVar15 == (int *)0x0) break;
      uVar12 = 0;
      uVar13 = *(ushort *)(*piVar15 + 0xb6);
      if (uVar13 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar15 + 0x58) + (uint)uVar12 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar16 = (undefined4 *)
                      (*piVar15 +
                      (*(int *)(*(int *)(*piVar15 + 0x58) + 4 + (uint)uVar12 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      puVar16 = (undefined4 *)func_?(piVar15,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar8 = (*(code *)*puVar16)(piVar15,puVar16[1]);
      if (cVar8 != '\0') {
        func_?(0x11,TypeInfo__RTG__IGizmoBehaviour,piVar15,
                        (this->fields)._dragInfo._handleId);
      }
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* List`1[RTG.GizmoHandleHoverData] GetAllHandlesHoverData(Ray) */

List_1_RTG_GizmoHandleHoverData_ *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetAllHandlesHoverData
          (Gizmo *this,Ray hoverRay,MethodInfo *method)

{
  this_00 = (this->fields)._handles;
  if (this_00 != (GizmoHandleCollection *)0x0) {
    pLVar1 = GizmoHandleCollection::GizmoHandleCollection_GetAllHandlesHoverData
                       (this_00,hoverRay,(MethodInfo *)0x0);
    return pLVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_RTG_GizmoHandleHoverData_ *)(*pcVar3)();
  return pLVar1;
}


/* List`1[System.Object] GetBehavioursOfType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetBehavioursOfType(Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pLVar1 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType_1
                       (this_00,((method->field7_0x1c).rgctx_data)->method);
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_System_Object_ *)(*pcVar2)();
  return pLVar1;
}


/* IGizmoBehaviour GetFirstBehaviourOfType(Type) */

IGizmoBehaviour *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetFirstBehaviourOfType
          (Gizmo *this,Type *behaviourType,MethodInfo *method)

{
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
                        (this_00,behaviourType,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_01->fields)._size == 0) {
        return (IGizmoBehaviour *)0x0;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,0,
                         MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                        );
      return (IGizmoBehaviour *)RVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IGizmoBehaviour *)(*pcVar2)();
  return pIVar3;
}


/* Object GetFirstBehaviourOfType[Object]() */

Object * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetFirstBehaviourOfType_1
                   (Gizmo *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pOVar1 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetFirstBehaviourOfType_1
                       (this_00,((method->field7_0x1c).rgctx_data)->method);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* IGizmoHandle GetHandleById_SystemCall(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetHandleById_SystemCall
          (Gizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pGVar1->fields)._idToHandle;
    if (this_00 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
      pIVar2 = (IGizmoHandle *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,handleId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                         );
      return pIVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (IGizmoHandle *)(*pcVar3)();
  return pIVar2;
}


/* Camera GetWorkCamera() */

Camera * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_GetWorkCamera(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar2 != (Object *)0x0) {
    if (pOVar2[3].monitor == (MonitorData *)0x2) {
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (pOVar2 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
        if (pOVar2 != (Object *)0x0) {
          return (Camera *)pOVar2[2].monitor;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (iRam_? == 0) {
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
        if (pOVar2 != (Object *)0x0) {
          return (Camera *)pOVar2[4].monitor;
        }
      }
      else if (*(int *)(iRam_? + 0x20) != 0) {
        return *(Camera **)(*(int *)(iRam_? + 0x20) + 0x10);
      }
    }
  }
  uVar3 = func_?(&ppMStack_1);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Camera *)(*pcVar4)();
  return pCVar5;
}


/* Void HandleInputDeviceEvents_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_HandleInputDeviceEvents_SystemCall
               (Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled != 0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar1 == (Object *)0x0) || (pOVar2 = pOVar1[2].klass, pOVar2 == (Object__Class *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar4 = func_?(10,TypeInfo__RTG__IInputDevice,pOVar2,0);
    if (cVar4 == '\0') {
      cVar4 = func_?(0xb,TypeInfo__RTG__IInputDevice,pOVar2);
      if (cVar4 != '\0') {
        Gizmo_EndDragSession(this,(MethodInfo *)0x0);
      }
    }
    else {
      Gizmo_OnInputDevicePickButtonDown(this,(MethodInfo *)0x0);
    }
    cVar4 = func_?(0xc,TypeInfo__RTG__IInputDevice,pOVar2);
    if (cVar4 != '\0') {
      Gizmo_OnInputDeviceMoved(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnGUI_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnGUI_SystemCall(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar4 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar4);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar4);
        }
        goto code_?;
      }
      if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar6 = pIVar4->klass;
      uVar7 = 0;
      uVar8._0_1_ = (pIVar6->_1).rank;
      uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar8 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar9 = &(&pIVar4->klass->vtable)[pIVar4->klass->interfaceOffsets[uVar7].offset].
                       get_Current.method;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      ppMVar9 = (MethodInfo **)
                func_?(pIVar4,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
      piVar10 = (int *)(*(code *)*ppMVar9)(pIVar4,ppMVar9[1]);
      if (piVar10 == (int *)0x0) break;
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar10 + 0xb6);
      if (uVar8 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar10 + 0x58) + (uint)uVar7 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar11 = (undefined4 *)
                     (*piVar10 +
                     (*(int *)(*(int *)(*piVar10 + 0x58) + 4 + (uint)uVar7 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar11 = (undefined4 *)func_?(piVar10,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar5 = (*(code *)*puVar11)(piVar10,puVar11[1]);
      if (cVar5 != '\0') {
        func_?(0x14,TypeInfo__RTG__IGizmoBehaviour,piVar10);
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnInputDeviceMoved() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDeviceMoved(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?();
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeInfo__RTG__IGizmoDragSession);
    func_?(&TypeInfo__RTG__IGizmoHandle);
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar6 == (Object *)0x0) || (pOVar6[2].klass == (Object__Class *)0x0)) goto code_?;
  cVar7 = func_?();
  if ((cVar7 != '\0') && ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0)) {
    cVar7 = func_?(0,TypeInfo__RTG__IGizmoDragSession);
    if (cVar7 != '\0') {
      if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0) goto code_?;
      cVar7 = func_?(0xc,TypeInfo__RTG__IGizmoDragSession);
      if (cVar7 == '\0') goto code_?;
      if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
        puVar8 = (undefined8 *)func_?();
        uVar9 = *puVar8;
        fVar10 = *(float *)(puVar8 + 1);
        (this->fields)._dragInfo._totalOffset.x = (float)(int)uVar9;
        (this->fields)._dragInfo._totalOffset.y = (float)(int)((ulonglong)uVar9 >> 0x20);
        (this->fields)._dragInfo._totalOffset.z = fVar10;
        if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
          puVar8 = (undefined8 *)func_?();
          uVar9 = *puVar8;
          fVar10 = *(float *)(puVar8 + 1);
          (this->fields)._dragInfo._relativeOffset.x = (float)(int)uVar9;
          (this->fields)._dragInfo._relativeOffset.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          (this->fields)._dragInfo._relativeOffset.z = fVar10;
          if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
            pfVar11 = (float *)func_?();
            fVar10 = pfVar11[1];
            fVar12 = pfVar11[2];
            fVar13 = pfVar11[3];
            (this->fields)._dragInfo._totalRotation.x = *pfVar11;
            (this->fields)._dragInfo._totalRotation.y = fVar10;
            (this->fields)._dragInfo._totalRotation.z = fVar12;
            (this->fields)._dragInfo._totalRotation.w = fVar13;
            if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
              puVar8 = (undefined8 *)func_?();
              uVar9 = *puVar8;
              fVar10 = *(float *)(puVar8 + 1);
              (this->fields)._dragInfo._totalScale.x = (float)(int)uVar9;
              (this->fields)._dragInfo._totalScale.y = (float)(int)((ulonglong)uVar9 >> 0x20);
              (this->fields)._dragInfo._totalScale.z = fVar10;
              if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                pfVar11 = (float *)func_?();
                fVar10 = pfVar11[1];
                fVar12 = pfVar11[2];
                fVar13 = pfVar11[3];
                (this->fields)._dragInfo._relativeRotation.x = *pfVar11;
                (this->fields)._dragInfo._relativeRotation.y = fVar10;
                (this->fields)._dragInfo._relativeRotation.z = fVar12;
                (this->fields)._dragInfo._relativeRotation.w = fVar13;
                if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                  puVar8 = (undefined8 *)func_?();
                  uVar9 = *puVar8;
                  fVar10 = *(float *)(puVar8 + 1);
                  (this->fields)._dragInfo._relativeScale.x = (float)(int)uVar9;
                  (this->fields)._dragInfo._relativeScale.y = (float)(int)((ulonglong)uVar9 >> 0x20)
                  ;
                  (this->fields)._dragInfo._relativeScale.z = fVar10;
                  if ((this->fields)._activeDragSession != (IGizmoDragSession *)0x0) {
                    pfVar11 = &fStack_14;
                    uVar15 = 2;
                    pIVar16 = TypeInfo__RTG__IGizmoDragSession;
                    puVar8 = (undefined8 *)func_?();
                    uStack_17 = *puVar8;
                    fStack_18 = *(float *)(puVar8 + 1);
                    fVar19 = (float10)func_?(&uStack_17,0,pfVar11,uVar15,pIVar16);
                    fStack_20 = (float)fVar19;
                    if ((fStack_20 != _UNK_?) &&
                       ((this->fields).OffsetDragAxisModify !=
                        (GizmoOffsetDragAxisModifyHandler *)0x0)) {
                      if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0)
                      goto code_?;
                      pfVar11 = &fStack_14;
                      uVar15 = 5;
                      pIVar16 = TypeInfo__RTG__IGizmoDragSession;
                      puVar8 = (undefined8 *)func_?();
                      uStack_17 = *puVar8;
                      fStack_18 = *(float *)(puVar8 + 1);
                      puVar8 = (undefined8 *)
                               func_?(auStack_21,&uStack_17,0,pfVar11,uVar15,pIVar16);
                      pGVar22 = (this->fields).OffsetDragAxisModify;
                      fStack_20 = *(float *)(puVar8 + 1);
                      fStack_23 = (float)*puVar8;
                      ppIStack_24 = (IEnumerator_1_RTG_IGizmoBehaviour_ **)
                                    ((ulonglong)*puVar8 >> 0x20);
                      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0)
                      goto code_?;
                      uVar15 = func_?(0,TypeInfo__RTG__IGizmoHandle);
                      if (pGVar22 == (GizmoOffsetDragAxisModifyHandler *)0x0) goto code_?;
                      puVar8 = (undefined8 *)
                               (*(pGVar22->fields)._._.invoke_impl)
                                         (auStack_21,(pGVar22->fields)._._.method_code,this,
                                          CONCAT44(ppIStack_24,fStack_23),fStack_20,uVar15);
                      ppIStack_24 = *(IEnumerator_1_RTG_IGizmoBehaviour_ ***)(puVar8 + 1);
                      fStack_14 = (float)*puVar8;
                      fStack_23 = (float)((ulonglong)*puVar8 >> 0x20);
                      if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0)
                      goto code_?;
                      puVar5 = auStack_21;
                      uVar15 = 5;
                      pIVar16 = TypeInfo__RTG__IGizmoDragSession;
                      puVar8 = (undefined8 *)func_?();
                      uStack_17 = *puVar8;
                      fStack_18 = *(float *)(puVar8 + 1);
                      fVar19 = (float10)func_?(&uStack_17,0,puVar5,uVar15,pIVar16);
                      fStack_20 = (float)fVar19;
                      fStack_18 = (float)ppIStack_24 * fStack_20;
                      (this->fields)._dragInfo._relativeOffset.x = fStack_14 * fStack_20;
                      (this->fields)._dragInfo._relativeOffset.y = fStack_23 * fStack_20;
                      (this->fields)._dragInfo._relativeOffset.z = fStack_18;
                      if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0)
                      goto code_?;
                      puVar8 = (undefined8 *)func_?();
                      uStack_17 = *puVar8;
                      fStack_18 = *(float *)(puVar8 + 1);
                      if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0)
                      goto code_?;
                      puVar8 = (undefined8 *)func_?();
                      ppIStack_24 = *(IEnumerator_1_RTG_IGizmoBehaviour_ ***)(puVar8 + 1);
                      fStack_14 = (float)*puVar8;
                      fStack_23 = (float)((ulonglong)*puVar8 >> 0x20);
                      fVar10 = uStack_17._4_4_ - fStack_23;
                      fVar12 = (float)uStack_17 - fStack_14;
                      uStack_17._0_4_ = (this->fields)._dragInfo._relativeOffset.x;
                      uStack_17._4_4_ = (this->fields)._dragInfo._relativeOffset.y;
                      fStack_18 = (this->fields)._dragInfo._relativeOffset.z +
                                  (fStack_18 - (float)ppIStack_24);
                      (this->fields)._dragInfo._totalOffset.x = (float)uStack_17 + fVar12;
                      (this->fields)._dragInfo._totalOffset.y = uStack_17._4_4_ + fVar10;
                      (this->fields)._dragInfo._totalOffset.z = fStack_18;
                    }
                    pGVar25 = (this->fields).PreDragUpdate;
                    if (pGVar25 != (GizmoPreDragUpdateHandler *)0x0) {
                      (*(pGVar25->fields)._._.invoke_impl)();
                    }
                    this_00 = (this->fields)._behaviours;
                    if (this_00 != (GizmoBehaviourCollection *)0x0) {
                      pIStack_26 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                                             (this_00,(MethodInfo *)0x0);
                      ppIStack_24 = &pIStack_26;
                      fStack_23 = 0.0;
                      uStack_1 = 1;
                      while (pIStack_26 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                        cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                        if (cVar7 == '\0') {
                          uStack_1 = 0xffffffff;
                          if (pIStack_26 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                            func_?(0,TypeInfo__System__IDisposable);
                          }
                          uStack_1 = 0xffffffff;
                          pGVar27 = (this->fields).PostDragUpdate;
                          if (pGVar27 != (GizmoPostDragUpdateHandler *)0x0) {
                            (*(pGVar27->fields)._._.invoke_impl)();
                          }
                          goto code_?;
                        }
                        if (pIStack_26 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
                        fStack_20 = (float)func_?(0,
                                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                                  );
                        if (fStack_20 == 0.0) break;
                        cVar7 = func_?(1,TypeInfo__RTG__IGizmoBehaviour);
                        if (cVar7 != '\0') {
                          func_?();
                        }
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
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void OnInputDevicePickButtonDown() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDevicePickButtonDown
               (Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  pIVar4 = (this->fields)._hoveredHandle;
  if (pIVar4 == (IGizmoHandle *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pGVar5 = (this->fields).PreHandlePicked;
  if (pGVar5 != (GizmoPreHandlePickedHandler *)0x0) {
    uVar6 = func_?(0,TypeInfo__RTG__IGizmoHandle,pIVar4);
    (*(pGVar5->fields)._._.invoke_impl)
              ((pGVar5->fields)._._.method_code,this,uVar6,(pGVar5->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar7);
        }
        uStack_1 = 0xffffffff;
        pGVar9 = (this->fields).PostHandlePicked;
        if (pGVar9 != (GizmoPostHandlePickedHandler *)0x0) {
          pIVar4 = (this->fields)._hoveredHandle;
          if (pIVar4 == (IGizmoHandle *)0x0) break;
          uVar6 = func_?(0,TypeInfo__RTG__IGizmoHandle,pIVar4);
          (*(pGVar9->fields)._._.invoke_impl)
                    ((pGVar9->fields)._._.method_code,this,uVar6,(pGVar9->fields)._._.method);
        }
        Gizmo_TryActivateDragSession(this,(MethodInfo *)0x0);
        goto code_?;
      }
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar10 = pIVar7->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pIVar10->_1).rank;
      uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar13 = &(&pIVar7->klass->vtable)[pIVar7->klass->interfaceOffsets[uVar11].offset].
                        get_Current.method;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      ppMVar13 = (MethodInfo **)
                 func_?(pIVar7,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                 ,0);
code_?:
      piVar14 = (int *)(*(code *)*ppMVar13)(pIVar7,ppMVar13[1]);
      if (piVar14 == (int *)0x0) break;
      uVar11 = 0;
      uVar12 = *(ushort *)(*piVar14 + 0xb6);
      if (uVar12 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar14 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar15 = (undefined4 *)
                      (*piVar14 +
                      (*(int *)(*(int *)(*piVar14 + 0x58) + 4 + (uint)uVar11 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar15 = (undefined4 *)func_?(piVar14,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar8 = (*(code *)*puVar15)(piVar14,puVar15[1]);
      if (cVar8 != '\0') {
        pIVar4 = (this->fields)._hoveredHandle;
        if (pIVar4 == (IGizmoHandle *)0x0) break;
        uVar6 = func_?(0,TypeInfo__RTG__IGizmoHandle,pIVar4);
        func_?(10,TypeInfo__RTG__IGizmoBehaviour,piVar14,uVar6);
      }
    }
  }
  uVar6 = func_?();
  func_?(uVar6);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnInputDevicePickButtonUp() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnInputDevicePickButtonUp
               (Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeInfo__RTG__IGizmoDragSession);
    cRam_? = '\x01';
  }
  pIVar4 = (this->fields)._activeDragSession;
  if (pIVar4 == (IGizmoDragSession *)0x0) {
code_?:
    ppIVar5 = &(this->fields)._activeDragSession;
    *ppIVar5 = (IGizmoDragSession *)0x0;
    func_?(ppIVar5,0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?(0xd,TypeInfo__RTG__IGizmoDragSession,pIVar4);
  (this->fields)._dragInfo._isDragged = 0;
  pGVar6 = (this->fields).PreDragEnd;
  if (pGVar6 != (GizmoPreDragEndHandler *)0x0) {
    (*(pGVar6->fields)._._.invoke_impl)
              ((pGVar6->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar6->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar7);
        }
        uStack_1 = 0xffffffff;
        iVar9 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        pGVar10 = (this->fields).PostDragEnd;
        if (pGVar10 != (GizmoPostDragEndHandler *)0x0) {
          (*(pGVar10->fields)._._.invoke_impl)
                    ((pGVar10->fields)._._.method_code,this,iVar9,(pGVar10->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar11 = pIVar7->klass;
      uVar12 = 0;
      uVar13._0_1_ = (pIVar11->_1).rank;
      uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
      if (uVar13 != 0) {
        do {
          if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar14 = &(&pIVar7->klass->vtable)[pIVar7->klass->interfaceOffsets[uVar12].offset].
                        get_Current.method;
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      ppMVar14 = (MethodInfo **)
                 func_?(pIVar7,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                 ,0);
code_?:
      piVar15 = (int *)(*(code *)*ppMVar14)(pIVar7,ppMVar14[1]);
      if (piVar15 == (int *)0x0) break;
      uVar12 = 0;
      uVar13 = *(ushort *)(*piVar15 + 0xb6);
      if (uVar13 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar15 + 0x58) + (uint)uVar12 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar16 = (undefined4 *)
                      (*piVar15 +
                      (*(int *)(*(int *)(*piVar15 + 0x58) + 4 + (uint)uVar12 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      puVar16 = (undefined4 *)func_?(piVar15,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar8 = (*(code *)*puVar16)(piVar15,puVar16[1]);
      if (cVar8 != '\0') {
        func_?(0x11,TypeInfo__RTG__IGizmoBehaviour,piVar15,
                        (this->fields)._dragInfo._handleId);
      }
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnUpdateBegin_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnUpdateBegin_SystemCall(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pGVar4 = (this->fields).PreUpdateBegin;
  if (pGVar4 != (GizmoPreUpdateBeginHandler *)0x0) {
    (*(pGVar4->fields)._._.invoke_impl)
              ((pGVar4->fields)._._.method_code,this,(pGVar4->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar5 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar5 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar5);
        }
        goto code_?;
      }
      if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar7 = pIVar5->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar7->_1).rank;
      uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar10 = &(&pIVar5->klass->vtable)[pIVar5->klass->interfaceOffsets[uVar8].offset].
                       get_Current.method;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      ppMVar10 = (MethodInfo **)
                func_?(pIVar5,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
      piVar11 = (int *)(*(code *)*ppMVar10)(pIVar5,ppMVar10[1]);
      if (piVar11 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar11 + 0xb6);
      if (uVar9 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar11 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar12 = (undefined4 *)
                     (*piVar11 +
                     (*(int *)(*(int *)(*piVar11 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar12 = (undefined4 *)func_?(piVar11,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar6 = (*(code *)*puVar12)(piVar11,puVar12[1]);
      if (cVar6 != '\0') {
        func_?(0x12,TypeInfo__RTG__IGizmoBehaviour,piVar11);
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnUpdateEnd_SystemCall() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_OnUpdateEnd_SystemCall(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar4 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar4);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar4 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar4);
        }
        uStack_1 = 0xffffffff;
        pGVar6 = (this->fields).PostUpdateEnd;
        if (pGVar6 != (GizmoPostUpdateEndHandler *)0x0) {
          (*(pGVar6->fields)._._.invoke_impl)
                    ((pGVar6->fields)._._.method_code,this,(pGVar6->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar4 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar7 = pIVar4->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar7->_1).rank;
      uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar10 = &(&pIVar4->klass->vtable)[pIVar4->klass->interfaceOffsets[uVar8].offset].
                       get_Current.method;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      ppMVar10 = (MethodInfo **)
                func_?(pIVar4,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
      piVar11 = (int *)(*(code *)*ppMVar10)(pIVar4,ppMVar10[1]);
      if (piVar11 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar11 + 0xb6);
      if (uVar9 != 0) {
        do {
          if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar11 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__RTG__IGizmoBehaviour) {
            puVar12 = (undefined4 *)
                     (*piVar11 +
                     (*(int *)(*(int *)(*piVar11 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar12 = (undefined4 *)func_?(piVar11,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
      cVar5 = (*(code *)*puVar12)(piVar11,puVar12[1]);
      if (cVar5 != '\0') {
        func_?(0x13,TypeInfo__RTG__IGizmoBehaviour,piVar11);
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean RemoveBehaviour(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::Gizmo::Gizmo_RemoveBehaviour
               (Gizmo *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (behaviour == (IGizmoBehaviour *)0x0) {
    return 0;
  }
  ppUVar1 = (UniversalGizmo **)&(this->fields)._moveGizmo;
  if (((((MoveGizmo *)behaviour == (this->fields)._moveGizmo) ||
       (ppUVar1 = (UniversalGizmo **)&(this->fields)._rotationGizmo,
       (RotationGizmo *)behaviour == (this->fields)._rotationGizmo)) ||
      (ppUVar1 = (UniversalGizmo **)&(this->fields)._scaleGizmo,
      (ScaleGizmo *)behaviour == (this->fields)._scaleGizmo)) ||
     (((ppUVar1 = &(this->fields)._universalGizmo,
       (UniversalGizmo *)behaviour == (this->fields)._universalGizmo ||
       (ppUVar1 = (UniversalGizmo **)&(this->fields)._sceneGizmo,
       (SceneGizmo *)behaviour == (this->fields)._sceneGizmo)) ||
      (ppUVar1 = (UniversalGizmo **)&(this->fields)._objectTransformGizmo,
      (ObjectTransformGizmo *)behaviour == (this->fields)._objectTransformGizmo)))) {
    *ppUVar1 = (UniversalGizmo *)0x0;
    func_?(ppUVar1,0);
  }
  pGVar2 = (this->fields)._behaviours;
  if (pGVar2 != (GizmoBehaviourCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                     );
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Object_ *)(pGVar2->fields)._behaviours;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Remove
                        (this_00,(Object *)behaviour,
                         MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                        );
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void Render_SystemCall(Camera, Plane[]) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_Render_SystemCall
               (Gizmo *this,Camera *camera,Plane__Array *worldFrustumPlanes,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) goto code_?;
  pGVar4 = (this->fields)._handles;
  if (pGVar4 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar5 = (pGVar4->fields)._handles;
    if (pLVar5 != (List_1_RTG_IGizmoHandle_ *)0x0) {
      if ((pLVar5->fields)._size == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
      }
      this_01 = (RTGizmosEngine *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (this_01 != (RTGizmosEngine *)0x0) {
        bVar6 = RTGizmosEngine::RTGizmosEngine_IsSceneGizmoCamera(this_01,camera,(MethodInfo *)0x0);
        pSVar7 = (this->fields)._sceneGizmo;
        bVar8 = 0;
        if (pSVar7 == (SceneGizmo *)0x0) {
          bVar8 = bVar6;
        }
        if ((bVar8 != 0) || ((pSVar7 != (SceneGizmo *)0x0 && (bVar6 == 0)))) goto code_?;
        this_00 = (this->fields)._behaviours;
        if (this_00 != (GizmoBehaviourCollection *)0x0) {
          pIVar9 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (this_00,(MethodInfo *)0x0);
          uStack_1 = 1;
          while (pIVar9 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            cVar10 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar9);
            if (cVar10 == '\0') {
              uStack_1 = 0xffffffff;
              if (pIVar9 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,pIVar9);
              }
              goto code_?;
            }
            if (pIVar9 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
            iVar11 = func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,pIVar9);
            if (iVar11 == 0) break;
            cVar10 = func_?(1,TypeInfo__RTG__IGizmoBehaviour,iVar11);
            if (cVar10 != '\0') {
              func_?(0x15,TypeInfo__RTG__IGizmoBehaviour,iVar11,camera);
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_SetEnabled(Gizmo *this,bool enabled,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    cRam_? = '\x01';
  }
  if (enabled == (this->fields)._isEnabled) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (enabled == 0) {
    Gizmo_EndDragSession(this,(MethodInfo *)0x0);
    GizmoHoverInfo::GizmoHoverInfo_Reset(&(this->fields)._hoverInfo,(MethodInfo *)0x0);
    ppIVar4 = &(this->fields)._hoveredHandle;
    *ppIVar4 = (IGizmoHandle *)0x0;
    func_?(ppIVar4,0);
    pGVar5 = (this->fields)._behaviours;
    (this->fields)._isEnabled = 0;
    if (pGVar5 != (GizmoBehaviourCollection *)0x0) {
      pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar5,(MethodInfo *)0x0);
      uStack_1 = 1;
      while( true ) {
        if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,pIVar6);
          }
          pGVar8 = (GizmoPostEnabledHandler *)(this->fields).PostDisabled;
          goto code_?;
        }
        if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        pIVar9 = pIVar6->klass;
        uVar10 = 0;
        uVar11._0_1_ = (pIVar9->_1).rank;
        uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar11 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
              ppMVar12 = &(&pIVar6->klass->vtable)[pIVar6->klass->interfaceOffsets[uVar10].offset].
                         get_Current.method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        ppMVar12 = (MethodInfo **)
                  func_?(pIVar6,
                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                  ,0);
code_?:
        piVar13 = (int *)(*(code *)*ppMVar12)(pIVar6,ppMVar12[1]);
        if (piVar13 == (int *)0x0) break;
        uVar10 = 0;
        uVar11 = *(ushort *)(*piVar13 + 0xb6);
        if (uVar11 != 0) {
          do {
            if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar13 + 0x58) + (uint)uVar10 * 8) ==
                TypeInfo__RTG__IGizmoBehaviour) {
              puVar14 = (undefined4 *)
                       (*piVar13 +
                       (*(int *)(*(int *)(*piVar13 + 0x58) + 4 + (uint)uVar10 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        puVar14 = (undefined4 *)func_?(piVar13,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
        cVar7 = (*(code *)*puVar14)(piVar13,puVar14[1]);
        if (cVar7 != '\0') {
          func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar13);
        }
      }
    }
  }
  else {
    pGVar5 = (this->fields)._behaviours;
    (this->fields)._isEnabled = 1;
    if (pGVar5 != (GizmoBehaviourCollection *)0x0) {
      pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar5,(MethodInfo *)0x0);
      uStack_1 = 4;
      while( true ) {
        if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,pIVar6);
          }
          pGVar8 = (this->fields).PostEnabled;
code_?:
          uStack_1 = 0xffffffff;
          if (pGVar8 != (GizmoPostEnabledHandler *)0x0) {
            (*(pGVar8->fields)._._.invoke_impl)
                      ((pGVar8->fields)._._.method_code,this,(pGVar8->fields)._._.method);
          }
          goto code_?;
        }
        if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        pIVar9 = pIVar6->klass;
        uVar11 = 0;
        uVar10._0_1_ = (pIVar9->_1).rank;
        uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar11].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
              ppMVar12 = &(&pIVar6->klass->vtable)[pIVar6->klass->interfaceOffsets[uVar11].offset].
                         get_Current.method;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
        ppMVar12 = (MethodInfo **)
                  func_?(pIVar6,
                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                  ,0);
code_?:
        piVar13 = (int *)(*(code *)*ppMVar12)(pIVar6,ppMVar12[1]);
        if (piVar13 == (int *)0x0) break;
        uVar10 = 0;
        uVar11 = *(ushort *)(*piVar13 + 0xb6);
        if (uVar11 != 0) {
          do {
            if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar13 + 0x58) + (uint)uVar10 * 8) ==
                TypeInfo__RTG__IGizmoBehaviour) {
              puVar14 = (undefined4 *)
                       (*piVar13 +
                       (*(int *)(*(int *)(*piVar13 + 0x58) + 4 + (uint)uVar10 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        puVar14 = (undefined4 *)func_?(piVar13,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
        cVar7 = (*(code *)*puVar14)(piVar13,puVar14[1]);
        if (cVar7 != '\0') {
          func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar13);
        }
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetForceRefresh(Boolean) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_SetForceRefresh
               (Gizmo *this,bool forceRefresh,MethodInfo *method)

{
  (this->fields)._forceRefresh = forceRefresh;
  return;
}


/* Void TryActivateDragSession() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_TryActivateDragSession(Gizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    func_?(&TypeInfo__RTG__IGizmoDragSession);
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  pIVar4 = (this->fields)._hoveredHandle;
  if ((pIVar4 != (IGizmoHandle *)0x0) &&
     (iVar5 = func_?(2,TypeInfo__RTG__IGizmoHandle,pIVar4), iVar5 != 0)) {
    pGVar6 = (this->fields)._behaviours;
    if (pGVar6 == (GizmoBehaviourCollection *)0x0) goto code_?;
    pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (pGVar6,(MethodInfo *)0x0);
    uStack_1 = 1;
    do {
      do {
        if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
        cVar8 = func_?(0);
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0);
          }
          uStack_1 = 0xffffffff;
          pGVar9 = (this->fields).PreDragBeginAttempt;
          if (pGVar9 != (GizmoPreDragBeginAttemptHandler *)0x0) {
            if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
            uVar10 = func_?(0);
            (*(pGVar9->fields)._._.invoke_impl)
                      ((pGVar9->fields)._._.method_code,this,uVar10,(pGVar9->fields)._._.method);
          }
          pGVar6 = (this->fields)._behaviours;
          if (pGVar6 == (GizmoBehaviourCollection *)0x0) goto code_?;
          pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                              (pGVar6,(MethodInfo *)0x0);
          uStack_1 = 4;
          goto code_?;
        }
        if ((pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) goto code_?;
        cVar8 = func_?(1);
      } while (cVar8 == '\0');
      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
      func_?(0);
      cVar8 = func_?(0xb,TypeInfo__RTG__IGizmoBehaviour);
    } while (cVar8 != '\0');
    uStack_1 = 0xffffffff;
    if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      func_?(0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
code_?:
  if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    cVar8 = func_?(0);
    if (cVar8 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        func_?(0);
      }
      uStack_1 = 0xffffffff;
      pGVar11 = (this->fields).PostDragBeginAttempt;
      if (pGVar11 != (GizmoPostDragBeginAttemptHandler *)0x0) {
        if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
        uVar10 = func_?(0);
        (*(pGVar11->fields)._._.invoke_impl)
                  ((pGVar11->fields)._._.method_code,this,uVar10,(pGVar11->fields)._._.method);
      }
      if (((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) &&
         (iVar5 = func_?(2), iVar5 != 0)) {
        cVar8 = func_?(0xb);
        if (cVar8 == '\0') goto code_?;
        if ((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) {
          pIVar12 = (IGizmoDragSession *)func_?(2);
          ppIVar13 = &(this->fields)._activeDragSession;
          *ppIVar13 = pIVar12;
          func_?(ppIVar13,pIVar12);
          pIVar12 = *ppIVar13;
          (this->fields)._dragInfo._isDragged = 1;
          if (pIVar12 != (IGizmoDragSession *)0x0) {
            iVar14 = func_?(1);
            (this->fields)._dragInfo._dragChannel = iVar14;
            (this->fields)._dragInfo._handleDimension = (this->fields)._hoverInfo._handleDimension;
            (this->fields)._dragInfo._handleId = (this->fields)._hoverInfo._handleId;
            fVar15 = (this->fields)._hoverInfo._hoverPoint.y;
            fVar16 = (this->fields)._hoverInfo._hoverPoint.z;
            (this->fields)._dragInfo._dragBeginPoint.x = (this->fields)._hoverInfo._hoverPoint.x;
            (this->fields)._dragInfo._dragBeginPoint.y = fVar15;
            (this->fields)._dragInfo._dragBeginPoint.z = fVar16;
            pGVar17 = (this->fields).PreDragBegin;
            if (pGVar17 != (GizmoPreDragBeginHandler *)0x0) {
              (*(pGVar17->fields)._._.invoke_impl)((pGVar17->fields)._._.method_code,this);
            }
            pGVar6 = (this->fields)._behaviours;
            if (pGVar6 != (GizmoBehaviourCollection *)0x0) {
              pIVar7 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                                  (pGVar6,(MethodInfo *)0x0);
              uStack_1 = 7;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    if ((pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
       (iVar5 = func_?(0), iVar5 == 0)) goto code_?;
    cVar8 = func_?(1);
    if (cVar8 != '\0') {
      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
      func_?(0);
      func_?(0xc,TypeInfo__RTG__IGizmoBehaviour);
    }
    goto code_?;
  }
  goto code_?;
code_?:
  if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    cVar8 = func_?(0);
    if (cVar8 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIVar7 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        func_?(0);
      }
      uStack_1 = 0xffffffff;
      pGVar18 = (this->fields).PostDragBegin;
      if (pGVar18 != (GizmoPostDragBeginHandler *)0x0) {
        (*(pGVar18->fields)._._.invoke_impl)((pGVar18->fields)._._.method_code,this);
      }
      goto code_?;
    }
    if (pIVar7 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
    pIVar19 = pIVar7->klass;
    uVar20 = 0;
    uVar21._0_1_ = (pIVar19->_1).rank;
    uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
    if (uVar21 != 0) {
      do {
        if (pIVar19->interfaceOffsets[uVar20].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
           ) {
          ppMVar22 = &(&pIVar19->vtable)[pIVar19->interfaceOffsets[uVar20].offset].get_Current.method;
          goto code_?;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar21);
    }
    ppMVar22 = (MethodInfo **)func_?(pIVar7);
code_?:
    piVar23 = (int *)(*(code *)*ppMVar22)();
    if (piVar23 == (int *)0x0) goto code_?;
    uVar20 = 0;
    uVar21 = *(ushort *)(*piVar23 + 0xb6);
    if (uVar21 != 0) {
      do {
        if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar23 + 0x58) + (uint)uVar20 * 8) ==
            TypeInfo__RTG__IGizmoBehaviour) {
          puVar24 = (undefined4 *)
                    (*piVar23 +
                    (*(int *)(*(int *)(*piVar23 + 0x58) + 4 + (uint)uVar20 * 8) + 0x19) * 8);
          goto code_?;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar21);
    }
    puVar24 = (undefined4 *)func_?(piVar23);
code_?:
    cVar8 = (*(code *)*puVar24)();
    if (cVar8 != '\0') {
      func_?(0xf,TypeInfo__RTG__IGizmoBehaviour);
    }
    goto code_?;
  }
code_?:
  func_?();
  func_?();
  uVar10 = func_?();
  func_?(uVar10);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void UpdateHandleHoverInfo_SystemCall(GizmoHoverInfo) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_UpdateHandleHoverInfo_SystemCall
               (Gizmo *this,GizmoHoverInfo hoverInfo,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IGizmoBehaviour);
    cRam_? = '\x01';
  }
  if (((this->fields)._isEnabled == 0) || ((this->fields)._dragInfo._isDragged != 0))
  goto code_?;
  bVar4 = (this->fields)._hoverInfo._isHovered;
  iVar5 = (this->fields)._hoverInfo._handleId;
  GizmoHoverInfo::GizmoHoverInfo_Reset(&(this->fields)._hoverInfo,(MethodInfo *)0x0);
  ppIVar6 = &(this->fields)._hoveredHandle;
  *ppIVar6 = (IGizmoHandle *)0x0;
  func_?(ppIVar6,0);
  if ((hoverInfo._isHovered != 0) && (hoverInfo._handleId != 0)) {
    (this->fields)._hoverInfo._isHovered = 1;
    (this->fields)._hoverInfo._handleId = hoverInfo._handleId;
    (this->fields)._hoverInfo._hoverPoint.x = hoverInfo._hoverPoint.x;
    (this->fields)._hoverInfo._hoverPoint.y = hoverInfo._hoverPoint.y;
    (this->fields)._hoverInfo._hoverPoint.z = hoverInfo._hoverPoint.z;
    this_00 = (this->fields)._handles;
    if (this_00 == (GizmoHandleCollection *)0x0) goto code_?;
    pIVar7 = GizmoHandleCollection::GizmoHandleCollection_GetHandleById
                       (this_00,hoverInfo._handleId,(MethodInfo *)0x0);
    (this->fields)._hoveredHandle = pIVar7;
    func_?();
    (this->fields)._hoverInfo._handleDimension = hoverInfo._handleDimension;
  }
  if (bVar4 == 0) {
    if ((this->fields)._hoverInfo._isHovered == 0) goto code_?;
    pGVar8 = (this->fields).PreHoverEnter;
    if (pGVar8 != (GizmoPreHoverEnterHandler *)0x0) {
      (*(pGVar8->fields)._._.invoke_impl)((pGVar8->fields)._._.method_code,this);
    }
    pGVar9 = (this->fields)._behaviours;
    if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
      pIStack_10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar9,(MethodInfo *)0x0);
      uStack_1 = 4;
      while (pIStack_10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar11 = func_?(0);
        if (cVar11 == '\0') goto code_?;
        if ((pIStack_10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar11 = func_?(1);
        if (cVar11 != '\0') {
          func_?(0xd,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else if ((this->fields)._hoverInfo._isHovered == 0) {
    pGVar12 = (this->fields).PreHoverExit;
    if (pGVar12 != (GizmoPreHoverExitHandler *)0x0) {
      (*(pGVar12->fields)._._.invoke_impl)((pGVar12->fields)._._.method_code,this);
    }
    pGVar9 = (this->fields)._behaviours;
    if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
      pIVar13 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                          (pGVar9,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar13 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar11 = func_?(0);
        if (cVar11 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar13 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0);
          }
          pGVar14 = (this->fields).PostHoverExit;
          goto joined_?;
        }
        if ((pIVar13 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar11 = func_?(1);
        if (cVar11 != '\0') {
          func_?(0xe,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else if (iVar5 == (this->fields)._hoverInfo._handleId) {
code_?:
    pGVar8 = (this->fields).PreHoverEnter;
    if (pGVar8 != (GizmoPreHoverEnterHandler *)0x0) {
      (*(pGVar8->fields)._._.invoke_impl)((pGVar8->fields)._._.method_code,this);
    }
    pGVar9 = (this->fields)._behaviours;
    if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
      pIStack_10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar9,(MethodInfo *)0x0);
      uStack_1 = 10;
      while (pIStack_10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar11 = func_?(0);
        if (cVar11 == '\0') goto code_?;
        if ((pIStack_10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar11 = func_?(1);
        if (cVar11 != '\0') {
          func_?(0xd,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else {
    pGVar12 = (this->fields).PreHoverExit;
    if (pGVar12 != (GizmoPreHoverExitHandler *)0x0) {
      (*(pGVar12->fields)._._.invoke_impl)((pGVar12->fields)._._.method_code,this);
    }
    pGVar9 = (this->fields)._behaviours;
    if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
      pIVar13 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                          (pGVar9,(MethodInfo *)0x0);
      uStack_1 = 7;
      while (pIVar13 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar11 = func_?(0);
        if (cVar11 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar13 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0);
          }
          uStack_1 = 0xffffffff;
          pGVar14 = (this->fields).PostHoverExit;
          if (pGVar14 != (GizmoPostHoverExitHandler *)0x0) {
            (*(pGVar14->fields)._._.invoke_impl)((pGVar14->fields)._._.method_code,this);
          }
          goto code_?;
        }
        if ((pIVar13 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar11 = func_?(1);
        if (cVar11 != '\0') {
          func_?(0xe,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  uVar15 = func_?();
  uVar15 = func_?(uVar15);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
code_?:
  uStack_1 = 0xffffffff;
  if (pIStack_10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    func_?(0);
  }
  pGVar14 = (GizmoPostHoverExitHandler *)(this->fields).PostHoverEnter;
joined_?:
  if (pGVar14 != (GizmoPostHoverExitHandler *)0x0) {
    uStack_1 = 0xffffffff;
    (*(pGVar14->fields)._._.invoke_impl)((pGVar14->fields)._._.method_code,this);
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Gizmo() */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo__ctor(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoBehaviourCollection);
    func_?(&TypeInfo__RTG__GizmoHandleCollection);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__Priority);
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  value = (GizmoBehaviourCollection *)func_?(TypeInfo__RTG__GizmoBehaviourCollection);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar1,10,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
  pMVar2 = (MethodInfo *)&value->fields;
  ((GizmoBehaviourCollection__Fields *)pMVar2)->_behaviours = (List_1_RTG_IGizmoBehaviour_ *)pLVar1
  ;
  func_?(pMVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar2);
  ppGVar3 = &(this->fields)._behaviours;
  *ppGVar3 = value;
  func_?(ppGVar3,value);
  pUVar4 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar4,(MethodInfo *)0x0);
  ppPVar5 = &(this->fields)._genericHoverPriority;
  *ppPVar5 = (Priority *)pUVar4;
  func_?(ppPVar5,pUVar4);
  pUVar4 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar4,(MethodInfo *)0x0);
  (this->fields)._hoverPriority3D = (Priority *)pUVar4;
  func_?();
  pUVar4 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar4,(MethodInfo *)0x0);
  ppPVar5 = &(this->fields)._hoverPriority2D;
  *ppPVar5 = (Priority *)pUVar4;
  func_?(ppPVar5,pUVar4);
  this_00 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  if (cRam_? == '\0') {
    ppQStack6 =
         (Quaternion__Class **)
         &MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_;
    func_?();
    ppLStack7 = &TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    ppQStack6 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this_00->fields)._rotation3D.x = (pQVar8->identityQuaternion).x;
  (this_00->fields)._rotation3D.y = fVar9;
  (this_00->fields)._rotation3D.z = fVar10;
  (this_00->fields)._rotation3D.w = fVar11;
  if (cRam_? == '\0') {
    ppQStack6 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this_00->fields)._localRotation3D.x = (pQVar8->identityQuaternion).x;
  (this_00->fields)._localRotation3D.y = fVar9;
  (this_00->fields)._localRotation3D.z = fVar10;
  (this_00->fields)._localRotation3D.w = fVar11;
  if (cRam_? == '\0') {
    ppQStack6 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this_00->fields)._rotation2D.x = (pQVar8->identityQuaternion).x;
  (this_00->fields)._rotation2D.y = fVar9;
  (this_00->fields)._rotation2D.z = fVar10;
  (this_00->fields)._rotation2D.w = fVar11;
  if (cRam_? == '\0') {
    ppQStack6 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  ppQStack6 = (Quaternion__Class **)0x3;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this_00->fields)._localRotation2D.x = (pQVar8->identityQuaternion).x;
  (this_00->fields)._localRotation2D.y = fVar9;
  (this_00->fields)._localRotation2D.z = fVar10;
  (this_00->fields)._localRotation2D.w = fVar11;
  ppLStack7 = (List_1_RTG_GizmoTransform___Class **)TypeInfo__UnityEngine__Vector3;
  pVVar12 = (Vector3__Array *)func_?();
  (this_00->fields)._axes3D = pVVar12;
  func_?();
  pVVar13 = (Vector2__Array *)func_?();
  ppVVar14 = &(this_00->fields)._axes2D;
  *ppVVar14 = pVVar13;
  func_?(ppVVar14);
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar1,10,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_);
  pMVar2 = (MethodInfo *)&(this_00->fields)._children;
  *(List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ **)
   pMVar2 = pLVar1;
  func_?(pMVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this_00,ExceptionArgument__Enum_obj,pMVar2);
  GizmoTransform::GizmoTransform_Update3DAxes(this_00,(MethodInfo *)0x0);
  GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)&(this->fields)._transform;
  *(GizmoTransform **)pMVar2 = this_00;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  value_00 = (GizmoHandleCollection *)func_?();
  if (cRam_? == '\0') {
    ppMStack15 =
         &MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
    ;
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppMStack15 = (MethodInfo **)TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>;
  this_01 = (List_1_RTG_IGizmoHandle_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
  (value_00->fields)._handles = this_01;
  func_?();
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
            );
  pMVar2 = (MethodInfo *)&(value_00->fields)._idToHandle;
  *(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ **)pMVar2
       = this_02;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar2);
  (value_00->fields)._gizmo = this;
  func_?();
  (this->fields)._handles = value_00;
  func_?();
  (this->fields)._hoverInfo._isHovered = 0;
  (this->fields)._hoverInfo._handleId = 0;
  (this->fields)._hoverInfo._handleDimension = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar16->zeroVector).y;
  fVar9 = (pVVar16->zeroVector).z;
  (this->fields)._hoverInfo._hoverPoint.x = (pVVar16->zeroVector).x;
  (this->fields)._hoverInfo._hoverPoint.y = fVar10;
  (this->fields)._hoverInfo._hoverPoint.z = fVar9;
  GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
  return;
}


/* Void add_OffsetDragAxisModify(GizmoOffsetDragAxisModifyHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_OffsetDragAxisModify
               (Gizmo *this,GizmoOffsetDragAxisModifyHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).OffsetDragAxisModify;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoOffsetDragAxisModifyHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoOffsetDragAxisModifyHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostDisabled(GizmoPostDisabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDisabled
               (Gizmo *this,GizmoPostDisabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDisabled;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDisabledHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDisabledHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDisabledHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDisabledHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostDragBegin(GizmoPostDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragBegin
               (Gizmo *this,GizmoPostDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBegin;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragBeginHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostDragBeginAttempt(GizmoPostDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragBeginAttempt
               (Gizmo *this,GizmoPostDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBeginAttempt;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginAttemptHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragBeginAttemptHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostDragEnd(GizmoPostDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragEnd
               (Gizmo *this,GizmoPostDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragEnd;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__GizmoPostDragEndHandler)
      {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragEndHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostDragUpdate(GizmoPostDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostDragUpdate
               (Gizmo *this,GizmoPostDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragUpdateHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragUpdate;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragUpdateHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostEnabled(GizmoPostEnabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostEnabled
               (Gizmo *this,GizmoPostEnabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).PostEnabled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostEnabledHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPostEnabledHandler)
      {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostEnabledHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostEnabledHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_PostHandlePicked(GizmoPostHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHandlePicked
               (Gizmo *this,GizmoPostHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHandlePickedHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHandlePicked;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHandlePickedHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHandlePickedHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHandlePickedHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostHoverEnter(GizmoPostHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHoverEnter
               (Gizmo *this,GizmoPostHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHoverEnterHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverEnter;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHoverEnterHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHoverEnterHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHoverEnterHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostHoverExit(GizmoPostHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostHoverExit
               (Gizmo *this,GizmoPostHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHoverExitHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverExit;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHoverExitHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHoverExitHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHoverExitHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PostUpdateEnd(GizmoPostUpdateEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PostUpdateEnd
               (Gizmo *this,GizmoPostUpdateEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostUpdateEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostUpdateEnd;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostUpdateEndHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostUpdateEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostUpdateEndHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreDragBegin(GizmoPreDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragBegin
               (Gizmo *this,GizmoPreDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBegin;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragBeginHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreDragBeginAttempt(GizmoPreDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragBeginAttempt
               (Gizmo *this,GizmoPreDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBeginAttempt;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginAttemptHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragBeginAttemptHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreDragEnd(GizmoPreDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragEnd
               (Gizmo *this,GizmoPreDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragEnd;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragEndHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreDragUpdate(GizmoPreDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreDragUpdate
               (Gizmo *this,GizmoPreDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragUpdate;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragUpdateHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreHandlePicked(GizmoPreHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHandlePicked
               (Gizmo *this,GizmoPreHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHandlePicked;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHandlePickedHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHandlePickedHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHandlePickedHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreHoverEnter(GizmoPreHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHoverEnter
               (Gizmo *this,GizmoPreHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverEnter;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHoverEnterHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHoverEnterHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHoverEnterHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreHoverExit(GizmoPreHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreHoverExit
               (Gizmo *this,GizmoPreHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverExit;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHoverExitHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHoverExitHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHoverExitHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_PreUpdateBegin(GizmoPreUpdateBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_add_PreUpdateBegin
               (Gizmo *this,GizmoPreUpdateBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreUpdateBegin;
  a = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreUpdateBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreUpdateBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreUpdateBeginHandler *)func_?(ppGVar1,pDVar3,a);
    bVar6 = pGVar5 == a;
    a = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Vector3 get_DragBeginPoint() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_DragBeginPoint
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._dragBeginPoint.y;
  fVar2 = (this->fields)._dragInfo._dragBeginPoint.z;
  __return_storage_ptr__->x = (this->fields)._dragInfo._dragBeginPoint.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* GizmoDragInfo get_DragInfo() */

GizmoDragInfo *
Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_DragInfo
          (GizmoDragInfo *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  pGVar1 = &(this->fields)._dragInfo;
  pGVar2 = __return_storage_ptr__;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar4 = *(undefined3 *)&pGVar1->field_0x1;
    pGVar2->_isDragged = pGVar1->_isDragged;
    *(undefined3 *)&pGVar2->field_0x1 = uVar4;
    pGVar1 = (GizmoDragInfo *)&pGVar1->_handleId;
    pGVar2 = (GizmoDragInfo *)&pGVar2->_handleId;
  }
  return __return_storage_ptr__;
}


/* Camera get_FocusCamera() */

Camera * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_FocusCamera(Gizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>;
    func_?();
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields)._sceneGizmo;
  if (pSVar2 == (SceneGizmo *)0x0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar3 != (Object *)0x0) {
      return (Camera *)pOVar3[4].monitor;
    }
  }
  else {
    pRVar4 = (pSVar2->fields)._sceneGizmoCamera;
    if (pRVar4 != (RTSceneGizmoCamera *)0x0) {
      return (pRVar4->fields)._camera;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pCVar8 = (Camera *)(*pcVar7)();
  return pCVar8;
}


/* Int32 get_NumHandles() */

int32_t Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_NumHandles(Gizmo *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._handles;
  if (pGVar1 != (GizmoHandleCollection *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (pGVar1->fields)._handles;
    if (pLVar2 != (List_1_RTG_IGizmoHandle_ *)0x0) {
      return (pLVar2->fields)._size;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._relativeOffset.y;
  fVar2 = (this->fields)._dragInfo._relativeOffset.z;
  __return_storage_ptr__->x = (this->fields)._dragInfo._relativeOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
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
  fVar1 = (this->fields)._dragInfo._relativeScale.y;
  fVar2 = (this->fields)._dragInfo._relativeScale.z;
  __return_storage_ptr__->x = (this->fields)._dragInfo._relativeScale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::Gizmo::Gizmo_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,Gizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._dragInfo._totalOffset.y;
  fVar2 = (this->fields)._dragInfo._totalOffset.z;
  __return_storage_ptr__->x = (this->fields)._dragInfo._totalOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
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
  fVar1 = (this->fields)._dragInfo._totalScale.y;
  fVar2 = (this->fields)._dragInfo._totalScale.z;
  __return_storage_ptr__->x = (this->fields)._dragInfo._totalScale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void remove_OffsetDragAxisModify(GizmoOffsetDragAxisModifyHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_OffsetDragAxisModify
               (Gizmo *this,GizmoOffsetDragAxisModifyHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).OffsetDragAxisModify;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoOffsetDragAxisModifyHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoOffsetDragAxisModifyHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostDisabled(GizmoPostDisabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDisabled
               (Gizmo *this,GizmoPostDisabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDisabled;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDisabledHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDisabledHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDisabledHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDisabledHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostDragBegin(GizmoPostDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragBegin
               (Gizmo *this,GizmoPostDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBegin;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragBeginHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostDragBeginAttempt(GizmoPostDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragBeginAttempt
               (Gizmo *this,GizmoPostDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragBeginAttempt;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginAttemptHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragBeginAttemptHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostDragEnd(GizmoPostDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragEnd
               (Gizmo *this,GizmoPostDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragEnd;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__GizmoPostDragEndHandler)
      {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragEndHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostDragUpdate(GizmoPostDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostDragUpdate
               (Gizmo *this,GizmoPostDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostDragUpdateHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostDragUpdate;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostDragUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostDragUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostDragUpdateHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostEnabled(GizmoPostEnabledHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostEnabled
               (Gizmo *this,GizmoPostEnabledHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).PostEnabled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostEnabledHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPostEnabledHandler)
      {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostEnabledHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostEnabledHandler *)func_?(&this->fields,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_PostHandlePicked(GizmoPostHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHandlePicked
               (Gizmo *this,GizmoPostHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHandlePickedHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHandlePicked;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHandlePickedHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHandlePickedHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHandlePickedHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostHoverEnter(GizmoPostHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHoverEnter
               (Gizmo *this,GizmoPostHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHoverEnterHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverEnter;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHoverEnterHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHoverEnterHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHoverEnterHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostHoverExit(GizmoPostHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostHoverExit
               (Gizmo *this,GizmoPostHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostHoverExitHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostHoverExit;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostHoverExitHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostHoverExitHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostHoverExitHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PostUpdateEnd(GizmoPostUpdateEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PostUpdateEnd
               (Gizmo *this,GizmoPostUpdateEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPostUpdateEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PostUpdateEnd;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPostUpdateEndHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPostUpdateEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPostUpdateEndHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreDragBegin(GizmoPreDragBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragBegin
               (Gizmo *this,GizmoPreDragBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBegin;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragBeginHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreDragBeginAttempt(GizmoPreDragBeginAttemptHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragBeginAttempt
               (Gizmo *this,GizmoPreDragBeginAttemptHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragBeginAttempt;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginAttemptHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragBeginAttemptHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreDragEnd(GizmoPreDragEndHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragEnd
               (Gizmo *this,GizmoPreDragEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragEndHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragEnd;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragEndHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreDragUpdate(GizmoPreDragUpdateHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreDragUpdate
               (Gizmo *this,GizmoPreDragUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreDragUpdate;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreDragUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreDragUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreDragUpdateHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreHandlePicked(GizmoPreHandlePickedHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHandlePicked
               (Gizmo *this,GizmoPreHandlePickedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHandlePicked;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHandlePickedHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHandlePickedHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHandlePickedHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreHoverEnter(GizmoPreHoverEnterHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHoverEnter
               (Gizmo *this,GizmoPreHoverEnterHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverEnter;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHoverEnterHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHoverEnterHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHoverEnterHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreHoverExit(GizmoPreHoverExitHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreHoverExit
               (Gizmo *this,GizmoPreHoverExitHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreHoverExit;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreHoverExitHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreHoverExitHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreHoverExitHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_PreUpdateBegin(GizmoPreUpdateBeginHandler) */

void Assembly-CSharp.dll::RTG::Gizmo::Gizmo_remove_PreUpdateBegin
               (Gizmo *this,GizmoPreUpdateBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).PreUpdateBegin;
  source = *ppGVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((GizmoPreUpdateBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__GizmoPreUpdateBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pGVar5 = (GizmoPreUpdateBeginHandler *)func_?(ppGVar1,pDVar3,source);
    bVar6 = pGVar5 == source;
    source = pGVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


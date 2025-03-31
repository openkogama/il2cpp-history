
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
        pTVar11 = mscorlib.dll::System::Object::Object_GetType
                            ((Object *)behaviour,(MethodInfo *)0x0);
        pIVar12 = TypeRef__RTG__MoveGizmo;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
        bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)pTVar11,(Int32Enum__Enum)pTVar13,(MethodInfo *)0x0);
        pIVar12 = TypeRef__RTG__RotationGizmo;
        if (bVar10 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
          bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)pTVar11,(Int32Enum__Enum)pTVar13,(MethodInfo *)0x0);
          pIVar12 = TypeRef__RTG__ScaleGizmo;
          if (bVar10 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
            bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_EnumEquals
                              (0xADDR,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
            pIVar12 = TypeRef__RTG__UniversalGizmo;
            if (bVar10 == 0) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
              bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_EnumEquals
                                (0xADDR,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
              pIVar12 = TypeRef__RTG__SceneGizmo;
              if (bVar10 == 0) {
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                    ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
                bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                        UnsafeUtility::UnsafeUtility_EnumEquals
                                  (0xADDR,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
                pIVar12 = TypeRef__RTG__ObjectTransformGizmo;
                if (bVar10 == 0) {
                  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
                  bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                          UnsafeUtility::UnsafeUtility_EnumEquals
                                    (0xADDR,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
                  if (bVar10 != 0) {
                    pOStack14 = TypeInfo__RTG__ObjectTransformGizmo;
                    pIStack15 = (IGizmoBehaviour__Class *)behaviour;
                    pOVar16 = (ObjectTransformGizmo *)func_?();
                    (this->fields)._objectTransformGizmo = pOVar16;
                    pOStack17 = TypeInfo__RTG__ObjectTransformGizmo;
                    pIStack18 = behaviour;
                    func_?();
                    func_?();
                  }
                }
                else {
                  pSVar19 = (SceneGizmo *)func_?();
                  (this->fields)._sceneGizmo = pSVar19;
                  func_?();
                  func_?();
                }
              }
              else {
                pUVar20 = (UniversalGizmo *)func_?();
                (this->fields)._universalGizmo = pUVar20;
                func_?();
                func_?();
              }
            }
            else {
              pSVar21 = (ScaleGizmo *)func_?();
              (this->fields)._scaleGizmo = pSVar21;
              func_?();
              func_?();
            }
          }
          else {
            pRVar22 = (RotationGizmo *)func_?();
            (this->fields)._rotationGizmo = pRVar22;
            func_?();
            func_?();
          }
        }
        else {
          if (((behaviour->klass->_1).naturalAligment <
               (TypeInfo__RTG__MoveGizmo->_1).naturalAligment) ||
             ((MoveGizmo__Class *)
              (behaviour->klass->_1).typeHierarchy
              [(TypeInfo__RTG__MoveGizmo->_1).naturalAligment - 1] != TypeInfo__RTG__MoveGizmo)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          pMVar24 = (MoveGizmo *)0x0;
          if (bVar23) {
            pMVar24 = (MoveGizmo *)behaviour;
          }
          (this->fields)._moveGizmo = pMVar24;
          func_?();
        }
        pOStack14 = (ObjectTransformGizmo__Class *)behaviour;
        pIStack15 = TypeInfo__RTG__IGizmoBehaviour;
        pOStack17 = (ObjectTransformGizmo__Class *)0x4;
        func_?();
        pIStack18 = behaviour;
        func_?();
        return 1;
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  bVar10 = (*pcVar25)();
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
      (pGVar4->fields)._genericHoverPriority = (Priority *)pUVar5;
      func_?(&(pGVar4->fields)._genericHoverPriority,pUVar5);
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
               func_?(TypeInfo__RTG__Priority);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar5,(MethodInfo *)0x0);
      (pGVar4->fields)._hoverPriority2D = (Priority *)pUVar5;
      func_?(&(pGVar4->fields)._hoverPriority2D,pUVar5);
      pUVar5 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
               func_?(TypeInfo__RTG__Priority);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar5,(MethodInfo *)0x0);
      (pGVar4->fields)._hoverPriority3D = (Priority *)pUVar5;
      func_?(&(pGVar4->fields)._hoverPriority3D,pUVar5);
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
      pLVar6 = TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>;
      this_02 = (List_1_RTG_GizmoHandleShape2D_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
      method_00 = (MethodInfo *)&(pGVar4->fields)._2DShapes;
      (pGVar4->fields)._2DShapes = this_02;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pGVar4,ExceptionArgument__Enum_obj,method_00);
      (pGVar4->fields)._id = (int32_t)pLVar6;
      (pGVar4->fields)._gizmo = this;
      func_?(&(pGVar4->fields)._gizmo,this);
      pGVar7 = (pGVar4->fields)._gizmo;
      if (pGVar7 != (Gizmo *)0x0) {
        pGVar8 = (pGVar7->fields)._transform;
        (pGVar4->fields)._zoomFactorTransform = pGVar8;
        func_?(&(pGVar4->fields)._zoomFactorTransform,pGVar8);
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
          iVar9 = func_?(0,TypeInfo__RTG__IGizmoHandle,pGVar4);
          if (pDVar2 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,iVar9,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                              );
            if ((bVar3 != 0) ||
               (pGVar7 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,pGVar4),
               pGVar7 != (pGVar1->fields)._gizmo)) {
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
              iVar9 = func_?(0,TypeInfo__RTG__IGizmoHandle,pGVar4);
              if (pDVar2 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar9,(Object *)pGVar4
                           ,
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
  pcVar10 = (code *)swi(3);
  pGVar4 = (GizmoHandle *)(*pcVar10)();
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
  if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0) {
code_?:
    (this->fields)._activeDragSession = (IGizmoDragSession *)0x0;
    func_?(&(this->fields)._activeDragSession,0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?(0xd,TypeInfo__RTG__IGizmoDragSession,(this->fields)._activeDragSession);
  (this->fields)._dragInfo._isDragged = 0;
  if ((this->fields).PreDragEnd != (GizmoPreDragEndHandler *)0x0) {
    pGVar4 = (this->fields).PreDragEnd;
    (*(pGVar4->fields)._._.invoke_impl)
              ((pGVar4->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar4->fields)._._.method);
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
        uStack_1 = 0xffffffff;
        iVar7 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        if ((this->fields).PostDragEnd != (GizmoPostDragEndHandler *)0x0) {
          pGVar8 = (this->fields).PostDragEnd;
          (*(pGVar8->fields)._._.invoke_impl)
                    ((pGVar8->fields)._._.method_code,this,iVar7,(pGVar8->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar9 = pIVar5->klass;
      uVar10 = 0;
      uVar11._0_1_ = (pIVar9->_1).rank;
      uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar12 = &(&pIVar5->klass->vtable)[pIVar5->klass->interfaceOffsets[uVar10].offset].
                       get_Current.method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      ppMVar12 = (MethodInfo **)
                func_?(pIVar5,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
      piVar13 = (int *)(*(code *)*ppMVar12)(pIVar5,ppMVar12[1]);
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
      cVar6 = (*(code *)*puVar14)(piVar13,puVar14[1]);
      if (cVar6 != '\0') {
        func_?(0x11,TypeInfo__RTG__IGizmoBehaviour,piVar13,
                        (this->fields)._dragInfo._handleId);
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
      else if ((iRam_? != 0) && (*(int *)(iRam_? + 0x20) != 0)) {
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
                    if ((this->fields).PreDragUpdate != (GizmoPreDragUpdateHandler *)0x0) {
                      (*(((this->fields).PreDragUpdate)->fields)._._.invoke_impl)();
                    }
                    this_00 = (this->fields)._behaviours;
                    if (this_00 != (GizmoBehaviourCollection *)0x0) {
                      pIStack_25 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                                             (this_00,(MethodInfo *)0x0);
                      ppIStack_24 = &pIStack_25;
                      fStack_23 = 0.0;
                      uStack_1 = 1;
                      while (pIStack_25 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                        cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                        if (cVar7 == '\0') {
                          uStack_1 = 0xffffffff;
                          if (pIStack_25 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                            func_?(0,TypeInfo__System__IDisposable);
                          }
                          uStack_1 = 0xffffffff;
                          if ((this->fields).PostDragUpdate != (GizmoPostDragUpdateHandler *)0x0) {
                            (*(((this->fields).PostDragUpdate)->fields)._._.invoke_impl)();
                          }
                          goto code_?;
                        }
                        if (pIStack_25 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
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
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
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
  if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((this->fields).PreHandlePicked != (GizmoPreHandlePickedHandler *)0x0) {
    pGVar4 = (this->fields).PreHandlePicked;
    uVar5 = func_?(0,TypeInfo__RTG__IGizmoHandle,(this->fields)._hoveredHandle);
    (*(pGVar4->fields)._._.invoke_impl)
              ((pGVar4->fields)._._.method_code,this,uVar5,(pGVar4->fields)._._.method);
  }
  this_00 = (this->fields)._behaviours;
  if (this_00 != (GizmoBehaviourCollection *)0x0) {
    pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                       (this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while( true ) {
      if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar6);
        }
        uStack_1 = 0xffffffff;
        if ((this->fields).PostHandlePicked != (GizmoPostHandlePickedHandler *)0x0) {
          pIVar8 = (this->fields)._hoveredHandle;
          pGVar9 = (this->fields).PostHandlePicked;
          if (pIVar8 == (IGizmoHandle *)0x0) break;
          uVar5 = func_?(0,TypeInfo__RTG__IGizmoHandle,pIVar8);
          (*(pGVar9->fields)._._.invoke_impl)
                    ((pGVar9->fields)._._.method_code,this,uVar5,(pGVar9->fields)._._.method);
        }
        Gizmo_TryActivateDragSession(this,(MethodInfo *)0x0);
        goto code_?;
      }
      if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar10 = pIVar6->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pIVar10->_1).rank;
      uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar13 = &(&pIVar6->klass->vtable)[pIVar6->klass->interfaceOffsets[uVar11].offset].
                        get_Current.method;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      ppMVar13 = (MethodInfo **)
                 func_?(pIVar6,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                 ,0);
code_?:
      piVar14 = (int *)(*(code *)*ppMVar13)(pIVar6,ppMVar13[1]);
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
      cVar7 = (*(code *)*puVar15)(piVar14,puVar15[1]);
      if (cVar7 != '\0') {
        pIVar8 = (this->fields)._hoveredHandle;
        if (pIVar8 == (IGizmoHandle *)0x0) break;
        uVar5 = func_?(0,TypeInfo__RTG__IGizmoHandle,pIVar8);
        func_?(10,TypeInfo__RTG__IGizmoBehaviour,piVar14,uVar5);
      }
    }
  }
  uVar5 = func_?();
  func_?(uVar5);
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
  if ((this->fields)._activeDragSession == (IGizmoDragSession *)0x0) {
code_?:
    (this->fields)._activeDragSession = (IGizmoDragSession *)0x0;
    func_?(&(this->fields)._activeDragSession,0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?(0xd,TypeInfo__RTG__IGizmoDragSession,(this->fields)._activeDragSession);
  (this->fields)._dragInfo._isDragged = 0;
  if ((this->fields).PreDragEnd != (GizmoPreDragEndHandler *)0x0) {
    pGVar4 = (this->fields).PreDragEnd;
    (*(pGVar4->fields)._._.invoke_impl)
              ((pGVar4->fields)._._.method_code,this,(this->fields)._dragInfo._handleId,
               (pGVar4->fields)._._.method);
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
        uStack_1 = 0xffffffff;
        iVar7 = (this->fields)._dragInfo._handleId;
        GizmoDragInfo::GizmoDragInfo_Reset(&(this->fields)._dragInfo,(MethodInfo *)0x0);
        if ((this->fields).PostDragEnd != (GizmoPostDragEndHandler *)0x0) {
          pGVar8 = (this->fields).PostDragEnd;
          (*(pGVar8->fields)._._.invoke_impl)
                    ((pGVar8->fields)._._.method_code,this,iVar7,(pGVar8->fields)._._.method);
        }
        goto code_?;
      }
      if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
      pIVar9 = pIVar5->klass;
      uVar10 = 0;
      uVar11._0_1_ = (pIVar9->_1).rank;
      uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
            ppMVar12 = &(&pIVar5->klass->vtable)[pIVar5->klass->interfaceOffsets[uVar10].offset].
                       get_Current.method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      ppMVar12 = (MethodInfo **)
                func_?(pIVar5,
                                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                ,0);
code_?:
      piVar13 = (int *)(*(code *)*ppMVar12)(pIVar5,ppMVar12[1]);
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
      cVar6 = (*(code *)*puVar14)(piVar13,puVar14[1]);
      if (cVar6 != '\0') {
        func_?(0x11,TypeInfo__RTG__IGizmoBehaviour,piVar13,
                        (this->fields)._dragInfo._handleId);
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  if ((this->fields).PreUpdateBegin != (GizmoPreUpdateBeginHandler *)0x0) {
    pGVar4 = (this->fields).PreUpdateBegin;
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
        if ((this->fields).PostUpdateEnd != (GizmoPostUpdateEndHandler *)0x0) {
          pGVar6 = (this->fields).PostUpdateEnd;
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
  if ((MoveGizmo *)behaviour == (this->fields)._moveGizmo) {
    (this->fields)._moveGizmo = (MoveGizmo *)0x0;
    ppUVar1 = (UniversalGizmo **)&(this->fields)._moveGizmo;
  }
  else if ((RotationGizmo *)behaviour == (this->fields)._rotationGizmo) {
    (this->fields)._rotationGizmo = (RotationGizmo *)0x0;
    ppUVar1 = (UniversalGizmo **)&(this->fields)._rotationGizmo;
  }
  else if ((ScaleGizmo *)behaviour == (this->fields)._scaleGizmo) {
    (this->fields)._scaleGizmo = (ScaleGizmo *)0x0;
    ppUVar1 = (UniversalGizmo **)&(this->fields)._scaleGizmo;
  }
  else if ((UniversalGizmo *)behaviour == (this->fields)._universalGizmo) {
    (this->fields)._universalGizmo = (UniversalGizmo *)0x0;
    ppUVar1 = &(this->fields)._universalGizmo;
  }
  else if ((SceneGizmo *)behaviour == (this->fields)._sceneGizmo) {
    (this->fields)._sceneGizmo = (SceneGizmo *)0x0;
    ppUVar1 = (UniversalGizmo **)&(this->fields)._sceneGizmo;
  }
  else {
    if ((ObjectTransformGizmo *)behaviour != (this->fields)._objectTransformGizmo)
    goto code_?;
    (this->fields)._objectTransformGizmo = (ObjectTransformGizmo *)0x0;
    ppUVar1 = (UniversalGizmo **)&(this->fields)._objectTransformGizmo;
  }
  func_?(ppUVar1,0);
code_?:
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
        bVar7 = 0;
        if ((this->fields)._sceneGizmo == (SceneGizmo *)0x0) {
          bVar7 = bVar6;
        }
        if ((bVar7 != 0) || (((this->fields)._sceneGizmo != (SceneGizmo *)0x0 && (bVar6 == 0))))
        goto code_?;
        this_00 = (this->fields)._behaviours;
        if (this_00 != (GizmoBehaviourCollection *)0x0) {
          pIVar8 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (this_00,(MethodInfo *)0x0);
          uStack_1 = 1;
          while (pIVar8 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar8);
            if (cVar9 == '\0') {
              uStack_1 = 0xffffffff;
              if (pIVar8 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,pIVar8);
              }
              goto code_?;
            }
            if (pIVar8 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
            iVar10 = func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,pIVar8);
            if (iVar10 == 0) break;
            cVar9 = func_?(1,TypeInfo__RTG__IGizmoBehaviour,iVar10);
            if (cVar9 != '\0') {
              func_?(0x15,TypeInfo__RTG__IGizmoBehaviour,iVar10,camera);
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    (this->fields)._hoveredHandle = (IGizmoHandle *)0x0;
    func_?(&(this->fields)._hoveredHandle,0);
    pGVar4 = (this->fields)._behaviours;
    (this->fields)._isEnabled = 0;
    if (pGVar4 != (GizmoBehaviourCollection *)0x0) {
      pIVar5 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar4,(MethodInfo *)0x0);
      uStack_1 = 1;
      while( true ) {
        if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar5 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,pIVar5);
          }
          if ((this->fields).PostDisabled == (GizmoPostDisabledHandler *)0x0) goto code_?;
          pGVar7 = (GizmoPostEnabledHandler *)(this->fields).PostDisabled;
          goto code_?;
        }
        if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        pIVar8 = pIVar5->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
              ppMVar11 = &(&pIVar5->klass->vtable)[pIVar5->klass->interfaceOffsets[uVar9].offset].
                         get_Current.method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)
                  func_?(pIVar5,
                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                  ,0);
code_?:
        piVar12 = (int *)(*(code *)*ppMVar11)(pIVar5,ppMVar11[1]);
        if (piVar12 == (int *)0x0) break;
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar12 + 0xb6);
        if (uVar10 != 0) {
          do {
            if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar12 + 0x58) + (uint)uVar9 * 8) ==
                TypeInfo__RTG__IGizmoBehaviour) {
              puVar13 = (undefined4 *)
                       (*piVar12 +
                       (*(int *)(*(int *)(*piVar12 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        puVar13 = (undefined4 *)func_?(piVar12,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
        cVar6 = (*(code *)*puVar13)(piVar12,puVar13[1]);
        if (cVar6 != '\0') {
          func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar12);
        }
      }
    }
  }
  else {
    pGVar4 = (this->fields)._behaviours;
    (this->fields)._isEnabled = 1;
    if (pGVar4 != (GizmoBehaviourCollection *)0x0) {
      pIVar5 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar4,(MethodInfo *)0x0);
      uStack_1 = 4;
      while( true ) {
        if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
        if (cVar6 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar5 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,pIVar5);
          }
          if ((this->fields).PostEnabled != (GizmoPostEnabledHandler *)0x0) {
            pGVar7 = (this->fields).PostEnabled;
code_?:
            uStack_1 = 0xffffffff;
            (*(pGVar7->fields)._._.invoke_impl)
                      ((pGVar7->fields)._._.method_code,this,(pGVar7->fields)._._.method);
          }
          goto code_?;
        }
        if (pIVar5 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
        pIVar8 = pIVar5->klass;
        uVar10 = 0;
        uVar9._0_1_ = (pIVar8->_1).rank;
        uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar10].interfaceType ==
                (Il2CppClass *)
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
              ppMVar11 = &(&pIVar5->klass->vtable)[pIVar5->klass->interfaceOffsets[uVar10].offset].
                         get_Current.method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar9);
        }
        ppMVar11 = (MethodInfo **)
                  func_?(pIVar5,
                                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                  ,0);
code_?:
        piVar12 = (int *)(*(code *)*ppMVar11)(pIVar5,ppMVar11[1]);
        if (piVar12 == (int *)0x0) break;
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar12 + 0xb6);
        if (uVar10 != 0) {
          do {
            if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar12 + 0x58) + (uint)uVar9 * 8) ==
                TypeInfo__RTG__IGizmoBehaviour) {
              puVar13 = (undefined4 *)
                       (*piVar12 +
                       (*(int *)(*(int *)(*piVar12 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        puVar13 = (undefined4 *)func_?(piVar12,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
        cVar6 = (*(code *)*puVar13)(piVar12,puVar13[1]);
        if (cVar6 != '\0') {
          func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar12);
        }
      }
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  if (((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) ||
     (iVar4 = func_?(2,TypeInfo__RTG__IGizmoHandle,(this->fields)._hoveredHandle),
     iVar4 == 0)) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pGVar5 = (this->fields)._behaviours;
  if (pGVar5 != (GizmoBehaviourCollection *)0x0) {
    pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                        (pGVar5,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
      cVar7 = func_?(0);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          func_?(0);
        }
        uStack_1 = 0xffffffff;
        if ((this->fields).PreDragBeginAttempt != (GizmoPreDragBeginAttemptHandler *)0x0) {
          pGVar8 = (this->fields).PreDragBeginAttempt;
          if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) break;
          uVar9 = func_?(0);
          (*(pGVar8->fields)._._.invoke_impl)
                    ((pGVar8->fields)._._.method_code,this,uVar9,(pGVar8->fields)._._.method);
        }
        pGVar5 = (this->fields)._behaviours;
        if (pGVar5 == (GizmoBehaviourCollection *)0x0) break;
        pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                            (pGVar5,(MethodInfo *)0x0);
        uStack_1 = 4;
        goto code_?;
      }
      if ((pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
         (iVar4 = func_?(0), iVar4 == 0)) break;
      cVar7 = func_?(1);
      if (cVar7 != '\0') {
        if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) break;
        func_?(0);
        cVar7 = func_?(0xb,TypeInfo__RTG__IGizmoBehaviour);
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  goto code_?;
code_?:
  if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    cVar7 = func_?(0);
    if (cVar7 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        func_?(0);
      }
      uStack_1 = 0xffffffff;
      if ((this->fields).PostDragBeginAttempt != (GizmoPostDragBeginAttemptHandler *)0x0) {
        pGVar10 = (this->fields).PostDragBeginAttempt;
        if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
        uVar9 = func_?(0);
        (*(pGVar10->fields)._._.invoke_impl)
                  ((pGVar10->fields)._._.method_code,this,uVar9,(pGVar10->fields)._._.method);
      }
      if (((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) &&
         (iVar4 = func_?(2), iVar4 != 0)) {
        cVar7 = func_?(0xb);
        if (cVar7 == '\0') goto code_?;
        if ((this->fields)._hoveredHandle != (IGizmoHandle *)0x0) {
          pIVar11 = (IGizmoDragSession *)func_?(2);
          (this->fields)._activeDragSession = pIVar11;
          func_?(&(this->fields)._activeDragSession,pIVar11);
          pIVar11 = (this->fields)._activeDragSession;
          (this->fields)._dragInfo._isDragged = 1;
          if (pIVar11 != (IGizmoDragSession *)0x0) {
            iVar12 = func_?(1);
            (this->fields)._dragInfo._dragChannel = iVar12;
            (this->fields)._dragInfo._handleDimension = (this->fields)._hoverInfo._handleDimension;
            (this->fields)._dragInfo._handleId = (this->fields)._hoverInfo._handleId;
            fVar13 = (this->fields)._hoverInfo._hoverPoint.y;
            fVar14 = (this->fields)._hoverInfo._hoverPoint.z;
            (this->fields)._dragInfo._dragBeginPoint.x = (this->fields)._hoverInfo._hoverPoint.x;
            (this->fields)._dragInfo._dragBeginPoint.y = fVar13;
            (this->fields)._dragInfo._dragBeginPoint.z = fVar14;
            if ((this->fields).PreDragBegin != (GizmoPreDragBeginHandler *)0x0) {
              pGVar15 = (this->fields).PreDragBegin;
              (*(pGVar15->fields)._._.invoke_impl)((pGVar15->fields)._._.method_code,this);
            }
            pGVar5 = (this->fields)._behaviours;
            if (pGVar5 != (GizmoBehaviourCollection *)0x0) {
              pIVar6 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                                  (pGVar5,(MethodInfo *)0x0);
              uStack_1 = 7;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    if ((pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
       (iVar4 = func_?(0), iVar4 == 0)) goto code_?;
    cVar7 = func_?(1);
    if (cVar7 != '\0') {
      if ((this->fields)._hoveredHandle == (IGizmoHandle *)0x0) goto code_?;
      func_?(0);
      func_?(0xc,TypeInfo__RTG__IGizmoBehaviour);
    }
    goto code_?;
  }
  goto code_?;
code_?:
  if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    cVar7 = func_?(0);
    if (cVar7 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIVar6 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        func_?(0);
      }
      uStack_1 = 0xffffffff;
      if ((this->fields).PostDragBegin != (GizmoPostDragBeginHandler *)0x0) {
        pGVar16 = (this->fields).PostDragBegin;
        (*(pGVar16->fields)._._.invoke_impl)((pGVar16->fields)._._.method_code,this);
      }
      goto code_?;
    }
    if (pIVar6 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) goto code_?;
    pIVar17 = pIVar6->klass;
    uVar18 = 0;
    uVar19._0_1_ = (pIVar17->_1).rank;
    uVar19._1_1_ = (pIVar17->_1).minimumAlignment;
    if (uVar19 != 0) {
      do {
        if (pIVar17->interfaceOffsets[uVar18].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
           ) {
          ppMVar20 = &(&pIVar17->vtable)[pIVar17->interfaceOffsets[uVar18].offset].get_Current.method;
          goto code_?;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar19);
    }
    ppMVar20 = (MethodInfo **)func_?(pIVar6);
code_?:
    piVar21 = (int *)(*(code *)*ppMVar20)();
    if (piVar21 == (int *)0x0) goto code_?;
    uVar18 = 0;
    uVar19 = *(ushort *)(*piVar21 + 0xb6);
    if (uVar19 != 0) {
      do {
        if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar21 + 0x58) + (uint)uVar18 * 8) ==
            TypeInfo__RTG__IGizmoBehaviour) {
          puVar22 = (undefined4 *)
                    (*piVar21 +
                    (*(int *)(*(int *)(*piVar21 + 0x58) + 4 + (uint)uVar18 * 8) + 0x19) * 8);
          goto code_?;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar19);
    }
    puVar22 = (undefined4 *)func_?(piVar21);
code_?:
    cVar7 = (*(code *)*puVar22)();
    if (cVar7 != '\0') {
      func_?(0xf,TypeInfo__RTG__IGizmoBehaviour);
    }
    goto code_?;
  }
code_?:
  func_?();
  func_?();
  uVar9 = func_?();
  func_?(uVar9);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  (this->fields)._hoveredHandle = (IGizmoHandle *)0x0;
  func_?(&(this->fields)._hoveredHandle,0);
  if ((hoverInfo._isHovered != 0) && (hoverInfo._handleId != 0)) {
    (this->fields)._hoverInfo._isHovered = 1;
    (this->fields)._hoverInfo._handleId = hoverInfo._handleId;
    (this->fields)._hoverInfo._hoverPoint.x = hoverInfo._hoverPoint.x;
    (this->fields)._hoverInfo._hoverPoint.y = hoverInfo._hoverPoint.y;
    (this->fields)._hoverInfo._hoverPoint.z = hoverInfo._hoverPoint.z;
    this_00 = (this->fields)._handles;
    if (this_00 == (GizmoHandleCollection *)0x0) goto code_?;
    pIVar6 = GizmoHandleCollection::GizmoHandleCollection_GetHandleById
                       (this_00,hoverInfo._handleId,(MethodInfo *)0x0);
    (this->fields)._hoveredHandle = pIVar6;
    func_?();
    (this->fields)._hoverInfo._handleDimension = hoverInfo._handleDimension;
  }
  if (bVar4 == 0) {
    if ((this->fields)._hoverInfo._isHovered == 0) goto code_?;
    if ((this->fields).PreHoverEnter != (GizmoPreHoverEnterHandler *)0x0) {
      pGVar7 = (this->fields).PreHoverEnter;
      (*(pGVar7->fields)._._.invoke_impl)((pGVar7->fields)._._.method_code,this);
    }
    pGVar8 = (this->fields)._behaviours;
    if (pGVar8 != (GizmoBehaviourCollection *)0x0) {
      pIStack_9 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar8,(MethodInfo *)0x0);
      uStack_1 = 4;
      while (pIStack_9 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar10 = func_?(0);
        if (cVar10 == '\0') goto code_?;
        if ((pIStack_9 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar10 = func_?(1);
        if (cVar10 != '\0') {
          func_?(0xd,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else if ((this->fields)._hoverInfo._isHovered == 0) {
    if ((this->fields).PreHoverExit != (GizmoPreHoverExitHandler *)0x0) {
      pGVar11 = (this->fields).PreHoverExit;
      (*(pGVar11->fields)._._.invoke_impl)((pGVar11->fields)._._.method_code,this);
    }
    pGVar8 = (this->fields)._behaviours;
    if (pGVar8 != (GizmoBehaviourCollection *)0x0) {
      pIVar12 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar8,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar10 = func_?(0);
        if (cVar10 == '\0') {
          uStack_1 = 0xffffffff;
          if (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
            func_?(0);
          }
          if ((this->fields).PostHoverExit == (GizmoPostHoverExitHandler *)0x0)
          goto code_?;
          pGVar13 = (this->fields).PostHoverExit;
          goto code_?;
        }
        if ((pIVar12 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar10 = func_?(1);
        if (cVar10 != '\0') {
          func_?(0xe,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else if (iVar5 == (this->fields)._hoverInfo._handleId) {
code_?:
    if ((this->fields).PreHoverEnter != (GizmoPreHoverEnterHandler *)0x0) {
      pGVar7 = (this->fields).PreHoverEnter;
      (*(pGVar7->fields)._._.invoke_impl)((pGVar7->fields)._._.method_code,this);
    }
    pGVar8 = (this->fields)._behaviours;
    if (pGVar8 != (GizmoBehaviourCollection *)0x0) {
      pIStack_9 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                             (pGVar8,(MethodInfo *)0x0);
      uStack_1 = 10;
      while (pIStack_9 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar10 = func_?(0);
        if (cVar10 == '\0') goto code_?;
        if ((pIStack_9 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar10 = func_?(1);
        if (cVar10 != '\0') {
          func_?(0xd,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
  else {
    if ((this->fields).PreHoverExit != (GizmoPreHoverExitHandler *)0x0) {
      pGVar11 = (this->fields).PreHoverExit;
      (*(pGVar11->fields)._._.invoke_impl)((pGVar11->fields)._._.method_code,this);
    }
    pGVar8 = (this->fields)._behaviours;
    if (pGVar8 != (GizmoBehaviourCollection *)0x0) {
      pIVar12 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                         (pGVar8,(MethodInfo *)0x0);
      uStack_1 = 7;
      while (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
        cVar10 = func_?(0);
        if (cVar10 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          uStack_1 = 0xffffffff;
          if ((this->fields).PostHoverExit != (GizmoPostHoverExitHandler *)0x0) {
            pGVar13 = (this->fields).PostHoverExit;
            (*(pGVar13->fields)._._.invoke_impl)((pGVar13->fields)._._.method_code,this);
          }
          goto code_?;
        }
        if ((pIVar12 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) ||
           (iVar5 = func_?(0), iVar5 == 0)) break;
        cVar10 = func_?(1);
        if (cVar10 != '\0') {
          func_?(0xe,TypeInfo__RTG__IGizmoBehaviour);
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  uVar14 = func_?();
  uVar14 = func_?(uVar14);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  uStack_1 = 0xffffffff;
  if (pIStack_9 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
    func_?(0);
  }
  if ((this->fields).PostHoverEnter != (GizmoPostHoverEnterHandler *)0x0) {
    pGVar13 = (GizmoPostHoverExitHandler *)(this->fields).PostHoverEnter;
code_?:
    uStack_1 = 0xffffffff;
    (*(pGVar13->fields)._._.invoke_impl)((pGVar13->fields)._._.method_code,this);
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
  (value->fields)._behaviours = (List_1_RTG_IGizmoBehaviour_ *)pLVar1;
  func_?(pMVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar2);
  (this->fields)._behaviours = value;
  func_?(&(this->fields)._behaviours,value);
  pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
  (this->fields)._genericHoverPriority = (Priority *)pUVar3;
  func_?(&(this->fields)._genericHoverPriority,pUVar3);
  pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
           func_?(TypeInfo__RTG__Priority);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
  (this->fields)._hoverPriority3D = (Priority *)pUVar3;
  func_?();
  pUVar3 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar3,(MethodInfo *)0x0);
  (this->fields)._hoverPriority2D = (Priority *)pUVar3;
  func_?(&(this->fields)._hoverPriority2D,pUVar3);
  this_00 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  if (cRam_? == '\0') {
    ppQStack4 =
         (Quaternion__Class **)
         &MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_;
    func_?();
    ppLStack5 = &TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    ppQStack4 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar7 = (pQVar6->identityQuaternion).y;
  fVar8 = (pQVar6->identityQuaternion).z;
  fVar9 = (pQVar6->identityQuaternion).w;
  (this_00->fields)._rotation3D.x = (pQVar6->identityQuaternion).x;
  (this_00->fields)._rotation3D.y = fVar7;
  (this_00->fields)._rotation3D.z = fVar8;
  (this_00->fields)._rotation3D.w = fVar9;
  if (cRam_? == '\0') {
    ppQStack4 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar7 = (pQVar6->identityQuaternion).y;
  fVar8 = (pQVar6->identityQuaternion).z;
  fVar9 = (pQVar6->identityQuaternion).w;
  (this_00->fields)._localRotation3D.x = (pQVar6->identityQuaternion).x;
  (this_00->fields)._localRotation3D.y = fVar7;
  (this_00->fields)._localRotation3D.z = fVar8;
  (this_00->fields)._localRotation3D.w = fVar9;
  if (cRam_? == '\0') {
    ppQStack4 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar7 = (pQVar6->identityQuaternion).y;
  fVar8 = (pQVar6->identityQuaternion).z;
  fVar9 = (pQVar6->identityQuaternion).w;
  (this_00->fields)._rotation2D.x = (pQVar6->identityQuaternion).x;
  (this_00->fields)._rotation2D.y = fVar7;
  (this_00->fields)._rotation2D.z = fVar8;
  (this_00->fields)._rotation2D.w = fVar9;
  if (cRam_? == '\0') {
    ppQStack4 = &TypeInfo__UnityEngine__Quaternion;
    func_?();
    cRam_? = '\x01';
  }
  ppQStack4 = (Quaternion__Class **)0x3;
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar7 = (pQVar6->identityQuaternion).y;
  fVar8 = (pQVar6->identityQuaternion).z;
  fVar9 = (pQVar6->identityQuaternion).w;
  (this_00->fields)._localRotation2D.x = (pQVar6->identityQuaternion).x;
  (this_00->fields)._localRotation2D.y = fVar7;
  (this_00->fields)._localRotation2D.z = fVar8;
  (this_00->fields)._localRotation2D.w = fVar9;
  ppLStack5 = (List_1_RTG_GizmoTransform___Class **)TypeInfo__UnityEngine__Vector3;
  pVVar10 = (Vector3__Array *)func_?();
  (this_00->fields)._axes3D = pVVar10;
  func_?();
  pVVar11 = (Vector2__Array *)func_?();
  (this_00->fields)._axes2D = pVVar11;
  func_?(&(this_00->fields)._axes2D);
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar1,10,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_);
  pMVar2 = (MethodInfo *)&(this_00->fields)._children;
  (this_00->fields)._children = (List_1_RTG_GizmoTransform_ *)pLVar1;
  func_?(pMVar2,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this_00,ExceptionArgument__Enum_obj,pMVar2);
  GizmoTransform::GizmoTransform_Update3DAxes(this_00,(MethodInfo *)0x0);
  GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)&(this->fields)._transform;
  (this->fields)._transform = this_00;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  value_00 = (GizmoHandleCollection *)func_?();
  if (cRam_? == '\0') {
    ppMStack12 =
         &MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
    ;
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppMStack12 = (MethodInfo **)TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>;
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
  (value_00->fields)._idToHandle = (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)this_02;
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
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar13->zeroVector).y;
  fVar7 = (pVVar13->zeroVector).z;
  (this->fields)._hoverInfo._hoverPoint.x = (pVVar13->zeroVector).x;
  (this->fields)._hoverInfo._hoverPoint.y = fVar8;
  (this->fields)._hoverInfo._hoverPoint.z = fVar7;
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
  a = (this->fields).OffsetDragAxisModify;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoOffsetDragAxisModifyHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoOffsetDragAxisModifyHandler *)
             func_?(&(this->fields).OffsetDragAxisModify,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostDisabled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDisabledHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDisabledHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDisabledHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDisabledHandler *)func_?(&(this->fields).PostDisabled,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostDragBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragBeginHandler *)func_?(&(this->fields).PostDragBegin,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostDragBeginAttempt;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginAttemptHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragBeginAttemptHandler *)
             func_?(&(this->fields).PostDragBeginAttempt,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostDragEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPostDragEndHandler)
      {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragEndHandler *)func_?(&(this->fields).PostDragEnd,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostDragUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragUpdateHandler *)func_?(&(this->fields).PostDragUpdate,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostHandlePicked;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHandlePickedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHandlePickedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHandlePickedHandler *)
             func_?(&(this->fields).PostHandlePicked,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostHoverEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHoverEnterHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHoverEnterHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHoverEnterHandler *)func_?(&(this->fields).PostHoverEnter,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostHoverExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHoverExitHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHoverExitHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHoverExitHandler *)func_?(&(this->fields).PostHoverExit,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PostUpdateEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostUpdateEndHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostUpdateEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostUpdateEndHandler *)func_?(&(this->fields).PostUpdateEnd,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreDragBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragBeginHandler *)func_?(&(this->fields).PreDragBegin,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreDragBeginAttempt;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginAttemptHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragBeginAttemptHandler *)
             func_?(&(this->fields).PreDragBeginAttempt,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreDragEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragEndHandler *)func_?(&(this->fields).PreDragEnd,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreDragUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragUpdateHandler *)func_?(&(this->fields).PreDragUpdate,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreHandlePicked;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHandlePickedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHandlePickedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHandlePickedHandler *)
             func_?(&(this->fields).PreHandlePicked,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreHoverEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHoverEnterHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHoverEnterHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHoverEnterHandler *)func_?(&(this->fields).PreHoverEnter,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreHoverExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHoverExitHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHoverExitHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHoverExitHandler *)func_?(&(this->fields).PreHoverExit,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  a = (this->fields).PreUpdateBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreUpdateBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreUpdateBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreUpdateBeginHandler *)func_?(&(this->fields).PreUpdateBegin,pDVar2,a);
    bVar5 = pGVar4 == a;
    a = pGVar4;
    if (bVar5) {
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
  if ((this->fields)._sceneGizmo == (SceneGizmo *)0x0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    if (pOVar2 != (Object *)0x0) {
      return (Camera *)pOVar2[4].monitor;
    }
  }
  else {
    pSVar3 = (this->fields)._sceneGizmo;
    if ((pSVar3 != (SceneGizmo *)0x0) &&
       (pRVar4 = (pSVar3->fields)._sceneGizmoCamera, pRVar4 != (RTSceneGizmoCamera *)0x0)) {
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
  source = (this->fields).OffsetDragAxisModify;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoOffsetDragAxisModifyHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoOffsetDragAxisModifyHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoOffsetDragAxisModifyHandler *)
             func_?(&(this->fields).OffsetDragAxisModify,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostDisabled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDisabledHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDisabledHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDisabledHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDisabledHandler *)func_?(&(this->fields).PostDisabled,pDVar2,source)
    ;
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostDragBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragBeginHandler *)
             func_?(&(this->fields).PostDragBegin,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostDragBeginAttempt;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragBeginAttemptHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragBeginAttemptHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragBeginAttemptHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragBeginAttemptHandler *)
             func_?(&(this->fields).PostDragBeginAttempt,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostDragEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPostDragEndHandler)
      {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragEndHandler *)func_?(&(this->fields).PostDragEnd,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostDragUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostDragUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostDragUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostDragUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostDragUpdateHandler *)
             func_?(&(this->fields).PostDragUpdate,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostHandlePicked;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHandlePickedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHandlePickedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHandlePickedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHandlePickedHandler *)
             func_?(&(this->fields).PostHandlePicked,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostHoverEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHoverEnterHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHoverEnterHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHoverEnterHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHoverEnterHandler *)
             func_?(&(this->fields).PostHoverEnter,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostHoverExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostHoverExitHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostHoverExitHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostHoverExitHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostHoverExitHandler *)
             func_?(&(this->fields).PostHoverExit,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PostUpdateEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPostUpdateEndHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPostUpdateEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPostUpdateEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPostUpdateEndHandler *)
             func_?(&(this->fields).PostUpdateEnd,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreDragBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragBeginHandler *)func_?(&(this->fields).PreDragBegin,pDVar2,source)
    ;
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreDragBeginAttempt;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragBeginAttemptHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragBeginAttemptHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragBeginAttemptHandler *)
             func_?(&(this->fields).PreDragBeginAttempt,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreDragEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__GizmoPreDragEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragEndHandler *)func_?(&(this->fields).PreDragEnd,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreDragUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreDragUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreDragUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreDragUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreDragUpdateHandler *)
             func_?(&(this->fields).PreDragUpdate,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreHandlePicked;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHandlePickedHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHandlePickedHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHandlePickedHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHandlePickedHandler *)
             func_?(&(this->fields).PreHandlePicked,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreHoverEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHoverEnterHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHoverEnterHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHoverEnterHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHoverEnterHandler *)
             func_?(&(this->fields).PreHoverEnter,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreHoverExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreHoverExitHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreHoverExitHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreHoverExitHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreHoverExitHandler *)func_?(&(this->fields).PreHoverExit,pDVar2,source)
    ;
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
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
  source = (this->fields).PreUpdateBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((GizmoPreUpdateBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__GizmoPreUpdateBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pGVar4 = (GizmoPreUpdateBeginHandler *)
             func_?(&(this->fields).PreUpdateBegin,pDVar2,source);
    bVar5 = pGVar4 == source;
    source = pGVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


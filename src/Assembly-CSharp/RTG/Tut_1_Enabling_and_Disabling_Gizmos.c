
/* Void OnTargetObjectChanged(GameObject) */

void Assembly-CSharp.dll::RTG::Tut_1_Enabling_and_Disabling_Gizmos::
     Tut_1_Enabling_and_Disabling_Gizmos_OnTargetObjectChanged
               (Tut_1_Enabling_and_Disabling_Gizmos *this,GameObject *newTargetObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields)._targetObject = newTargetObject;
  func_?(&(this->fields)._targetObject,newTargetObject);
  x = (this->fields)._targetObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  pOVar2 = (this->fields)._objectMoveGizmo;
  if (bVar1 == 0) {
    if ((pOVar2 == (ObjectTransformGizmo *)0x0) ||
       (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectRotationGizmo;
    if ((pOVar2 == (ObjectTransformGizmo *)0x0) ||
       (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectScaleGizmo;
    if ((pOVar2 == (ObjectTransformGizmo *)0x0) ||
       (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectUniversalGizmo;
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    pGVar3 = (pOVar2->fields)._._gizmo;
  }
  else {
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
              (pOVar2,(this->fields)._targetObject,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectRotationGizmo;
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
              (pOVar2,(this->fields)._targetObject,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectScaleGizmo;
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
              (pOVar2,(this->fields)._targetObject,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._objectUniversalGizmo;
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
              (pOVar2,(this->fields)._targetObject,(MethodInfo *)0x0);
    pOVar2 = (this->fields)._workGizmo;
    if (pOVar2 == (ObjectTransformGizmo *)0x0) goto code_?;
    pGVar3 = (pOVar2->fields)._._gizmo;
  }
  if (pGVar3 != (Gizmo *)0x0) {
    uStack4 = 0xffffffff;
    puStack5 = &DAT_?;
    puStack6 = (undefined *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0x0000002c;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__IDisposable);
      func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
      func_?(&TypeInfo__System__Collections__IEnumerator);
      func_?(&TypeInfo__RTG__IGizmoBehaviour);
      cRam_? = '\x01';
    }
    pGVar3 = in_stack_7;
    if (bStack8 == (in_stack_7->fields)._isEnabled) {
code_?:
      *unaff_FS_OFFSET = puStack6;
      return;
    }
    if (bStack8 == 0) {
      Gizmo::Gizmo_EndDragSession(in_stack_7,(MethodInfo *)0x0);
      GizmoHoverInfo::GizmoHoverInfo_Reset(&(pGVar3->fields)._hoverInfo,(MethodInfo *)0x0);
      (pGVar3->fields)._hoveredHandle = (IGizmoHandle *)0x0;
      func_?(&(pGVar3->fields)._hoveredHandle,0);
      pGVar9 = (pGVar3->fields)._behaviours;
      (pGVar3->fields)._isEnabled = 0;
      if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
        pIVar10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar9,(MethodInfo *)0x0);
        uStack4 = 1;
        while (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar10);
          if (cVar11 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar10);
            }
            if ((in_stack_7->fields).PostDisabled == (GizmoPostDisabledHandler *)0x0)
            goto code_?;
            pGVar12 = (GizmoPostEnabledHandler *)(in_stack_7->fields).PostDisabled;
            goto code_?;
          }
          if (pIVar10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar13 = pIVar10->klass;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15._0_1_ = (pIVar13->_1).rank;
          uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar16 = &(&pIVar10->klass->vtable)[pIVar10->klass->interfaceOffsets[uVar14].offset].
                           get_Current.method;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          ppMVar16 = (MethodInfo **)
                    func_?(pIVar10,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,0);
code_?:
          piVar17 = (int *)(*(code *)*ppMVar16)(pIVar10,ppMVar16[1]);
          if (piVar17 == (int *)0x0) break;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15 = *(ushort *)(*piVar17 + 0xb6);
          if (uVar15 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar17 + 0x58) + (uint)uVar14 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar18 = (undefined4 *)
                          (*piVar17 +
                          (*(int *)(*(int *)(*piVar17 + 0x58) + 4 + (uint)uVar14 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          puVar18 = (undefined4 *)func_?(piVar17,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar11 = (*(code *)*puVar18)(piVar17,puVar18[1]);
          if (cVar11 != '\0') {
            func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar17);
          }
        }
      }
    }
    else {
      pGVar9 = (in_stack_7->fields)._behaviours;
      (in_stack_7->fields)._isEnabled = 1;
      if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
        pIVar10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar9,(MethodInfo *)0x0);
        uStack4 = 4;
        while (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar10);
          if (cVar11 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar10);
            }
            if ((in_stack_7->fields).PostEnabled != (GizmoPostEnabledHandler *)0x0) {
              pGVar12 = (in_stack_7->fields).PostEnabled;
code_?:
              uStack4 = 0xffffffff;
              (*(pGVar12->fields)._._.invoke_impl)
                        ((pGVar12->fields)._._.method_code,in_stack_7,
                         (pGVar12->fields)._._.method);
            }
            goto code_?;
          }
          if (pIVar10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar13 = pIVar10->klass;
          uVar15 = 0;
          _bStack00000044 = 0;
          uVar14._0_1_ = (pIVar13->_1).rank;
          uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar14 != 0) {
            do {
              if (pIVar13->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar16 = &(&pIVar10->klass->vtable)[pIVar10->klass->interfaceOffsets[uVar15].offset].
                           get_Current.method;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar14);
          }
          ppMVar16 = (MethodInfo **)
                    func_?(pIVar10,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,0);
code_?:
          piVar17 = (int *)(*(code *)*ppMVar16)(pIVar10,ppMVar16[1]);
          if (piVar17 == (int *)0x0) break;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15 = *(ushort *)(*piVar17 + 0xb6);
          if (uVar15 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar17 + 0x58) + (uint)uVar14 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar18 = (undefined4 *)
                          (*piVar17 +
                          (*(int *)(*(int *)(*piVar17 + 0x58) + 4 + (uint)uVar14 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          puVar18 = (undefined4 *)func_?(piVar17,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar11 = (*(code *)*puVar18)(piVar17,puVar18[1]);
          if (cVar11 != '\0') {
            func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar17);
          }
        }
      }
    }
    uVar19 = func_?();
    func_?(uVar19);
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* GameObject PickGameObject() */

GameObject *
Assembly-CSharp.dll::RTG::Tut_1_Enabling_and_Disabling_Gizmos::
Tut_1_Enabling_and_Disabling_Gizmos_PickGameObject
          (Tut_1_Enabling_and_Disabling_Gizmos *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&stack0xffffffa8;
  func_?(method_00,0,0x2c);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  pVVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
           DefaultEventSystem_Input_get_mousePosition
                     ((Vector3 *)&stack0xfffffff0,(DefaultEventSystem_Input *)0x0,method_00);
  if (this_00 != (Camera *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       ((Ray *)&stack0xffffffe4,this_00,*pVVar1,(MethodInfo *)0x0);
    ray = *pRVar2;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_14
                      (ray,(RaycastHit *)&stack0xffffffa8,3.4028235e+38,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return (GameObject *)0x0;
    }
    this_01 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                        ((RaycastHit *)&stack0xffffffa8,(MethodInfo *)0x0);
    if (this_01 != (Collider *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      return pGVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar4 = (GameObject *)(*pcVar5)();
  return pGVar4;
}


/* Void SetWorkGizmoId(Tut_1_Enabling_and_Disabling_Gizmos+GizmoId) */

void Assembly-CSharp.dll::RTG::Tut_1_Enabling_and_Disabling_Gizmos::
     Tut_1_Enabling_and_Disabling_Gizmos_SetWorkGizmoId
               (Tut_1_Enabling_and_Disabling_Gizmos *this,
               Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum gizmoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gizmoId == (this->fields)._workGizmoId) {
    return;
  }
  pOVar1 = (this->fields)._objectMoveGizmo;
  if ((pOVar1 == (ObjectTransformGizmo *)0x0) ||
     (pGVar2 = (pOVar1->fields)._._gizmo, pGVar2 == (Gizmo *)0x0)) goto code_?;
  Gizmo::Gizmo_SetEnabled(pGVar2,0,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._objectRotationGizmo;
  if ((pOVar1 == (ObjectTransformGizmo *)0x0) ||
     (pGVar2 = (pOVar1->fields)._._gizmo, pGVar2 == (Gizmo *)0x0)) goto code_?;
  Gizmo::Gizmo_SetEnabled(pGVar2,0,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._objectScaleGizmo;
  if ((pOVar1 == (ObjectTransformGizmo *)0x0) ||
     (pGVar2 = (pOVar1->fields)._._gizmo, pGVar2 == (Gizmo *)0x0)) goto code_?;
  Gizmo::Gizmo_SetEnabled(pGVar2,0,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._objectUniversalGizmo;
  if ((pOVar1 == (ObjectTransformGizmo *)0x0) ||
     (pGVar2 = (pOVar1->fields)._._gizmo, pGVar2 == (Gizmo *)0x0)) goto code_?;
  Gizmo::Gizmo_SetEnabled(pGVar2,0,(MethodInfo *)0x0);
  (this->fields)._workGizmoId = gizmoId;
  if (gizmoId == Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Move) {
    pOVar1 = (this->fields)._objectMoveGizmo;
code_?:
    (this->fields)._workGizmo = pOVar1;
    func_?();
  }
  else {
    if (gizmoId == Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Rotate) {
      pOVar1 = (this->fields)._objectRotationGizmo;
      goto code_?;
    }
    if (gizmoId == Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Scale) {
      pOVar1 = (this->fields)._objectScaleGizmo;
      goto code_?;
    }
    if (gizmoId == Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Universal) {
      pOVar1 = (this->fields)._objectUniversalGizmo;
      goto code_?;
    }
  }
  x = (this->fields)._targetObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pOVar1 = (this->fields)._workGizmo;
  if ((pOVar1 != (ObjectTransformGizmo *)0x0) && ((pOVar1->fields)._._gizmo != (Gizmo *)0x0)) {
    uStack4 = 0xffffffff;
    puStack5 = &DAT_?;
    puStack6 = (undefined *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0x0000002c;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__IDisposable);
      func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
      func_?(&TypeInfo__System__Collections__IEnumerator);
      func_?(&TypeInfo__RTG__IGizmoBehaviour);
      cRam_? = '\x01';
    }
    pGVar2 = in_stack_7;
    if (bStack8 == (in_stack_7->fields)._isEnabled) {
code_?:
      *unaff_FS_OFFSET = puStack6;
      return;
    }
    if (bStack8 == 0) {
      Gizmo::Gizmo_EndDragSession(in_stack_7,(MethodInfo *)0x0);
      GizmoHoverInfo::GizmoHoverInfo_Reset(&(pGVar2->fields)._hoverInfo,(MethodInfo *)0x0);
      (pGVar2->fields)._hoveredHandle = (IGizmoHandle *)0x0;
      func_?(&(pGVar2->fields)._hoveredHandle,0);
      pGVar9 = (pGVar2->fields)._behaviours;
      (pGVar2->fields)._isEnabled = 0;
      if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
        pIVar10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar9,(MethodInfo *)0x0);
        uStack4 = 1;
        while (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar10);
          if (cVar11 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar10);
            }
            if ((in_stack_7->fields).PostDisabled == (GizmoPostDisabledHandler *)0x0)
            goto code_?;
            pGVar12 = (GizmoPostEnabledHandler *)(in_stack_7->fields).PostDisabled;
            goto code_?;
          }
          if (pIVar10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar13 = pIVar10->klass;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15._0_1_ = (pIVar13->_1).rank;
          uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar16 = &(&pIVar10->klass->vtable)[pIVar10->klass->interfaceOffsets[uVar14].offset].
                           get_Current.method;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          ppMVar16 = (MethodInfo **)
                    func_?(pIVar10,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,0);
code_?:
          piVar17 = (int *)(*(code *)*ppMVar16)(pIVar10,ppMVar16[1]);
          if (piVar17 == (int *)0x0) break;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15 = *(ushort *)(*piVar17 + 0xb6);
          if (uVar15 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar17 + 0x58) + (uint)uVar14 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar18 = (undefined4 *)
                          (*piVar17 +
                          (*(int *)(*(int *)(*piVar17 + 0x58) + 4 + (uint)uVar14 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          puVar18 = (undefined4 *)func_?(piVar17,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar11 = (*(code *)*puVar18)(piVar17,puVar18[1]);
          if (cVar11 != '\0') {
            func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar17);
          }
        }
      }
    }
    else {
      pGVar9 = (in_stack_7->fields)._behaviours;
      (in_stack_7->fields)._isEnabled = 1;
      if (pGVar9 != (GizmoBehaviourCollection *)0x0) {
        pIVar10 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar9,(MethodInfo *)0x0);
        uStack4 = 4;
        while (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar11 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar10);
          if (cVar11 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar10 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar10);
            }
            if ((in_stack_7->fields).PostEnabled != (GizmoPostEnabledHandler *)0x0) {
              pGVar12 = (in_stack_7->fields).PostEnabled;
code_?:
              uStack4 = 0xffffffff;
              (*(pGVar12->fields)._._.invoke_impl)
                        ((pGVar12->fields)._._.method_code,in_stack_7,
                         (pGVar12->fields)._._.method);
            }
            goto code_?;
          }
          if (pIVar10 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar13 = pIVar10->klass;
          uVar15 = 0;
          _bStack00000044 = 0;
          uVar14._0_1_ = (pIVar13->_1).rank;
          uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar14 != 0) {
            do {
              if (pIVar13->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar16 = &(&pIVar10->klass->vtable)[pIVar10->klass->interfaceOffsets[uVar15].offset].
                           get_Current.method;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar14);
          }
          ppMVar16 = (MethodInfo **)
                    func_?(pIVar10,
                                    TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                    ,0);
code_?:
          piVar17 = (int *)(*(code *)*ppMVar16)(pIVar10,ppMVar16[1]);
          if (piVar17 == (int *)0x0) break;
          uVar14 = 0;
          _bStack00000044 = 0;
          uVar15 = *(ushort *)(*piVar17 + 0xb6);
          if (uVar15 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar17 + 0x58) + (uint)uVar14 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar18 = (undefined4 *)
                          (*piVar17 +
                          (*(int *)(*(int *)(*piVar17 + 0x58) + 4 + (uint)uVar14 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          puVar18 = (undefined4 *)func_?(piVar17,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar11 = (*(code *)*puVar18)(piVar17,puVar18[1]);
          if (cVar11 != '\0') {
            func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar17);
          }
        }
      }
    }
    uVar19 = func_?();
    func_?(uVar19);
    pcVar20 = (code *)swi(3);
    (*pcVar20)();
    return;
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::Tut_1_Enabling_and_Disabling_Gizmos::
     Tut_1_Enabling_and_Disabling_Gizmos_Start
               (Tut_1_Enabling_and_Disabling_Gizmos *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pRVar1 = (RTGizmosEngine *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pRVar1 != (RTGizmosEngine *)0x0) {
    pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectMoveGizmo(pRVar1,(MethodInfo *)0x0);
    (this->fields)._objectMoveGizmo = pOVar2;
    func_?(&(this->fields)._objectMoveGizmo,pOVar2);
    pRVar1 = (RTGizmosEngine *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pRVar1 != (RTGizmosEngine *)0x0) {
      pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo(pRVar1,(MethodInfo *)0x0);
      (this->fields)._objectRotationGizmo = pOVar2;
      func_?(&(this->fields)._objectRotationGizmo,pOVar2);
      pRVar1 = (RTGizmosEngine *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (pRVar1 != (RTGizmosEngine *)0x0) {
        pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo(pRVar1,(MethodInfo *)0x0);
        (this->fields)._objectScaleGizmo = pOVar2;
        func_?(&(this->fields)._objectScaleGizmo,pOVar2);
        pRVar1 = (RTGizmosEngine *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pRVar1 != (RTGizmosEngine *)0x0) {
          pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                             (pRVar1,(MethodInfo *)0x0);
          (this->fields)._objectUniversalGizmo = pOVar2;
          func_?(&(this->fields)._objectUniversalGizmo,pOVar2);
          pOVar2 = (this->fields)._objectMoveGizmo;
          if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
             (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
            Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
            pOVar2 = (this->fields)._objectRotationGizmo;
            if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
               (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
              Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
              pOVar2 = (this->fields)._objectScaleGizmo;
              if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
                 (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
                Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
                pOVar2 = (this->fields)._objectUniversalGizmo;
                if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
                   (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
                  Gizmo::Gizmo_SetEnabled(pGVar3,0,(MethodInfo *)0x0);
                  pOVar2 = (this->fields)._objectMoveGizmo;
                  (this->fields)._workGizmo = pOVar2;
                  func_?(&(this->fields)._workGizmo,pOVar2);
                  (this->fields)._workGizmoId = 1;
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::Tut_1_Enabling_and_Disabling_Gizmos::
     Tut_1_Enabling_and_Disabling_Gizmos_Update
               (Tut_1_Enabling_and_Disabling_Gizmos *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = RTInput::RTInput_WasLeftMouseButtonPressedThisFrame((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    }
    pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pOVar2 == (Object *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pOVar2[5].klass == (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Physics);
        cRam_? = '\x01';
      }
      func_?(&stack0xffffffa8,0,0x2c);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      pVVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&RStack_5.m_Direction,(DefaultEventSystem_Input *)0x0,in_stack_6);
      if (this_00 == (Camera *)0x0) goto code_?;
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                         (&RStack_5,this_00,*pVVar4,(MethodInfo *)0x0);
      uVar8 = (pRVar7->m_Origin).x;
      uVar9 = (pRVar7->m_Origin).y;
      uVar10 = (pRVar7->m_Origin).z;
      ray.m_Origin.z = (float)uVar10;
      ray.m_Origin.y = (float)uVar9;
      ray.m_Origin.x = (float)uVar8;
      uVar11 = (pRVar7->m_Direction).x;
      ray.m_Direction.x = (float)uVar11;
      RStack_5.m_Direction.y = (pRVar7->m_Direction).y;
      RStack_5.m_Direction.z = (pRVar7->m_Direction).z;
      if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Physics);
      }
      ray.m_Direction.y = RStack_5.m_Direction.y;
      ray.m_Direction.z = RStack_5.m_Direction.z;
      bVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_14
                        (ray,(RaycastHit *)&stack0xffffffa8,3.4028235e+38,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        newTargetObject = (GameObject *)0x0;
      }
      else {
        this_01 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                            ((RaycastHit *)&stack0xffffffa8,(MethodInfo *)0x0);
        if (this_01 == (Collider *)0x0) goto code_?;
        newTargetObject =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_01,(MethodInfo *)0x0);
      }
      y = (this->fields)._targetObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)newTargetObject,(Object_1 *)y,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        Tut_1_Enabling_and_Disabling_Gizmos_OnTargetObjectChanged
                  (this,newTargetObject,(MethodInfo *)0x0);
      }
    }
  }
  bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_W,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_E,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_1_Enabling_and_Disabling_Gizmos_SetWorkGizmoId
                (this,Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Rotate,(MethodInfo *)0x0);
      return;
    }
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_R,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_1_Enabling_and_Disabling_Gizmos_SetWorkGizmoId
                (this,Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Scale,(MethodInfo *)0x0);
      return;
    }
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_T,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_1_Enabling_and_Disabling_Gizmos_SetWorkGizmoId
                (this,Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Universal,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  else {
    Tut_1_Enabling_and_Disabling_Gizmos_SetWorkGizmoId
              (this,Tut_1_Enabling_and_Disabling_Gizmos_GizmoId__Enum_Move,(MethodInfo *)0x0);
  }
  return;
}


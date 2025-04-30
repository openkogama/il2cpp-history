
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
  ppGVar1 = &(this->fields)._targetObject;
  *ppGVar1 = newTargetObject;
  func_?(ppGVar1,newTargetObject);
  x = *ppGVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  pOVar3 = (this->fields)._objectMoveGizmo;
  if (bVar2 == 0) {
    if ((pOVar3 == (ObjectTransformGizmo *)0x0) ||
       (pGVar4 = (pOVar3->fields)._._gizmo, pGVar4 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar4,0,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectRotationGizmo;
    if ((pOVar3 == (ObjectTransformGizmo *)0x0) ||
       (pGVar4 = (pOVar3->fields)._._gizmo, pGVar4 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar4,0,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectScaleGizmo;
    if ((pOVar3 == (ObjectTransformGizmo *)0x0) ||
       (pGVar4 = (pOVar3->fields)._._gizmo, pGVar4 == (Gizmo *)0x0)) goto code_?;
    Gizmo::Gizmo_SetEnabled(pGVar4,0,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectUniversalGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    pGVar4 = (pOVar3->fields)._._gizmo;
  }
  else {
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar3,*ppGVar1,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectRotationGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar3,*ppGVar1,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectScaleGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar3,*ppGVar1,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._objectUniversalGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar3,*ppGVar1,(MethodInfo *)0x0);
    pOVar3 = (this->fields)._workGizmo;
    if (pOVar3 == (ObjectTransformGizmo *)0x0) goto code_?;
    pGVar4 = (pOVar3->fields)._._gizmo;
  }
  if (pGVar4 != (Gizmo *)0x0) {
    uStack5 = 0xffffffff;
    puStack6 = &DAT_?;
    uStack7 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0x0000002c;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__IDisposable);
      func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>);
      func_?(&TypeInfo__System__Collections__IEnumerator);
      func_?(&TypeInfo__RTG__IGizmoBehaviour);
      cRam_? = '\x01';
    }
    pGVar4 = in_stack_8;
    if (bStack9 == (in_stack_8->fields)._isEnabled) {
code_?:
      *unaff_FS_OFFSET = uStack7;
      return;
    }
    if (bStack9 == 0) {
      Gizmo::Gizmo_EndDragSession(in_stack_8,(MethodInfo *)0x0);
      GizmoHoverInfo::GizmoHoverInfo_Reset(&(pGVar4->fields)._hoverInfo,(MethodInfo *)0x0);
      ppIVar10 = &(pGVar4->fields)._hoveredHandle;
      *ppIVar10 = (IGizmoHandle *)0x0;
      func_?(ppIVar10,0);
      pGVar11 = (pGVar4->fields)._behaviours;
      (pGVar4->fields)._isEnabled = 0;
      if (pGVar11 != (GizmoBehaviourCollection *)0x0) {
        pIVar12 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                            (pGVar11,(MethodInfo *)0x0);
        uStack5 = 1;
        while (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar12);
          if (cVar13 == '\0') {
            uStack5 = 0xffffffff;
            if (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar12);
            }
            pGVar14 = (GizmoPostEnabledHandler *)(in_stack_8->fields).PostDisabled;
            goto code_?;
          }
          if (pIVar12 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar15 = pIVar12->klass;
          uVar16 = 0;
          _bStack00000044 = 0;
          uVar17._0_1_ = (pIVar15->_1).rank;
          uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
          if (uVar17 != 0) {
            do {
              if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar18 = &(&pIVar12->klass->vtable)
                            [pIVar12->klass->interfaceOffsets[uVar16].offset].get_Current.method;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          ppMVar18 = (MethodInfo **)
                     func_?(pIVar12,
                                     TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                     ,0);
code_?:
          piVar19 = (int *)(*(code *)*ppMVar18)(pIVar12,ppMVar18[1]);
          if (piVar19 == (int *)0x0) break;
          uVar16 = 0;
          _bStack00000044 = 0;
          uVar17 = *(ushort *)(*piVar19 + 0xb6);
          if (uVar17 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar19 + 0x58) + (uint)uVar16 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar20 = (undefined4 *)
                          (*piVar19 +
                          (*(int *)(*(int *)(*piVar19 + 0x58) + 4 + (uint)uVar16 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          puVar20 = (undefined4 *)func_?(piVar19,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar13 = (*(code *)*puVar20)(piVar19,puVar20[1]);
          if (cVar13 != '\0') {
            func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar19);
          }
        }
      }
    }
    else {
      pGVar11 = (in_stack_8->fields)._behaviours;
      (in_stack_8->fields)._isEnabled = 1;
      if (pGVar11 != (GizmoBehaviourCollection *)0x0) {
        pIVar12 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                            (pGVar11,(MethodInfo *)0x0);
        uStack5 = 4;
        while (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar12);
          if (cVar13 == '\0') {
            uStack5 = 0xffffffff;
            if (pIVar12 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar12);
            }
            pGVar14 = (in_stack_8->fields).PostEnabled;
code_?:
            uStack5 = 0xffffffff;
            if (pGVar14 != (GizmoPostEnabledHandler *)0x0) {
              (*(pGVar14->fields)._._.invoke_impl)
                        ((pGVar14->fields)._._.method_code,in_stack_8,
                         (pGVar14->fields)._._.method);
            }
            goto code_?;
          }
          if (pIVar12 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar15 = pIVar12->klass;
          uVar17 = 0;
          _bStack00000044 = 0;
          uVar16._0_1_ = (pIVar15->_1).rank;
          uVar16._1_1_ = (pIVar15->_1).minimumAlignment;
          if (uVar16 != 0) {
            do {
              if (pIVar15->interfaceOffsets[uVar17].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar18 = &(&pIVar12->klass->vtable)
                            [pIVar12->klass->interfaceOffsets[uVar17].offset].get_Current.method;
                goto code_?;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar16);
          }
          ppMVar18 = (MethodInfo **)
                     func_?(pIVar12,
                                     TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                     ,0);
code_?:
          piVar19 = (int *)(*(code *)*ppMVar18)(pIVar12,ppMVar18[1]);
          if (piVar19 == (int *)0x0) break;
          uVar16 = 0;
          _bStack00000044 = 0;
          uVar17 = *(ushort *)(*piVar19 + 0xb6);
          if (uVar17 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar19 + 0x58) + (uint)uVar16 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar20 = (undefined4 *)
                          (*piVar19 +
                          (*(int *)(*(int *)(*piVar19 + 0x58) + 4 + (uint)uVar16 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          puVar20 = (undefined4 *)func_?(piVar19,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar13 = (*(code *)*puVar20)(piVar19,puVar20[1]);
          if (cVar13 != '\0') {
            func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar19);
          }
        }
      }
    }
    uVar21 = func_?();
    func_?(uVar21);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
      ppIVar9 = &(pGVar2->fields)._hoveredHandle;
      *ppIVar9 = (IGizmoHandle *)0x0;
      func_?(ppIVar9,0);
      pGVar10 = (pGVar2->fields)._behaviours;
      (pGVar2->fields)._isEnabled = 0;
      if (pGVar10 != (GizmoBehaviourCollection *)0x0) {
        pIVar11 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar10,(MethodInfo *)0x0);
        uStack4 = 1;
        while (pIVar11 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar12 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar11);
          if (cVar12 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar11 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar11);
            }
            pGVar13 = (GizmoPostEnabledHandler *)(in_stack_7->fields).PostDisabled;
            goto code_?;
          }
          if (pIVar11 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar14 = pIVar11->klass;
          uVar15 = 0;
          _bStack00000044 = 0;
          uVar16._0_1_ = (pIVar14->_1).rank;
          uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
          if (uVar16 != 0) {
            do {
              if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar17 = &(&pIVar11->klass->vtable)[pIVar11->klass->interfaceOffsets[uVar15].offset]
                            .get_Current.method;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          ppMVar17 = (MethodInfo **)
                     func_?(pIVar11,
                                     TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                     ,0);
code_?:
          piVar18 = (int *)(*(code *)*ppMVar17)(pIVar11,ppMVar17[1]);
          if (piVar18 == (int *)0x0) break;
          uVar15 = 0;
          _bStack00000044 = 0;
          uVar16 = *(ushort *)(*piVar18 + 0xb6);
          if (uVar16 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar18 + 0x58) + (uint)uVar15 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar19 = (undefined4 *)
                          (*piVar18 +
                          (*(int *)(*(int *)(*piVar18 + 0x58) + 4 + (uint)uVar15 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          puVar19 = (undefined4 *)func_?(piVar18,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar12 = (*(code *)*puVar19)(piVar18,puVar19[1]);
          if (cVar12 != '\0') {
            func_?(9,TypeInfo__RTG__IGizmoBehaviour,piVar18);
          }
        }
      }
    }
    else {
      pGVar10 = (in_stack_7->fields)._behaviours;
      (in_stack_7->fields)._isEnabled = 1;
      if (pGVar10 != (GizmoBehaviourCollection *)0x0) {
        pIVar11 = GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
                           (pGVar10,(MethodInfo *)0x0);
        uStack4 = 4;
        while (pIVar11 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
          cVar12 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar11);
          if (cVar12 == '\0') {
            uStack4 = 0xffffffff;
            if (pIVar11 != (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pIVar11);
            }
            pGVar13 = (in_stack_7->fields).PostEnabled;
code_?:
            uStack4 = 0xffffffff;
            if (pGVar13 != (GizmoPostEnabledHandler *)0x0) {
              (*(pGVar13->fields)._._.invoke_impl)
                        ((pGVar13->fields)._._.method_code,in_stack_7,
                         (pGVar13->fields)._._.method);
            }
            goto code_?;
          }
          if (pIVar11 == (IEnumerator_1_RTG_IGizmoBehaviour_ *)0x0) break;
          pIVar14 = pIVar11->klass;
          uVar16 = 0;
          _bStack00000044 = 0;
          uVar15._0_1_ = (pIVar14->_1).rank;
          uVar15._1_1_ = (pIVar14->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIVar14->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>) {
                ppMVar17 = &(&pIVar11->klass->vtable)[pIVar11->klass->interfaceOffsets[uVar16].offset]
                            .get_Current.method;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar15);
          }
          ppMVar17 = (MethodInfo **)
                     func_?(pIVar11,
                                     TypeInfo__System__Collections__Generic__IEnumerator<RTG::IGizmoBehaviour>
                                     ,0);
code_?:
          piVar18 = (int *)(*(code *)*ppMVar17)(pIVar11,ppMVar17[1]);
          if (piVar18 == (int *)0x0) break;
          uVar15 = 0;
          _bStack00000044 = 0;
          uVar16 = *(ushort *)(*piVar18 + 0xb6);
          if (uVar16 != 0) {
            do {
              if (*(IGizmoBehaviour__Class **)(*(int *)(*piVar18 + 0x58) + (uint)uVar15 * 8) ==
                  TypeInfo__RTG__IGizmoBehaviour) {
                puVar19 = (undefined4 *)
                          (*piVar18 +
                          (*(int *)(*(int *)(*piVar18 + 0x58) + 4 + (uint)uVar15 * 8) + 0x19) * 8);
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          puVar19 = (undefined4 *)func_?(piVar18,TypeInfo__RTG__IGizmoBehaviour,1);
code_?:
          cVar12 = (*(code *)*puVar19)(piVar18,puVar19[1]);
          if (cVar12 != '\0') {
            func_?(8,TypeInfo__RTG__IGizmoBehaviour,piVar18);
          }
        }
      }
    }
    uVar20 = func_?();
    func_?(uVar20);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    ppOVar3 = &(this->fields)._objectMoveGizmo;
    *ppOVar3 = pOVar2;
    func_?(ppOVar3,pOVar2);
    pRVar1 = (RTGizmosEngine *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if (pRVar1 != (RTGizmosEngine *)0x0) {
      pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo(pRVar1,(MethodInfo *)0x0);
      ppOVar4 = &(this->fields)._objectRotationGizmo;
      *ppOVar4 = pOVar2;
      func_?(ppOVar4,pOVar2);
      pRVar1 = (RTGizmosEngine *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (pRVar1 != (RTGizmosEngine *)0x0) {
        pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo(pRVar1,(MethodInfo *)0x0);
        ppOVar4 = &(this->fields)._objectScaleGizmo;
        *ppOVar4 = pOVar2;
        func_?(ppOVar4,pOVar2);
        pRVar1 = (RTGizmosEngine *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pRVar1 != (RTGizmosEngine *)0x0) {
          pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                             (pRVar1,(MethodInfo *)0x0);
          ppOVar4 = &(this->fields)._objectUniversalGizmo;
          *ppOVar4 = pOVar2;
          func_?(ppOVar4,pOVar2);
          if ((*ppOVar3 != (ObjectTransformGizmo *)0x0) &&
             (pGVar5 = ((*ppOVar3)->fields)._._gizmo, pGVar5 != (Gizmo *)0x0)) {
            Gizmo::Gizmo_SetEnabled(pGVar5,0,(MethodInfo *)0x0);
            pOVar2 = (this->fields)._objectRotationGizmo;
            if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
               (pGVar5 = (pOVar2->fields)._._gizmo, pGVar5 != (Gizmo *)0x0)) {
              Gizmo::Gizmo_SetEnabled(pGVar5,0,(MethodInfo *)0x0);
              pOVar2 = (this->fields)._objectScaleGizmo;
              if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
                 (pGVar5 = (pOVar2->fields)._._gizmo, pGVar5 != (Gizmo *)0x0)) {
                Gizmo::Gizmo_SetEnabled(pGVar5,0,(MethodInfo *)0x0);
                if ((*ppOVar4 != (ObjectTransformGizmo *)0x0) &&
                   (pGVar5 = ((*ppOVar4)->fields)._._gizmo, pGVar5 != (Gizmo *)0x0)) {
                  Gizmo::Gizmo_SetEnabled(pGVar5,0,(MethodInfo *)0x0);
                  ppOVar4 = &(this->fields)._workGizmo;
                  *ppOVar4 = *ppOVar3;
                  func_?(ppOVar4,*ppOVar3);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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


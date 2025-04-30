
/* Void OnSelectionChanged() */

void Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::
     Tut_5_CustomObjectLocalPivot_OnSelectionChanged
               (Tut_5_CustomObjectLocalPivot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._selectedObjects;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
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
              return;
            }
          }
        }
      }
    }
    else {
      pOVar2 = (this->fields)._workGizmo;
      if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
         (pGVar3 = (pOVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) {
        Gizmo::Gizmo_SetEnabled(pGVar3,1,(MethodInfo *)0x0);
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields)._selectedObjects;
        pOVar2 = (this->fields)._workGizmo;
        if ((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           ((targetPivotObject =
                  mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(this_00->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                            ), pOVar2 != (ObjectTransformGizmo *)0x0 &&
            (ObjectTransformGizmo::ObjectTransformGizmo_SetTargetPivotObject
                       (pOVar2,(GameObject *)targetPivotObject,(MethodInfo *)0x0),
            (this->fields)._workGizmo != (ObjectTransformGizmo *)0x0)))) {
          ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition
                    (in_stack_4,(MethodInfo *)0x0);
          uStack5 = 0;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (*(int *)(in_stack_6 + 0x18) == 0) {
            return;
          }
          if (*(DataTable **)(in_stack_6 + 8) != (DataTable *)0x0) {
            bVar7 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                              (*(DataTable **)(in_stack_6 + 8),(MethodInfo *)0x0);
            if (bVar7 != 0) {
              if (*(int *)(in_stack_6 + 8) == 0) goto code_?;
              if (*(char *)(*(int *)(in_stack_6 + 8) + 0x55) == '\0') {
                return;
              }
            }
            if (*(int *)(in_stack_6 + 8) != 0) {
              this_01 = *(GizmoTransform **)(*(int *)(in_stack_6 + 8) + 0xf8);
              if (*(int *)(in_stack_6 + 0x44) == 0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (this_01 != (GizmoTransform *)0x0) {
                  GizmoTransform::GizmoTransform_set_Rotation3D
                            (this_01,TypeInfo__UnityEngine__Quaternion->static_fields->
                                     identityQuaternion,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                x = *(Object_1 **)(in_stack_6 + 0x1c);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar7 == 0) {
                  if ((*(GameObject **)(in_stack_6 + 0x1c) == (GameObject *)0x0) ||
                     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform
                                          (*(GameObject **)(in_stack_6 + 0x1c),
                                           (MethodInfo *)0x0), this_02 == (Transform *)0x0))
                  goto code_?;
                  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&stack0x00000018,this_02,(MethodInfo *)0x0);
                }
                else {
                  pQVar8 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                           MVWorldObject_get_WorldRotation
                                     ((Quaternion *)&stack0x00000018,(MVWorldObject *)0x0,
                                      (MethodInfo *)&UNK_?);
                }
                if (this_01 != (GizmoTransform *)0x0) {
                  GizmoTransform::GizmoTransform_set_Rotation3D(this_01,*pQVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
code_?:
          func_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GameObject PickGameObject() */

GameObject *
Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::Tut_5_CustomObjectLocalPivot_PickGameObject
          (Tut_5_CustomObjectLocalPivot *this,MethodInfo *method)

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


/* Void SetWorkGizmoId(Tut_5_CustomObjectLocalPivot+GizmoId) */

void Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::
     Tut_5_CustomObjectLocalPivot_SetWorkGizmoId
               (Tut_5_CustomObjectLocalPivot *this,
               Tut_5_CustomObjectLocalPivot_GizmoId__Enum gizmoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
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
  if (gizmoId == Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Move) {
    pOVar1 = (this->fields)._objectMoveGizmo;
code_?:
    (this->fields)._workGizmo = pOVar1;
    func_?();
  }
  else {
    if (gizmoId == Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Rotate) {
      pOVar1 = (this->fields)._objectRotationGizmo;
      goto code_?;
    }
    if (gizmoId == Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Scale) {
      pOVar1 = (this->fields)._objectScaleGizmo;
      goto code_?;
    }
    if (gizmoId == Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Universal) {
      pOVar1 = (this->fields)._objectUniversalGizmo;
      goto code_?;
    }
  }
  pLVar3 = (this->fields)._selectedObjects;
  if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar3->fields)._size == 0) {
      return;
    }
    pOVar1 = (this->fields)._workGizmo;
    if ((pOVar1 != (ObjectTransformGizmo *)0x0) &&
       (pGVar2 = (pOVar1->fields)._._gizmo, pGVar2 != (Gizmo *)0x0)) {
      Gizmo::Gizmo_SetEnabled(pGVar2,1,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._selectedObjects;
      pOVar1 = (this->fields)._workGizmo;
      if ((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (targetPivotObject =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,(this_00->fields)._size + -1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                         ), pOVar1 != (ObjectTransformGizmo *)0x0)) {
        ObjectTransformGizmo::ObjectTransformGizmo_SetTargetPivotObject
                  (pOVar1,(GameObject *)targetPivotObject,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::Tut_5_CustomObjectLocalPivot_Start
               (Tut_5_CustomObjectLocalPivot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&StringLiteral_GreenCube);
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
        ppOVar5 = &(this->fields)._objectScaleGizmo;
        *ppOVar5 = pOVar2;
        func_?(ppOVar5,pOVar2);
        pRVar1 = (RTGizmosEngine *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pRVar1 != (RTGizmosEngine *)0x0) {
          pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                             (pRVar1,(MethodInfo *)0x0);
          ppOVar5 = &(this->fields)._objectUniversalGizmo;
          *ppOVar5 = pOVar2;
          func_?(ppOVar5,pOVar2);
          if ((*ppOVar3 != (ObjectTransformGizmo *)0x0) &&
             (pGVar6 = ((*ppOVar3)->fields)._._gizmo, pGVar6 != (Gizmo *)0x0)) {
            Gizmo::Gizmo_SetEnabled(pGVar6,0,(MethodInfo *)0x0);
            if ((*ppOVar4 != (ObjectTransformGizmo *)0x0) &&
               (pGVar6 = ((*ppOVar4)->fields)._._gizmo, pGVar6 != (Gizmo *)0x0)) {
              Gizmo::Gizmo_SetEnabled(pGVar6,0,(MethodInfo *)0x0);
              pOVar2 = (this->fields)._objectScaleGizmo;
              if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
                 (pGVar6 = (pOVar2->fields)._._gizmo, pGVar6 != (Gizmo *)0x0)) {
                Gizmo::Gizmo_SetEnabled(pGVar6,0,(MethodInfo *)0x0);
                pOVar2 = (this->fields)._objectUniversalGizmo;
                if ((pOVar2 != (ObjectTransformGizmo *)0x0) &&
                   (pGVar6 = (pOVar2->fields)._._gizmo, pGVar6 != (Gizmo *)0x0)) {
                  Gizmo::Gizmo_SetEnabled(pGVar6,0,(MethodInfo *)0x0);
                  if (*ppOVar3 != (ObjectTransformGizmo *)0x0) {
                    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
                              (*ppOVar3,(IEnumerable_1_UnityEngine_GameObject_ *)
                                        (this->fields)._selectedObjects,(MethodInfo *)0x0);
                    if (*ppOVar4 != (ObjectTransformGizmo *)0x0) {
                      ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
                                (*ppOVar4,(IEnumerable_1_UnityEngine_GameObject_ *)
                                          (this->fields)._selectedObjects,(MethodInfo *)0x0);
                      pOVar2 = (this->fields)._objectScaleGizmo;
                      if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                        ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
                                  (pOVar2,(IEnumerable_1_UnityEngine_GameObject_ *)
                                          (this->fields)._selectedObjects,(MethodInfo *)0x0);
                        pOVar2 = (this->fields)._objectUniversalGizmo;
                        if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                          ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
                                    (pOVar2,(IEnumerable_1_UnityEngine_GameObject_ *)
                                            (this->fields)._selectedObjects,(MethodInfo *)0x0);
                          ppOVar5 = &(this->fields)._workGizmo;
                          *ppOVar5 = *ppOVar3;
                          func_?(ppOVar5,*ppOVar3);
                          (this->fields)._workGizmoId = 1;
                          gameObject = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_Find(StringLiteral_GreenCube,(MethodInfo *)0x0);
                          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__ObjectBounds);
                          }
                          pOVar7 = ObjectBounds::ObjectBounds_GetMeshWorldOBB
                                             (&OStack_8,gameObject,(MethodInfo *)0x0);
                          fStack_9 = (pOVar7->_size).x;
                          fStack_10 = (pOVar7->_size).y;
                          fStack_11 = (pOVar7->_size).z;
                          fStack_12 = (pOVar7->_center).x;
                          fStack_13 = (pOVar7->_center).y;
                          fStack_14 = (pOVar7->_center).z;
                          fStack_15 = (pOVar7->_rotation).x;
                          fStack_16 = (pOVar7->_rotation).y;
                          uStack_17._0_4_ = (pOVar7->_rotation).z;
                          uStack_17._4_4_ = (pOVar7->_rotation).w;
                          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__BoxMath);
                          }
                          boxSize.y = fStack_10;
                          boxSize.x = fStack_9;
                          boxCenter.y = fStack_13;
                          boxCenter.x = fStack_12;
                          boxCenter.z = fStack_14;
                          boxSize.z = fStack_11;
                          boxRotation.y = fStack_16;
                          boxRotation.x = fStack_15;
                          boxRotation.z = (float)(undefined4)uStack_17;
                          boxRotation.w = uStack_17._4_4_;
                          pVVar18 = BoxMath::BoxMath_CalcBoxFaceCenter
                                             (&VStack_19,boxCenter,boxSize,boxRotation,
                                              BoxFace__Enum_Left,(MethodInfo *)0x0);
                          pOVar2 = *ppOVar4;
                          uStack_20._0_4_ = pVVar18->x;
                          uStack_20._4_4_ = pVVar18->y;
                          fStack_21 = pVVar18->z;
                          if (gameObject != (GameObject *)0x0) {
                            this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                            if (this_00 != (Transform *)0x0) {
                              position.z = fStack_21;
                              position.x = (float)(undefined4)uStack_20;
                              position.y = (float)uStack_20._4_4_;
                              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                       Transform_InverseTransformPoint
                                                 (&VStack_19,this_00,position,(MethodInfo *)0x0);
                              if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                                ObjectTransformGizmo::ObjectTransformGizmo_SetObjectCustomLocalPivot
                                          (pOVar2,gameObject,*pVVar18,(MethodInfo *)0x0);
                                if (*ppOVar4 != (ObjectTransformGizmo *)0x0) {
                                  ObjectTransformGizmo::ObjectTransformGizmo_SetTransformPivot
                                            (*ppOVar4,
                                             GizmoObjectTransformPivot__Enum_CustomObjectLocalPivot,
                                             (MethodInfo *)0x0);
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
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::Tut_5_CustomObjectLocalPivot_Update
               (Tut_5_CustomObjectLocalPivot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                   );
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
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[5].klass == (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Physics);
        cRam_? = '\x01';
      }
      func_?(&stack0xffffffa8,0,0x2c);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      pVVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         ((Vector3 *)&stack0xfffffff0,(DefaultEventSystem_Input *)0x0,
                          in_stack_4);
      if (this_00 == (Camera *)0x0) goto code_?;
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                          ((Ray *)&stack0xffffffe4,this_00,*pVVar3,(MethodInfo *)0x0);
      fVar6 = (pRVar5->m_Origin).x;
      fVar7 = (pRVar5->m_Origin).y;
      fVar8 = (pRVar5->m_Origin).z;
      fVar9 = (pRVar5->m_Direction).x;
      uVar10 = (pRVar5->m_Direction).y;
      uVar11 = (pRVar5->m_Direction).z;
      if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Physics);
      }
      ray.m_Origin.y = fVar7;
      ray.m_Origin.x = fVar6;
      ray.m_Origin.z = fVar8;
      ray.m_Direction.x = fVar9;
      ray.m_Direction.y = (float)uVar10;
      ray.m_Direction.z = (float)uVar11;
      bVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_14
                        (ray,(RaycastHit *)&stack0xffffffa8,3.4028235e+38,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        x = (GameObject *)0x0;
      }
      else {
        this_01 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                            ((RaycastHit *)&stack0xffffffa8,(MethodInfo *)0x0);
        if (this_01 == (Collider *)0x0) goto code_?;
        x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_01,(MethodInfo *)0x0);
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pLVar12 = (this->fields)._selectedObjects;
        if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        length = (pLVar12->fields)._size;
        piVar13 = &(pLVar12->fields)._version;
        *piVar13 = *piVar13 + 1;
        (pLVar12->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar12->fields)._items,0,length,(MethodInfo *)0x0);
        }
        Tut_5_CustomObjectLocalPivot_OnSelectionChanged(this,(MethodInfo *)0x0);
        Tut_5_CustomObjectLocalPivot_OnSelectionChanged(this,(MethodInfo *)0x0);
      }
      else {
        bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
        pLVar12 = (this->fields)._selectedObjects;
        if (bVar1 == 0) {
          if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          func_?();
          pLVar12 = (this->fields)._selectedObjects;
          if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar12,(Object *)x,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                    );
          Tut_5_CustomObjectLocalPivot_OnSelectionChanged(this,(MethodInfo *)0x0);
        }
        else {
          if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Contains
                            ((List_1_System_Object_ *)pLVar12,(Object *)x,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                            );
          pLVar12 = (this->fields)._selectedObjects;
          if (bVar1 == 0) {
            if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar12,(Object *)x,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            Tut_5_CustomObjectLocalPivot_OnSelectionChanged(this,(MethodInfo *)0x0);
          }
          else {
            if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)pLVar12,(Object *)x,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                      );
            Tut_5_CustomObjectLocalPivot_OnSelectionChanged(this,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_G,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  if (bVar1 == 0) {
    transformSpace = 0x6c;
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_L,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
  }
  else {
    transformSpace = GizmoSpace__Enum_Global;
code_?:
    Tut_6_CustomWorldPivot::Tut_6_CustomWorldPivot_SetTransformSpace
              ((Tut_6_CustomWorldPivot *)this,transformSpace,method_00);
  }
  bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_P,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pOVar14 = (this->fields)._objectMoveGizmo;
    if (pOVar14 == (ObjectTransformGizmo *)0x0) {
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    Tut_6_CustomWorldPivot::Tut_6_CustomWorldPivot_SetTransformPivot
              ((Tut_6_CustomWorldPivot *)this,(uint)((pOVar14->fields)._transformPivot == 0),
               (MethodInfo *)0x0);
  }
  bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_W,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_E,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_5_CustomObjectLocalPivot_SetWorkGizmoId
                (this,Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Rotate,(MethodInfo *)0x0);
      return;
    }
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_R,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_5_CustomObjectLocalPivot_SetWorkGizmoId
                (this,Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Scale,(MethodInfo *)0x0);
      return;
    }
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_T,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      Tut_5_CustomObjectLocalPivot_SetWorkGizmoId
                (this,Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Universal,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    Tut_5_CustomObjectLocalPivot_SetWorkGizmoId
              (this,Tut_5_CustomObjectLocalPivot_GizmoId__Enum_Move,(MethodInfo *)0x0);
  }
  return;
}


/* Tut_5_CustomObjectLocalPivot() */

void Assembly-CSharp.dll::RTG::Tut_5_CustomObjectLocalPivot::Tut_5_CustomObjectLocalPivot__ctor
               (Tut_5_CustomObjectLocalPivot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  ppLVar1 = &(this->fields)._selectedObjects;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


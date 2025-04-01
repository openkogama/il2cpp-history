
/* Void Handle(GizmoAction) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Handle
               (GizmoController *this,GizmoAction__Enum action,MethodInfo *method)

{
  pSStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RotationMode);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__TranslateMode);
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_rotationDegreesStep);
    func_?(&StringLiteral_rotationMode);
    func_?(&StringLiteral_translateMode);
    cRam_? = '\x01';
  }
  switch(action) {
  case GizmoAction__Enum_None:
    return;
  case GizmoAction__Enum_Rotate:
    unaff_EBX = (Single__Class *)0x1;
    unaff_EDI = (this->fields).gizmoMenuInstance;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      unaff_EDI = (this->fields).gizmoMenuInstance;
      unaff_ESI = this;
      if (unaff_EDI == (GizmoMenu *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_
                       );
        cRam_? = '\x01';
      }
      unaff_EBX = (Single__Class *)
                  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                            ((Nullable_1_UInt32_ *)&(unaff_EDI->fields).rotationMode,1,
                             MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_
                            );
    }
    pGVar3 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar3 != (GizmoMenuNg *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar3,(MethodInfo *)0x0);
      pEVar4 = (this->fields).editorStateMachine;
      if (pEVar4 != (EditorStateMachine *)0x0) {
        unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
        pSStack_1 = TypeInfo__System__Single;
        action = 0x41700000;
        pOVar5 = (Object *)func_?();
        if (unaff_EDI != (GizmoMenu *)0x0) {
          pSVar6 = (Single__Class *)
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                     (Object *)StringLiteral_rotationDegreesStep,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pEVar4 = (this->fields).editorStateMachine;
          if (pEVar4 != (EditorStateMachine *)0x0) {
            unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
            pSStack_1 = unaff_EBX;
            pOVar5 = (Object *)func_?(TypeInfo__RotationMode,&pSStack_1);
            unaff_EBX = pSVar6;
            if (unaff_EDI != (GizmoMenu *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                         (Object *)StringLiteral_rotationMode,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pEVar4 = (this->fields).editorStateMachine;
              if (pEVar4 != (EditorStateMachine *)0x0) {
                FSMEntity::FSMEntity_PushState
                          ((FSMEntity *)pEVar4,EditorEvent__Enum_Rotating,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case GizmoAction__Enum_RotateStepX:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_X,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepY:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Y,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepZ:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Z,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_ResetRotation:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ResetRotation
                (pRVar7,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_TranslateXZ:
    pGVar3 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar3 == (GizmoMenuNg *)0x0) break;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar3,(MethodInfo *)0x0);
    pEVar4 = (this->fields).editorStateMachine;
    if (pEVar4 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
    pSStack_1 = (Single__Class *)0x0;
    pOVar5 = (Object *)func_?(TypeInfo__TranslateMode,&pSStack_1);
    if (unaff_EDI == (GizmoMenu *)0x0) break;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
               (Object *)StringLiteral_translateMode,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pEVar4 = (this->fields).editorStateMachine;
    if (pEVar4 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
    action = CONCAT13(1,(undefined3)action);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3));
    key = StringLiteral_moveWithAvatar;
    goto joined_?;
  case GizmoAction__Enum_TranslateY:
    pGVar3 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar3 == (GizmoMenuNg *)0x0) break;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar3,(MethodInfo *)0x0);
    pEVar4 = (this->fields).editorStateMachine;
    if (pEVar4 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
    action = CONCAT13(1,(undefined3)action);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3));
    if (unaff_EDI == (GizmoMenu *)0x0) break;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
               (Object *)StringLiteral_moveWithAvatar,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pEVar4 = (this->fields).editorStateMachine;
    if (pEVar4 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar4->fields)._.data;
    pSStack_1 = (Single__Class *)0x2;
    pOVar5 = (Object *)func_?(TypeInfo__TranslateMode,&pSStack_1);
    key = StringLiteral_translateMode;
joined_?:
    unaff_ESI = this;
    if (unaff_EDI != (GizmoMenu *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pEVar4 = (this->fields).editorStateMachine;
      if (pEVar4 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_PushState
                  ((FSMEntity *)pEVar4,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case GizmoAction__Enum_FlipX:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_X,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipY:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Y,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipZ:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Z,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepXRight:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_X,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepYRight:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Y,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepZRight:
    pRVar7 = (this->fields).rotationHelper;
    if (pRVar7 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar7,RotationMode__Enum_Z,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  func_?();
  pIVar8 = (pSStack_1->_0).image;
  uVar9 = (uint)unaff_EBX | *(uint *)(extraout_EDX + 0x3a);
  pcVar10 = (char *)(extraout_EDX + uVar9 * 2);
  *pcVar10 = *pcVar10 + (char)((uint)extraout_EDX >> 8);
  (pSStack_1->_0).gc_desc = (void *)uVar9;
  out((short)(pSStack_1->_0).gc_desc,pIVar8);
  bVar11 = (byte)(pSStack_1->_0).name;
  iVar12 = (pSStack_1->_0).byval_arg.data.__klassIndex;
  cVar13 = bVar11 < *(byte *)CONCAT31((int3)((uint)unaff_ESI->klass >> 8),
                                      -(bVar11 < *(byte *)&(unaff_ESI->klass->_0).image));
  *(undefined2 *)&(pSStack_1->_0).byval_arg.data = in_CS;
  ppcVar14 = &(pSStack_1->_0).namespaze;
  (pSStack_1->_0).namespaze = &UNK_?;
  pbVar15 = (byte *)(*(code *)(iVar12 + 0x3a))();
  *pbVar15 = *pbVar15 + extraout_CH + cVar13;
  puVar16 = *(undefined4 **)*ppcVar14;
  if (*pbVar15 <= extraout_DL) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  uVar18 = *puVar16;
  action = action & 0xff000000;
  puVar19 = puVar16 + 1;
  puVar16[1] = puVar16[1];
  if (cRam_? == '\0') {
    *puVar16 = &
               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
    ;
    puVar20 = puVar16 + -1;
    puVar16[-1] = &UNK_?;
    func_?();
    *(MethodInfo ***)((int)puVar20 + -4) =
         &
         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
    ;
    puVar21 = (undefined1 *)((int)puVar20 + -8);
    *(undefined **)((int)puVar20 + -8) = &UNK_?;
    func_?();
    *(ExecuteEvents__Class ***)(puVar21 + -4) = &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
    puVar22 = puVar21 + -8;
    *(undefined **)(puVar21 + -8) = &UNK_?;
    func_?();
    *(Object_1__Class ***)(puVar22 + -4) = &TypeInfo__UnityEngine__Object;
    puVar23 = puVar22 + -8;
    *(undefined **)(puVar22 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar23 + -4) =
         &
         MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
    ;
    puVar24 = puVar23 + -8;
    *(undefined **)(puVar23 + -8) = &UNK_?;
    func_?();
    *(GizmoMenuNg_c__Class ***)(puVar24 + -4) =
         &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c;
    puVar25 = puVar24 + -8;
    *(undefined **)(puVar24 + -8) = &UNK_?;
    func_?();
    puVar19 = (undefined4 *)(puVar25 + 0x18);
    cRam_? = '\x01';
  }
  *(undefined4 *)((int)puVar19 + -4) = uVar18;
  uVar18 = puVar16[3];
  *(GizmoMenu **)((int)puVar19 + -8) = unaff_EDI;
  *(undefined4 *)((int)puVar19 + -0xc) = 0;
  *(undefined4 *)((int)puVar19 + -0x10) = uVar18;
  *(undefined **)((int)puVar19 + -0x14) = &UNK_?;
  pGVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (*(Component **)((int)puVar19 + -0x10),*(MethodInfo **)((int)puVar19 + -0xc));
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    *(Object_1__Class **)((int)puVar19 + -4) = TypeInfo__UnityEngine__Object;
    puVar27 = (undefined1 *)((int)puVar19 + -8);
    *(undefined **)((int)puVar19 + -8) = &UNK_?;
    func_?();
    puVar19 = (undefined4 *)(puVar27 + 4);
  }
  puVar19[-1] = 0;
  puVar19[-2] = 0;
  puVar19[-3] = pGVar26;
  puVar19[-4] = &UNK_?;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)puVar19[-3],(Object_1 *)puVar19[-2],(MethodInfo *)puVar19[-1]);
  if (bVar2 != 0) {
    puVar19[2] = iVar12;
    puVar19[1] = 0;
    *puVar19 = uVar18;
    puVar19[-1] = &UNK_?;
    pGVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)*puVar19,(MethodInfo *)puVar19[1]);
    puVar28 = puVar19 + 4;
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      puVar19[3] = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c;
      puVar29 = puVar19 + 2;
      puVar19[2] = &UNK_?;
      func_?();
      puVar28 = (undefined4 *)((int)puVar29 + 4);
    }
    pEVar30 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
              __9__28_0;
    if (pEVar30 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
          cctor_finished_or_no_cctor == 0) {
        *(GizmoMenuNg_c__Class **)((int)puVar28 + -4) =
             TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c;
        puVar31 = (undefined1 *)((int)puVar28 + -8);
        *(undefined **)((int)puVar28 + -8) = &UNK_?;
        func_?();
        puVar28 = (undefined4 *)(puVar31 + 4);
      }
      pGVar32 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields;
      *(ExecuteEvents_EventFunction_1_IUIStack___Class **)((int)puVar28 + -4) =
           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
      ;
      pGVar33 = pGVar32->__9;
      puVar34 = (undefined1 *)((int)puVar28 + -8);
      *(undefined **)((int)puVar28 + -8) = &UNK_?;
      pEVar30 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      *(undefined4 *)(puVar34 + -4) = 0;
      *(MethodInfo **)(puVar34 + -8) =
           MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      *(GizmoMenuNg_c **)(puVar34 + -0xc) = pGVar33;
      *(ExecuteEvents_EventFunction_1_IUIStack_ **)(puVar34 + -0x10) = pEVar30;
      *(undefined **)(puVar34 + -0x14) = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (*(UnityAction_2_System_Object_System_Object_ **)(puVar34 + -0x10),
                 *(Object **)(puVar34 + -0xc),*(void **)(puVar34 + -8),
                 *(MethodInfo **)(puVar34 + -4));
      pGVar35 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c;
      *(ExecuteEvents_EventFunction_1_IUIStack_ **)(puVar34 + -4) = pEVar30;
      pGVar35->static_fields->__9__28_0 = pEVar30;
      *(ExecuteEvents_EventFunction_1_IUIStack_ ***)(puVar34 + -8) =
           &TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
            __9__28_0;
      puVar36 = puVar34 + -0xc;
      *(undefined **)(puVar34 + -0xc) = &UNK_?;
      func_?();
      puVar28 = (undefined4 *)(puVar36 + 0x1c);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      *(ExecuteEvents__Class **)((int)puVar28 + -4) =
           TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
      puVar37 = (undefined1 *)((int)puVar28 + -8);
      *(undefined **)((int)puVar28 + -8) = &UNK_?;
      func_?();
      puVar28 = (undefined4 *)(puVar37 + 4);
    }
    *(MethodInfo **)((int)puVar28 + -4) =
         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
    ;
    *(ExecuteEvents_EventFunction_1_IUIStack_ **)((int)puVar28 + -8) = pEVar30;
    *(undefined4 *)((int)puVar28 + -0xc) = 0;
    *(GameObject **)((int)puVar28 + -0x10) = pGVar26;
    *(undefined **)((int)puVar28 + -0x14) = &UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (*(GameObject **)((int)puVar28 + -0x10),*(BaseEventData **)((int)puVar28 + -0xc),
               *(ExecuteEvents_EventFunction_1_System_Object_ **)((int)puVar28 + -8),
               *(MethodInfo **)((int)puVar28 + -4));
  }
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GizmoController::GizmoController_Hide
               (GizmoController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).gizmoMenuNgInstance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).gizmoMenuNgInstance != (GizmoMenuNg *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (in_stack_3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (in_stack_3,(MethodInfo *)0x0);
        if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction =
             TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
             __9__28_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                   static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
          __9__28_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Initialize
               (GizmoController *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).editorStateMachine;
  *ppEVar1 = esm;
  func_?(ppEVar1,esm);
  dictionary = *ppEVar1;
  this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)dictionary,(MethodInfo *)0x0);
  ppRVar2 = &(this->fields).rotationHelper;
  *ppRVar2 = (RotationHelper *)this_00;
  func_?(ppRVar2,this_00);
  return;
}


/* Void Show(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Show
               (GizmoController *this,int32_t id,Vector3 worldPosition,EditorStateMachine *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GizmoController___Show_b__11_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg>_UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GizmoController____c___Show_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GizmoController____c);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gizmoMenuNgPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GizmoMenuNg *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg>_UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_
                     );
  ppGVar2 = &(this->fields).gizmoMenuNgInstance;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  if (*ppGVar2 != (GizmoMenuNg *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Initialize
              (*ppGVar2,id,worldPosition,e,(MethodInfo *)0x0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GizmoController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__GizmoController____c->static_fields->__9__11_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__GizmoController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__GizmoController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__GizmoController____c___Show_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GizmoController____c->static_fields->__9__11_0 = callbackFunction;
      func_?();
      pGVar3 = (GameObject *)&UNK_?;
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
               MethodInfo__GizmoController___Show_b__11_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Show>b__11_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoController::GizmoController__Show_b__11_1
               (GizmoController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GizmoController__OnGizmoMenuPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gizmoMenuNgInstance;
  if (this_00 != (GizmoMenuNg *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GizmoController__OnGizmoMenuPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,this_01,2);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean get_IgnoreSelectionOnce() */

bool Assembly-CSharp.dll::GizmoController::GizmoController_get_IgnoreSelectionOnce
               (GizmoController *this,MethodInfo *method)

{
  if ((this->fields).ignoreSelectionOnce == 0) {
    return 0;
  }
  (this->fields).ignoreSelectionOnce = 0;
  return 1;
}


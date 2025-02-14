
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
    in_stack_2 = &TypeInfo__UnityEngine__Object;
    func_?();
    in_stack_3 = &TypeInfo__RotationMode;
    func_?();
    in_stack_4 = &TypeInfo__System__Single;
    func_?();
    func_?(&TypeInfo__TranslateMode);
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_rotationDegreesStep);
    func_?(&StringLiteral_rotationMode);
    func_?(&StringLiteral_translateMode);
    cRam_? = '\x01';
  }
  pSVar5 = unaff_EBX;
  switch(action) {
  case GizmoAction__Enum_Rotate:
    pSVar5 = (Single__Class *)0x1;
    unaff_EDI = (GizmoMenuNg *)(this->fields).gizmoMenuInstance;
    in_stack_2 = (Object_1__Class **)unaff_EBX;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
      in_stack_2 = (Object_1__Class **)unaff_EBX;
    }
    in_stack_3 = (RotationMode__Enum__Class **)0x0;
    in_stack_4 = (Single__Class **)0x0;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      unaff_EDI = (GizmoMenuNg *)(this->fields).gizmoMenuInstance;
      unaff_ESI = this;
      if (unaff_EDI == (GizmoMenuNg *)0x0) break;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_
                       );
        cRam_? = '\x01';
      }
      in_stack_4 = (Single__Class **)0x1;
      in_stack_3 =
           (RotationMode__Enum__Class **)
           MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_;
      pSVar5 = (Single__Class *)
                mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                          ((Nullable_1_UInt32_ *)&(unaff_EDI->fields).yRotationText,1,
                           MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_
                          );
    }
    pGVar7 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar7 != (GizmoMenuNg *)0x0) {
      in_stack_2 = (Object_1__Class **)&UNK_?;
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar7,(MethodInfo *)0x0);
      pEVar8 = (this->fields).editorStateMachine;
      if (pEVar8 != (EditorStateMachine *)0x0) {
        unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
        pSStack_1 = TypeInfo__System__Single;
        action = 0x41700000;
        pOVar9 = (Object *)func_?();
        if (unaff_EDI != (GizmoMenuNg *)0x0) {
          in_stack_4 =
               (Single__Class **)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                     (Object *)StringLiteral_rotationDegreesStep,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pEVar8 = (this->fields).editorStateMachine;
          if (pEVar8 != (EditorStateMachine *)0x0) {
            unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
            in_stack_2 = (Object_1__Class **)&UNK_?;
            pSStack_1 = pSVar5;
            pOVar9 = (Object *)func_?(TypeInfo__RotationMode,&pSStack_1);
            pSVar5 = (Single__Class *)in_stack_4;
            in_stack_4 = (Single__Class **)pSVar5;
            if (unaff_EDI != (GizmoMenuNg *)0x0) {
              in_stack_4 =
                   (Single__Class **)
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                         (Object *)StringLiteral_rotationMode,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pEVar8 = (this->fields).editorStateMachine;
              if (pEVar8 != (EditorStateMachine *)0x0) {
                FSMEntity::FSMEntity_PushState
                          ((FSMEntity *)pEVar8,EditorEvent__Enum_Rotating,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case GizmoAction__Enum_RotateStepX:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_X,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepY:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_Y,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepZ:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_Z,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_ResetRotation:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ResetRotation
                (pRVar10,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_TranslateXZ:
    pGVar7 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar7 != (GizmoMenuNg *)0x0) {
      in_stack_2 = (Object_1__Class **)0x0;
      in_stack_4 = (Single__Class **)&UNK_?;
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar7,(MethodInfo *)0x0);
      pEVar8 = (this->fields).editorStateMachine;
      in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
      if (pEVar8 != (EditorStateMachine *)0x0) {
        unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
        pSStack_1 = (Single__Class *)0x0;
        in_stack_2 = (Object_1__Class **)&UNK_?;
        pOVar9 = (Object *)func_?(TypeInfo__TranslateMode,&pSStack_1);
        in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
        if (unaff_EDI != (GizmoMenuNg *)0x0) {
          in_stack_4 =
               (Single__Class **)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                     (Object *)StringLiteral_translateMode,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pEVar8 = (this->fields).editorStateMachine;
          in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
          if (pEVar8 != (EditorStateMachine *)0x0) {
            unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
            action = CONCAT13(1,(undefined3)action);
            in_stack_2 = (Object_1__Class **)&UNK_?;
            pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3))
            ;
            key = (Single__Class *)StringLiteral_moveWithAvatar;
joined_?:
            unaff_ESI = this;
            in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
            if (unaff_EDI != (GizmoMenuNg *)0x0) {
              in_stack_4 = (Single__Class **)&UNK_?;
              in_stack_3 = (RotationMode__Enum__Class **)unaff_EDI;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key,pOVar9
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pEVar8 = (this->fields).editorStateMachine;
              in_stack_2 = (Object_1__Class **)key;
              if (pEVar8 != (EditorStateMachine *)0x0) {
                FSMEntity::FSMEntity_PushState
                          ((FSMEntity *)pEVar8,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case GizmoAction__Enum_TranslateY:
    pGVar7 = (this->fields).gizmoMenuNgInstance;
    unaff_ESI = this;
    if (pGVar7 != (GizmoMenuNg *)0x0) {
      in_stack_2 = (Object_1__Class **)0x0;
      in_stack_4 = (Single__Class **)&UNK_?;
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar7,(MethodInfo *)0x0);
      pEVar8 = (this->fields).editorStateMachine;
      in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
      if (pEVar8 != (EditorStateMachine *)0x0) {
        unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
        action = CONCAT13(1,(undefined3)action);
        in_stack_2 = (Object_1__Class **)&UNK_?;
        pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3));
        in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
        if (unaff_EDI != (GizmoMenuNg *)0x0) {
          in_stack_4 =
               (Single__Class **)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                     (Object *)StringLiteral_moveWithAvatar,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pEVar8 = (this->fields).editorStateMachine;
          in_stack_3 = (RotationMode__Enum__Class **)pGVar7;
          if (pEVar8 != (EditorStateMachine *)0x0) {
            unaff_EDI = (GizmoMenuNg *)(pEVar8->fields)._.data;
            pSStack_1 = (Single__Class *)0x2;
            in_stack_2 = (Object_1__Class **)&UNK_?;
            pOVar9 = (Object *)func_?(TypeInfo__TranslateMode,&pSStack_1);
            key = (Single__Class *)StringLiteral_translateMode;
            goto joined_?;
          }
        }
      }
    }
    break;
  case GizmoAction__Enum_FlipX:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_X,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipY:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_Y,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipZ:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_Z,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepXRight:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar10,RotationMode__Enum_X,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepYRight:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 != (RotationHelper *)0x0) {
      in_stack_2 = (Object_1__Class **)0x0;
      in_stack_3 = (RotationMode__Enum__Class **)0xc1700000;
      in_stack_4 = (Single__Class **)0x1;
      goto code_?;
    }
    break;
  case GizmoAction__Enum_RotateStepZRight:
    pRVar10 = (this->fields).rotationHelper;
    if (pRVar10 == (RotationHelper *)0x0) break;
    UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
              (pRVar10,RotationMode__Enum_Z,-15.0,(MethodInfo *)0x0);
  case GizmoAction__Enum_None:
code_?:
    return;
  default:
    goto code_?;
  }
  uVar11 = func_?();
  pbVar12 = (byte *)((ulonglong)uVar11 >> 0x20);
  piVar13 = (int *)((int)&pSVar5[-0x33d696]._0.fields + 2);
  *piVar13 = *piVar13 << 1;
  pRVar10 = (RotationHelper *)CONCAT31((int3)((ulonglong)uVar11 >> 8),0x3a);
  bVar14 = *pbVar12;
  bVar15 = (byte)((ulonglong)uVar11 >> 8);
  bVar16 = *pbVar12;
  *pbVar12 = bVar16 + bVar15 + 1;
  pcVar17 = (char *)((int)&pSVar5[-1].vtable.System_IConvertible_ToSingle.methodPtr + 1);
  *pcVar17 = *pcVar17 + ':' + (CARRY1(bVar14,bVar15) || 0xfe < (byte)(bVar16 + bVar15));
  bVar14 = (byte)((ulonglong)uVar11 >> 0x20);
  if (bVar14 != *(byte *)&pRVar10->klass) {
    bVar18 = bVar14 < *(byte *)&pRVar10->klass;
    bVar14 = *(char *)&unaff_EDI->klass + extraout_CH;
    bVar19 = CARRY1(*(byte *)&unaff_EDI->klass,extraout_CH) || CARRY1(bVar14,bVar18);
    *(byte *)&unaff_EDI->klass = bVar14 + bVar18;
    bVar18 = CARRY1(extraout_CH,extraout_CH) || CARRY1(extraout_CH * '\x02',bVar19);
    bVar14 = *(char *)&unaff_ESI->klass + 0x3a;
    bVar20 = 0xc5 < *(byte *)&unaff_ESI->klass || CARRY1(bVar14,bVar18);
    *(byte *)&unaff_ESI->klass = bVar14 + bVar18;
    bVar14 = *(byte *)&unaff_EDI->klass;
    bVar16 = *(char *)&unaff_EDI->klass + bVar15;
    *(byte *)&unaff_EDI->klass = bVar16 + bVar20;
    pcVar17 = (char *)((int)&pSVar5[-1].vtable.System_IConvertible_ToSingle.methodPtr + 3);
    *pcVar17 = *pcVar17 + extraout_CH * '\x02' + bVar19 +
              (CARRY1(bVar14,bVar15) || CARRY1(bVar16,bVar20));
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
code_?:
  UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
            (pRVar10,(RotationMode__Enum)in_stack_4,(float)in_stack_3,
             (MethodInfo *)in_stack_2);
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
  (this->fields).editorStateMachine = esm;
  func_?(&(this->fields).editorStateMachine,esm);
  dictionary = (this->fields).editorStateMachine;
  this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)dictionary,(MethodInfo *)0x0);
  (this->fields).rotationHelper = (RotationHelper *)this_00;
  func_?(&(this->fields).rotationHelper,this_00);
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
  (this->fields).gizmoMenuNgInstance = pGVar1;
  func_?(&(this->fields).gizmoMenuNgInstance,pGVar1);
  pGVar1 = (this->fields).gizmoMenuNgInstance;
  if (pGVar1 != (GizmoMenuNg *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Initialize
              (pGVar1,id,worldPosition,e,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
      pGVar2 = (GameObject *)&UNK_?;
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
               MethodInfo__GizmoController___Show_b__11_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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


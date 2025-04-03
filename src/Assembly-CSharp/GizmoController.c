
/* Void Handle(GizmoAction) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Handle
               (GizmoController *this,GizmoAction__Enum action,MethodInfo *method)

{
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
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      unaff_EDI = (this->fields).gizmoMenuInstance;
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
    pGVar2 = (this->fields).gizmoMenuNgInstance;
    if (pGVar2 != (GizmoMenuNg *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar2,(MethodInfo *)0x0);
      pEVar3 = (this->fields).editorStateMachine;
      if (pEVar3 != (EditorStateMachine *)0x0) {
        unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
        action = 0x41700000;
        in_ECX = TypeInfo__System__Single;
        pOVar4 = (Object *)func_?();
        if (unaff_EDI != (GizmoMenu *)0x0) {
          pSVar5 = (Single__Class *)
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                     (Object *)StringLiteral_rotationDegreesStep,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pEVar3 = (this->fields).editorStateMachine;
          if (pEVar3 != (EditorStateMachine *)0x0) {
            unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
            in_ECX = unaff_EBX;
            pOVar4 = (Object *)func_?(TypeInfo__RotationMode,&stack0xfffffff8);
            unaff_EBX = pSVar5;
            if (unaff_EDI != (GizmoMenu *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                         (Object *)StringLiteral_rotationMode,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pEVar3 = (this->fields).editorStateMachine;
              if (pEVar3 != (EditorStateMachine *)0x0) {
                FSMEntity::FSMEntity_PushState
                          ((FSMEntity *)pEVar3,EditorEvent__Enum_Rotating,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    break;
  case GizmoAction__Enum_RotateStepX:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_X,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepY:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Y,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepZ:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Z,15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_ResetRotation:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ResetRotation
                (pRVar6,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_TranslateXZ:
    pGVar2 = (this->fields).gizmoMenuNgInstance;
    if (pGVar2 == (GizmoMenuNg *)0x0) break;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar2,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editorStateMachine;
    if (pEVar3 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
    in_ECX = (Single__Class *)0x0;
    pOVar4 = (Object *)func_?(TypeInfo__TranslateMode,&stack0xfffffff8);
    if (unaff_EDI == (GizmoMenu *)0x0) break;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
               (Object *)StringLiteral_translateMode,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pEVar3 = (this->fields).editorStateMachine;
    if (pEVar3 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
    action = CONCAT13(1,(undefined3)action);
    pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3));
    key = StringLiteral_moveWithAvatar;
    goto joined_?;
  case GizmoAction__Enum_TranslateY:
    pGVar2 = (this->fields).gizmoMenuNgInstance;
    if (pGVar2 == (GizmoMenuNg *)0x0) break;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar2,(MethodInfo *)0x0);
    pEVar3 = (this->fields).editorStateMachine;
    if (pEVar3 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
    action = CONCAT13(1,(undefined3)action);
    pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&action + 3));
    if (unaff_EDI == (GizmoMenu *)0x0) break;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
               (Object *)StringLiteral_moveWithAvatar,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pEVar3 = (this->fields).editorStateMachine;
    if (pEVar3 == (EditorStateMachine *)0x0) break;
    unaff_EDI = (GizmoMenu *)(pEVar3->fields)._.data;
    in_ECX = (Single__Class *)0x2;
    pOVar4 = (Object *)func_?(TypeInfo__TranslateMode,&stack0xfffffff8);
    key = StringLiteral_translateMode;
joined_?:
    if (unaff_EDI != (GizmoMenu *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pEVar3 = (this->fields).editorStateMachine;
      if (pEVar3 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_PushState
                  ((FSMEntity *)pEVar3,EditorEvent__Enum_ESTranslate,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case GizmoAction__Enum_FlipX:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_X,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipY:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Y,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_FlipZ:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Z,180.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepXRight:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_X,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepYRight:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Y,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  case GizmoAction__Enum_RotateStepZRight:
    pRVar6 = (this->fields).rotationHelper;
    if (pRVar6 != (RotationHelper *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
                (pRVar6,RotationMode__Enum_Z,-15.0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    return;
  }
  uVar7 = func_?();
  iVar8 = (int)((ulonglong)uVar7 >> 0x20);
  pcVar9 = (char *)uVar7;
  puVar10 = (uint *)(iVar8 + 0x3a);
  uVar11 = *puVar10;
  *puVar10 = (uint)(&stack0xfffffff8 + *puVar10);
  *pcVar9 = *pcVar9 + (char)uVar7 + CARRY4(uVar11,(uint)&stack0xfffffff8);
  puVar12 = &(unaff_EDI->fields).rotationMode.field_0x2;
  pSVar5 = *(Single__Class **)puVar12;
  *(int *)puVar12 = *(int *)puVar12 - (int)unaff_EBX;
  pcVar13 = (char *)(iVar8 + 0x5f);
  cVar14 = (char)((ulonglong)uVar7 >> 0x20);
  *pcVar13 = *pcVar13 + cVar14 + (pSVar5 < unaff_EBX);
  if ((POPCOUNT(cVar14 - *pcVar9) & 1U) == 0) {
    *(undefined1 *)&unaff_EDI->klass = *(undefined1 *)&(in_ECX->_0).image;
    return;
  }
  pcVar13 = (char *)((int)&unaff_EBX[0x61d2c]._1.initializationExceptionGCHandle + 2);
  *pcVar13 = *pcVar13 + extraout_CL;
  func_?();
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
  pMVar15 = method;
  GVar16 = action;
  if (bVar1 != 0) {
    if ((in_ECX->_0).element_class != (Il2CppClass *)0x0) {
      if (cRam_? == '\0') {
        method = (MethodInfo *)
                 &
                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
        ;
        action = (GizmoAction__Enum)&UNK_?;
        func_?();
        action = (GizmoAction__Enum)
                 &
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      action = GVar16;
      method = pMVar15;
      pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (in_stack_18,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Object;
        action = (GizmoAction__Enum)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      action = GizmoAction__Enum_None;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pGVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        method = (MethodInfo *)&UNK_?;
        pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (in_stack_18,(MethodInfo *)0x0);
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
          action = (GizmoAction__Enum)&UNK_?;
          method = (MethodInfo *)callbackFunction;
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
        method = (MethodInfo *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar17,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
    func_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
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


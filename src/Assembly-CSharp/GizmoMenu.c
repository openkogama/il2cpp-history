
/* Boolean CanClone() */

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanClone(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0xd & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanCloneRoot(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0x1a & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void ChangeRotationMode(RotationMode, GizmoRotationModeButton) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationMode
               (GizmoMenu *this,RotationMode__Enum mode,GizmoRotationModeButton *highlight,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_02 = TypeInfo__GizmoMenu____c->static_fields->__9__28_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__28_0 = this_02;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__28_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  pGVar5 = (this->fields).xRotation;
  NStackX_8 = (Nullable_1_RotationMode_)((ulonglong)mode << 0x20);
  NStackX_8.hasValue = 1;
  (this->fields).rotationMode = NStackX_8;
  if (pGVar5 != (GizmoRotationModeButton *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
    GizmoRotationModeButton_ResetColors(pGVar5,(MethodInfo *)0x0);
    pGVar5 = (this->fields).yRotation;
    if (pGVar5 != (GizmoRotationModeButton *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
      GizmoRotationModeButton_ResetColors(pGVar5,(MethodInfo *)0x0);
      pGVar5 = (this->fields).zRotation;
      if (((pGVar5 != (GizmoRotationModeButton *)0x0) &&
          (UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
           GizmoRotationModeButton_ResetColors(pGVar5,(MethodInfo *)0x0),
          highlight != (GizmoRotationModeButton *)0x0)) &&
         (this_00 = (highlight->fields).gradient, this_00 != (GradientEffect *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pTVar6 = (highlight->fields).text;
        if (pTVar6 != (Text *)0x0) {
          fStack_7 = (highlight->fields).selectedTextColor.r;
          fStack_8 = (highlight->fields).selectedTextColor.g;
          fStack_9 = (highlight->fields).selectedTextColor.b;
          fStack_10 = (highlight->fields).selectedTextColor.a;
          (*(pTVar6->klass->vtable).set_color.methodPtr)(pTVar6,&fStack_7);
          this_01 = (highlight->fields).button;
          if (this_01 != (Button *)0x0) {
            CStack_11.m_NormalColor.r = (highlight->fields).selectedColorBlock.m_NormalColor.r;
            CStack_11.m_NormalColor.g = (highlight->fields).selectedColorBlock.m_NormalColor.g;
            CStack_11.m_NormalColor.b = (highlight->fields).selectedColorBlock.m_NormalColor.b;
            CStack_11.m_NormalColor.a = (highlight->fields).selectedColorBlock.m_NormalColor.a;
            CStack_11.m_HighlightedColor.r =
                 (highlight->fields).selectedColorBlock.m_HighlightedColor.r;
            CStack_11.m_HighlightedColor.g =
                 (highlight->fields).selectedColorBlock.m_HighlightedColor.g;
            CStack_11.m_HighlightedColor.b =
                 (highlight->fields).selectedColorBlock.m_HighlightedColor.b;
            CStack_11.m_HighlightedColor.a =
                 (highlight->fields).selectedColorBlock.m_HighlightedColor.a;
            CStack_11.m_PressedColor.r = (highlight->fields).selectedColorBlock.m_PressedColor.r;
            CStack_11.m_PressedColor.g = (highlight->fields).selectedColorBlock.m_PressedColor.g;
            CStack_11.m_PressedColor.b = (highlight->fields).selectedColorBlock.m_PressedColor.b;
            CStack_11.m_PressedColor.a = (highlight->fields).selectedColorBlock.m_PressedColor.a;
            CStack_11.m_SelectedColor.r = (highlight->fields).selectedColorBlock.m_SelectedColor.r;
            CStack_11.m_SelectedColor.g = (highlight->fields).selectedColorBlock.m_SelectedColor.g;
            CStack_11.m_SelectedColor.b = (highlight->fields).selectedColorBlock.m_SelectedColor.b;
            CStack_11.m_SelectedColor.a = (highlight->fields).selectedColorBlock.m_SelectedColor.a;
            CStack_11.m_DisabledColor.r = (highlight->fields).selectedColorBlock.m_DisabledColor.r;
            CStack_11.m_DisabledColor.g = (highlight->fields).selectedColorBlock.m_DisabledColor.g;
            CStack_11.m_DisabledColor.b = (highlight->fields).selectedColorBlock.m_DisabledColor.b;
            CStack_11.m_DisabledColor.a = (highlight->fields).selectedColorBlock.m_DisabledColor.a;
            CStack_11.m_ColorMultiplier = (highlight->fields).selectedColorBlock.m_ColorMultiplier;
            CStack_11.m_FadeDuration = (highlight->fields).selectedColorBlock.m_FadeDuration;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                      ((Selectable *)this_01,&CStack_11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ChangeRotationModeToX() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToX
               (GizmoMenu *this,MethodInfo *method)

{
  pGVar1 = (this->fields).xRotation;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_02 = TypeInfo__GizmoMenu____c->static_fields->__9__28_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__28_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__28_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  pGVar6 = (this->fields).xRotation;
  (this->fields).rotationMode.hasValue = 1;
  *(undefined3 *)&(this->fields).rotationMode.field_0x1 = 0;
  (this->fields).rotationMode.value = 0;
  if (pGVar6 != (GizmoRotationModeButton *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
    GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
    pGVar6 = (this->fields).yRotation;
    if (pGVar6 != (GizmoRotationModeButton *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
      GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
      pGVar6 = (this->fields).zRotation;
      if (((pGVar6 != (GizmoRotationModeButton *)0x0) &&
          (UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
           GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0),
          pGVar1 != (GizmoRotationModeButton *)0x0)) &&
         (this_00 = (pGVar1->fields).gradient, this_00 != (GradientEffect *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pTVar7 = (pGVar1->fields).text;
        if (pTVar7 != (Text *)0x0) {
          fStack_8 = (pGVar1->fields).selectedTextColor.r;
          fStack_9 = (pGVar1->fields).selectedTextColor.g;
          fStack_10 = (pGVar1->fields).selectedTextColor.b;
          fStack_11 = (pGVar1->fields).selectedTextColor.a;
          (*(pTVar7->klass->vtable).set_color.methodPtr)(pTVar7,&fStack_8);
          this_01 = (pGVar1->fields).button;
          if (this_01 != (Button *)0x0) {
            CStack_12.m_NormalColor.r = (pGVar1->fields).selectedColorBlock.m_NormalColor.r;
            CStack_12.m_NormalColor.g = (pGVar1->fields).selectedColorBlock.m_NormalColor.g;
            CStack_12.m_NormalColor.b = (pGVar1->fields).selectedColorBlock.m_NormalColor.b;
            CStack_12.m_NormalColor.a = (pGVar1->fields).selectedColorBlock.m_NormalColor.a;
            CStack_12.m_HighlightedColor.r =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.r;
            CStack_12.m_HighlightedColor.g =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.g;
            CStack_12.m_HighlightedColor.b =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.b;
            CStack_12.m_HighlightedColor.a =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.a;
            CStack_12.m_PressedColor.r = (pGVar1->fields).selectedColorBlock.m_PressedColor.r;
            CStack_12.m_PressedColor.g = (pGVar1->fields).selectedColorBlock.m_PressedColor.g;
            CStack_12.m_PressedColor.b = (pGVar1->fields).selectedColorBlock.m_PressedColor.b;
            CStack_12.m_PressedColor.a = (pGVar1->fields).selectedColorBlock.m_PressedColor.a;
            CStack_12.m_SelectedColor.r = (pGVar1->fields).selectedColorBlock.m_SelectedColor.r;
            CStack_12.m_SelectedColor.g = (pGVar1->fields).selectedColorBlock.m_SelectedColor.g;
            CStack_12.m_SelectedColor.b = (pGVar1->fields).selectedColorBlock.m_SelectedColor.b;
            CStack_12.m_SelectedColor.a = (pGVar1->fields).selectedColorBlock.m_SelectedColor.a;
            CStack_12.m_DisabledColor.r = (pGVar1->fields).selectedColorBlock.m_DisabledColor.r;
            CStack_12.m_DisabledColor.g = (pGVar1->fields).selectedColorBlock.m_DisabledColor.g;
            CStack_12.m_DisabledColor.b = (pGVar1->fields).selectedColorBlock.m_DisabledColor.b;
            CStack_12.m_DisabledColor.a = (pGVar1->fields).selectedColorBlock.m_DisabledColor.a;
            CStack_12.m_ColorMultiplier = (pGVar1->fields).selectedColorBlock.m_ColorMultiplier;
            CStack_12.m_FadeDuration = (pGVar1->fields).selectedColorBlock.m_FadeDuration;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                      ((Selectable *)this_01,&CStack_12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ChangeRotationModeToY() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToY
               (GizmoMenu *this,MethodInfo *method)

{
  pGVar1 = (this->fields).yRotation;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_02 = TypeInfo__GizmoMenu____c->static_fields->__9__28_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__28_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__28_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  pGVar6 = (this->fields).xRotation;
  (this->fields).rotationMode.hasValue = 1;
  *(undefined3 *)&(this->fields).rotationMode.field_0x1 = 0;
  (this->fields).rotationMode.value = 1;
  if (pGVar6 != (GizmoRotationModeButton *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
    GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
    pGVar6 = (this->fields).yRotation;
    if (pGVar6 != (GizmoRotationModeButton *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
      GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
      pGVar6 = (this->fields).zRotation;
      if (((pGVar6 != (GizmoRotationModeButton *)0x0) &&
          (UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
           GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0),
          pGVar1 != (GizmoRotationModeButton *)0x0)) &&
         (this_00 = (pGVar1->fields).gradient, this_00 != (GradientEffect *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pTVar7 = (pGVar1->fields).text;
        if (pTVar7 != (Text *)0x0) {
          fStack_8 = (pGVar1->fields).selectedTextColor.r;
          fStack_9 = (pGVar1->fields).selectedTextColor.g;
          fStack_10 = (pGVar1->fields).selectedTextColor.b;
          fStack_11 = (pGVar1->fields).selectedTextColor.a;
          (*(pTVar7->klass->vtable).set_color.methodPtr)(pTVar7,&fStack_8);
          this_01 = (pGVar1->fields).button;
          if (this_01 != (Button *)0x0) {
            CStack_12.m_NormalColor.r = (pGVar1->fields).selectedColorBlock.m_NormalColor.r;
            CStack_12.m_NormalColor.g = (pGVar1->fields).selectedColorBlock.m_NormalColor.g;
            CStack_12.m_NormalColor.b = (pGVar1->fields).selectedColorBlock.m_NormalColor.b;
            CStack_12.m_NormalColor.a = (pGVar1->fields).selectedColorBlock.m_NormalColor.a;
            CStack_12.m_HighlightedColor.r =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.r;
            CStack_12.m_HighlightedColor.g =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.g;
            CStack_12.m_HighlightedColor.b =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.b;
            CStack_12.m_HighlightedColor.a =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.a;
            CStack_12.m_PressedColor.r = (pGVar1->fields).selectedColorBlock.m_PressedColor.r;
            CStack_12.m_PressedColor.g = (pGVar1->fields).selectedColorBlock.m_PressedColor.g;
            CStack_12.m_PressedColor.b = (pGVar1->fields).selectedColorBlock.m_PressedColor.b;
            CStack_12.m_PressedColor.a = (pGVar1->fields).selectedColorBlock.m_PressedColor.a;
            CStack_12.m_SelectedColor.r = (pGVar1->fields).selectedColorBlock.m_SelectedColor.r;
            CStack_12.m_SelectedColor.g = (pGVar1->fields).selectedColorBlock.m_SelectedColor.g;
            CStack_12.m_SelectedColor.b = (pGVar1->fields).selectedColorBlock.m_SelectedColor.b;
            CStack_12.m_SelectedColor.a = (pGVar1->fields).selectedColorBlock.m_SelectedColor.a;
            CStack_12.m_DisabledColor.r = (pGVar1->fields).selectedColorBlock.m_DisabledColor.r;
            CStack_12.m_DisabledColor.g = (pGVar1->fields).selectedColorBlock.m_DisabledColor.g;
            CStack_12.m_DisabledColor.b = (pGVar1->fields).selectedColorBlock.m_DisabledColor.b;
            CStack_12.m_DisabledColor.a = (pGVar1->fields).selectedColorBlock.m_DisabledColor.a;
            CStack_12.m_ColorMultiplier = (pGVar1->fields).selectedColorBlock.m_ColorMultiplier;
            CStack_12.m_FadeDuration = (pGVar1->fields).selectedColorBlock.m_FadeDuration;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                      ((Selectable *)this_01,&CStack_12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ChangeRotationModeToZ() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToZ
               (GizmoMenu *this,MethodInfo *method)

{
  pGVar1 = (this->fields).zRotation;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_02 = TypeInfo__GizmoMenu____c->static_fields->__9__28_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__28_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__28_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  pGVar6 = (this->fields).xRotation;
  (this->fields).rotationMode.hasValue = 1;
  *(undefined3 *)&(this->fields).rotationMode.field_0x1 = 0;
  (this->fields).rotationMode.value = 2;
  if (pGVar6 != (GizmoRotationModeButton *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
    GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
    pGVar6 = (this->fields).yRotation;
    if (pGVar6 != (GizmoRotationModeButton *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
      GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0);
      pGVar6 = (this->fields).zRotation;
      if (((pGVar6 != (GizmoRotationModeButton *)0x0) &&
          (UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
           GizmoRotationModeButton_ResetColors(pGVar6,(MethodInfo *)0x0),
          pGVar1 != (GizmoRotationModeButton *)0x0)) &&
         (this_00 = (pGVar1->fields).gradient, this_00 != (GradientEffect *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pTVar7 = (pGVar1->fields).text;
        if (pTVar7 != (Text *)0x0) {
          fStack_8 = (pGVar1->fields).selectedTextColor.r;
          fStack_9 = (pGVar1->fields).selectedTextColor.g;
          fStack_10 = (pGVar1->fields).selectedTextColor.b;
          fStack_11 = (pGVar1->fields).selectedTextColor.a;
          (*(pTVar7->klass->vtable).set_color.methodPtr)(pTVar7,&fStack_8);
          this_01 = (pGVar1->fields).button;
          if (this_01 != (Button *)0x0) {
            CStack_12.m_NormalColor.r = (pGVar1->fields).selectedColorBlock.m_NormalColor.r;
            CStack_12.m_NormalColor.g = (pGVar1->fields).selectedColorBlock.m_NormalColor.g;
            CStack_12.m_NormalColor.b = (pGVar1->fields).selectedColorBlock.m_NormalColor.b;
            CStack_12.m_NormalColor.a = (pGVar1->fields).selectedColorBlock.m_NormalColor.a;
            CStack_12.m_HighlightedColor.r =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.r;
            CStack_12.m_HighlightedColor.g =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.g;
            CStack_12.m_HighlightedColor.b =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.b;
            CStack_12.m_HighlightedColor.a =
                 (pGVar1->fields).selectedColorBlock.m_HighlightedColor.a;
            CStack_12.m_PressedColor.r = (pGVar1->fields).selectedColorBlock.m_PressedColor.r;
            CStack_12.m_PressedColor.g = (pGVar1->fields).selectedColorBlock.m_PressedColor.g;
            CStack_12.m_PressedColor.b = (pGVar1->fields).selectedColorBlock.m_PressedColor.b;
            CStack_12.m_PressedColor.a = (pGVar1->fields).selectedColorBlock.m_PressedColor.a;
            CStack_12.m_SelectedColor.r = (pGVar1->fields).selectedColorBlock.m_SelectedColor.r;
            CStack_12.m_SelectedColor.g = (pGVar1->fields).selectedColorBlock.m_SelectedColor.g;
            CStack_12.m_SelectedColor.b = (pGVar1->fields).selectedColorBlock.m_SelectedColor.b;
            CStack_12.m_SelectedColor.a = (pGVar1->fields).selectedColorBlock.m_SelectedColor.a;
            CStack_12.m_DisabledColor.r = (pGVar1->fields).selectedColorBlock.m_DisabledColor.r;
            CStack_12.m_DisabledColor.g = (pGVar1->fields).selectedColorBlock.m_DisabledColor.g;
            CStack_12.m_DisabledColor.b = (pGVar1->fields).selectedColorBlock.m_DisabledColor.b;
            CStack_12.m_DisabledColor.a = (pGVar1->fields).selectedColorBlock.m_DisabledColor.a;
            CStack_12.m_ColorMultiplier = (pGVar1->fields).selectedColorBlock.m_ColorMultiplier;
            CStack_12.m_FadeDuration = (pGVar1->fields).selectedColorBlock.m_FadeDuration;
            UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                      ((Selectable *)this_01,&CStack_12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Clone() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Clone(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_01 = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__21_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_02,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CloneRoot(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c__DisplayClass22_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__GizmoMenu____c__DisplayClass22_0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_01 = TypeInfo__GizmoMenu____c->static_fields->__9__22_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__22_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__22_0 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
     (pOVar7 = (Object__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                         (this_02,(this->fields).woID,(MethodInfo *)0x0), object_00 == (Object *)0x0
     )) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar6 = iRam_? != 0;
  object_00[1].klass = pOVar7;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,object_00,
             MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar10->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_03,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleCloningHotkey() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_HandleCloningHotkey
               (GizmoMenu *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x71);
  if (cVar3 == '\0') {
    return;
  }
  bVar4 = GizmoMenu_CanClone(this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = GizmoMenu_CanCloneRoot(this,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c__DisplayClass22_0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)FUN_?(TypeInfo__GizmoMenu____c__DisplayClass22_0);
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    pEVar6 = TypeInfo__GizmoMenu____c->static_fields->__9__22_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GizmoMenu____c);
      }
      pGVar7 = TypeInfo__GizmoMenu____c->static_fields->__9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GizmoMenu____c->static_fields->__9__22_0 = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__22_0 >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pOVar13 = (Object__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                            (this_01,(this->fields).woID,(MethodInfo *)0x0), object == (Object *)0x0
       )) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = iRam_? != 0;
    object[1].klass = pOVar13;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,object,
               MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    pEVar6 = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GizmoMenu____c);
      }
      pGVar7 = TypeInfo__GizmoMenu____c->static_fields->__9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__21_0 >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar14 = *puVar11;
          LOCK();
          uVar10 = *puVar11;
          if (uVar14 == uVar10) {
            *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar14 != uVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  pMVar15 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar15->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar15);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar16->fields)._size;
    uVar8 = 0;
    if (0 < lVar9) {
      lVar17 = 0;
      lVar18 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar16->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar19 = (pLVar16->fields)._items;
        if (pTVar19 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar19->max_length <= uVar8) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar5,(BaseEventData *)0x0,this_02,
                           (pMVar15->field7_0x38).rgctx_data[1].method);
        if (bVar4 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar17 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Initialize
               (GizmoMenu *this,int32_t id,Vector3 *wp,EditorStateMachine *esm,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).woID = id;
  (this->fields).editorStateMachine = esm;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
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
  fVar6 = wp->y;
  fVar7 = wp->z;
  (this->fields).worldPosition.x = wp->x;
  (this->fields).worldPosition.y = fVar6;
  (this->fields).worldPosition.z = fVar7;
  GizmoMenu_Setup(this,(MethodInfo *)0x0);
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar8 == (MainCameraManager *)0x0) ||
     (obj = (pMVar8->fields).mainCamera, obj == (Camera *)0x0)) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uStack_10._0_4_ = (this->fields).worldPosition.x;
  uStack_10._4_4_ = (this->fields).worldPosition.y;
  fStack_11 = (this->fields).worldPosition.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_12 = 0;
  uStack_13 = 0;
  pvVar14 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(pvVar14,&uStack_10,2,&uStack_12);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
    uStack_10 = uStack_12;
    fStack_11 = (float)uStack_13;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar14,&uStack_10);
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_OnDestroy(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  key = (this->fields).woID;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,key,
                  this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (pMVar1->fields).woDestroyedEventSubscribers;
  if (pDVar3 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                     (Object **)&stack0x00000008,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                    );
  if (bVar4 != 0) {
    pDVar3 = (pMVar1->fields).woDestroyedEventSubscribers;
    if (pDVar3 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
              );
  }
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_PopWoDestroyed
               (GizmoMenu *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoMenu____c___Pop_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoMenu____c);
  }
  this_01 = TypeInfo__GizmoMenu____c->static_fields->__9__18_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GizmoMenu____c___Pop_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__18_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__18_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_SetToScreenPoint(GizmoMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 == (MainCameraManager *)0x0) ||
     (obj = (pMVar1->fields).mainCamera, obj == (Camera *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3._0_4_ = (this->fields).worldPosition.x;
  uStack_3._4_4_ = (this->fields).worldPosition.y;
  fStack_4 = (this->fields).worldPosition.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  uStack_6 = 0;
  pvVar7 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7,&uStack_3,2,&uStack_5);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
    uStack_3 = uStack_5;
    fStack_4 = (float)uStack_6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar7,&uStack_3);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Setup() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Setup(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,(this->fields).woID,(MethodInfo *)0x0),
     pMVar2 == (MVWorldObjectClient *)0x0)) goto code_?;
  (*(pMVar2->klass->vtable).DrawTransformGizmo.methodPtr)
            (pMVar2,(pMVar2->klass->vtable).DrawTransformGizmo.method);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  woID = (this->fields).woID;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
            (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_00,(MethodInfo *)0x0
            );
  uVar3 = (pMVar2->fields).interactionFlags;
  uVar4 = (pMVar2->fields).interactionFlags;
  bVar5 = (uVar3 & 0x80) != 0;
  uVar6 = (pMVar2->fields).interactionFlags;
  pGVar7 = (this->fields).rotate;
  value = (uVar4 & 0x100) != 0;
  value_00 = (uVar6 & 0x200) != 0;
  if ((pGVar7 == (GizmoButton *)0x0) ||
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar7,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,(value_00 || value) || bVar5,(MethodInfo *)0x0);
  pGVar9 = (this->fields).xRotation;
  if ((pGVar9 == (GizmoRotationModeButton *)0x0) ||
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar9,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,bVar5,(MethodInfo *)0x0);
  pGVar9 = (this->fields).yRotation;
  if ((pGVar9 == (GizmoRotationModeButton *)0x0) ||
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar9,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,value,(MethodInfo *)0x0);
  pGVar9 = (this->fields).zRotation;
  if ((pGVar9 == (GizmoRotationModeButton *)0x0) ||
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar9,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,value_00,(MethodInfo *)0x0);
  if ((uVar4 & 0x100) == 0) {
    if ((uVar3 & 0x80) != 0) {
      pGVar9 = (this->fields).xRotation;
      mode = RotationMode__Enum_X;
      goto code_?;
    }
    if ((uVar6 & 0x200) != 0) {
      pGVar9 = (this->fields).zRotation;
      mode = RotationMode__Enum_Z;
      goto code_?;
    }
  }
  else {
    pGVar9 = (this->fields).yRotation;
    mode = RotationMode__Enum_Y;
code_?:
    GizmoMenu_ChangeRotationMode(this,mode,pGVar9,(MethodInfo *)0x0);
  }
  iVar10 = (pMVar2->fields).interactionFlags;
  pGVar7 = (this->fields).xzTranslate;
  if ((pGVar7 != (GizmoButton *)0x0) &&
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,(iVar10 & 0x800) == 0,(MethodInfo *)0x0);
    iVar10 = (pMVar2->fields).interactionFlags;
    pGVar7 = (this->fields).yTranslate;
    if ((pGVar7 != (GizmoButton *)0x0) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
      bVar5 = (iVar10 & 0x400) == 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,bVar5,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar8 == (GameObject *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pvVar12 = (pGVar8->fields)._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar12,bVar5);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Update(GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x71);
  if (cVar3 == '\0') {
    return;
  }
  bVar4 = GizmoMenu_CanClone(this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = GizmoMenu_CanCloneRoot(this,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c__DisplayClass22_0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)FUN_?(TypeInfo__GizmoMenu____c__DisplayClass22_0);
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    pEVar6 = TypeInfo__GizmoMenu____c->static_fields->__9__22_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GizmoMenu____c);
      }
      pGVar7 = TypeInfo__GizmoMenu____c->static_fields->__9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GizmoMenu____c->static_fields->__9__22_0 = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__22_0 >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pOVar13 = (Object__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                            (this_01,(this->fields).woID,(MethodInfo *)0x0), object == (Object *)0x0
       )) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = iRam_? != 0;
    object[1].klass = pOVar13;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,object,
               MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GizmoMenu____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoMenu____c);
    }
    pEVar6 = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
    if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GizmoMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GizmoMenu____c);
      }
      pGVar7 = TypeInfo__GizmoMenu____c->static_fields->__9;
      pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                 MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = pEVar6;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__GizmoMenu____c->static_fields->__9__21_0 >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar14 = *puVar11;
          LOCK();
          uVar10 = *puVar11;
          if (uVar14 == uVar10) {
            *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar14 != uVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
  }
  pMVar15 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar15->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar15);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar5,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar16->fields)._size;
    uVar8 = 0;
    if (0 < lVar9) {
      lVar17 = 0;
      lVar18 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar16->fields)._size <= uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar19 = (pLVar16->fields)._items;
        if (pTVar19 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar19->max_length <= uVar8) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar19->vector + lVar18 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar5,(BaseEventData *)0x0,this_02,
                           (pMVar15->field7_0x38).rgctx_data[1].method);
        if (bVar4 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar17 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Clone>b__21_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__Clone_b__21_1
               (GizmoMenu *this,ICloneHandler *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (handler != (ICloneHandler *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RotationMode get_RotationMode() */

RotationMode__Enum
Assembly-CSharp.dll::GizmoMenu::GizmoMenu_get_RotationMode(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).rotationMode.hasValue != 0) {
    return (this->fields).rotationMode.value;
  }
  return RotationMode__Enum_Y;
}


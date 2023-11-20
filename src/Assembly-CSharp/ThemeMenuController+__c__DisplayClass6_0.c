
/* Void <OpenSettingsForPreview>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass6_0::
     ThemeMenuController_c_DisplayClass6_0__OpenSettingsForPreview_b__0
               (ThemeMenuController_c_DisplayClass6_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&
                    MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__1__
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemePreviewSettingsMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)(this->fields).__9__1;
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__1__
                 ,(MethodInfo *)0x0);
      (this->fields).__9__1 = (UnityAction *)this_01;
      func_?(&(this->fields).__9__1,this_01);
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,6,this_01,4);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OpenSettingsForPreview>b__1() */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass6_0::
     ThemeMenuController_c_DisplayClass6_0__OpenSettingsForPreview_b__1
               (ThemeMenuController_c_DisplayClass6_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  pTVar1 = (this->fields).theme;
  if (this_01 == (ThemeRepository *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    pDStack_3 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_3 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Preview_theme_destroyed,(MethodInfo *)0x0);
  if (pTVar1 == (Theme *)0x0) goto code_?;
  Theme::Theme_Deactivate(pTVar1,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)pTVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  pTVar4 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_01,(MethodInfo *)0x0);
  if (pTVar4 == (ThemeWorldObject *)0x0) {
    pTVar1 = (Theme *)0x0;
  }
  else {
    pTVar1 = (pTVar4->fields)._Visualization_k__BackingField;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  pTVar4 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_01,(MethodInfo *)0x0);
  if ((pTVar4 == (ThemeWorldObject *)0x0) ||
     (pTVar1 = (pTVar4->fields)._Visualization_k__BackingField, pTVar1 == (Theme *)0x0))
  goto code_?;
  pDStack_3 = (Debug_2__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pDStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  if ((pTVar1->fields).overrideSkyboxManager != 0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_02 == (SkyboxManager *)0x0) goto code_?;
    unaff_EDI = (MethodInfo *)0x0;
    SkyboxManager::SkyboxManager_Disable(this_02,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (pTVar1->fields).components;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    RVar7 = pLVar6->_current;
    while( true ) {
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar5 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = pDStack_3;
        return;
      }
      if (RVar7 == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)RVar7 + 0xe0))(RVar7,*(undefined4 *)(*(int *)RVar7 + 0xe4));
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


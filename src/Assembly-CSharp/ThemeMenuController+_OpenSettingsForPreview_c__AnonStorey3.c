
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<OpenSettingsForPreview>c__AnonStorey3::
     ThemeMenuController_OpenSettingsForPreview_c_AnonStorey3___m__0
               (ThemeMenuController_OpenSettingsForPreview_c_AnonStorey3 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemePreviewSettingsMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__ThemeMenuController___OpenSettingsForPreview_c__AnonStorey3____m__1__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,6,this_01,4);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1() */

void Assembly-CSharp.dll::ThemeMenuController+<OpenSettingsForPreview>c__AnonStorey3::
     ThemeMenuController_OpenSettingsForPreview_c_AnonStorey3___m__1
               (ThemeMenuController_OpenSettingsForPreview_c_AnonStorey3 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  pTVar1 = (this->fields).theme;
  if (this_01 == (ThemeRepository *)0x0) {
code_?:
    pDStack_2 = (Debug_1__Class *)0x0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    pDStack_2 = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    pDStack_2 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Preview_theme_destroyed,(MethodInfo *)0x0);
  if (pTVar1 == (Theme *)0x0) goto code_?;
  Theme::Theme_Deactivate(pTVar1,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)pTVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pDStack_2 = (Debug_1__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pDStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar6 = (undefined4 *)&stack0xffffffb8;
  puVar7 = (undefined4 *)&stack0xffffffb8;
  func_?();
  if ((pTVar1->fields).overrideSkyboxManager != 0) {
    puVar7 = (undefined4 *)&stack0xffffffb8;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puVar7 = (undefined4 *)&stack0xffffffb8,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
      puVar7 = puVar6;
    }
    uVar8 = 0;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_02 == (SkyboxManager *)0x0) goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_02,(MethodInfo *)0x0);
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(pTVar1->fields).components;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&pLStack_9,this_00,
               MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__);
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puVar7 = 0x53;
        func_?(&stack0xffffffd4,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                       );
        *unaff_FS_OFFSET = pDStack_2;
        return;
      }
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          &stack0xffffffd4,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                         );
      if (pOVar11 == (Object *)0x0) break;
      (*pOVar11->klass[1]._0.gc_desc)(pOVar11,pOVar11->klass[1]._0.name);
    }
  }
  uVar8 = 0;
code_?:
  func_?(uVar8);
  func_?(0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


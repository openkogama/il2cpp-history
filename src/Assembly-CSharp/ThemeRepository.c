
/* Theme CreateTemporaryThemeVisualization(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_theme_created);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Preview_theme_created,(MethodInfo *)0x0);
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    pTVar2 = (Theme *)0x0;
  }
  else {
    pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    identifier = (String *)this;
    pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
    if ((pTVar1 == (ThemeWorldObject *)0x0) ||
       (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
    goto code_?;
    Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
  }
  pTVar2 = ThemeRepository_GetThemePrefab(this,identifier,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar2 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar2,
                               Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  if (pTVar2 != (Theme *)0x0) {
    Theme::Theme_InitializeForPreview(pTVar2,(MethodInfo *)0x0);
    Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
    return pTVar2;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar2 = (Theme *)(*pcVar4)();
  return pTVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = (ThemeRepository *)0x0;
  func_?(TypeInfo__ThemeRepository->static_fields,0);
  return;
}


/* Void DestroyTemporary(Theme) */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_DestroyTemporary
               (ThemeRepository *this,Theme *theme,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_theme_destroyed);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Preview_theme_destroyed,(MethodInfo *)0x0);
  if (theme != (Theme *)0x0) {
    Theme::Theme_Deactivate(theme,(MethodInfo *)0x0);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)theme,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    pTVar1 = ThemeRepository_get_CurrentTheme((ThemeRepository *)&UNK_?,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar1 = ThemeRepository_get_CurrentTheme((ThemeRepository *)&UNK_?,(MethodInfo *)0x0);
      if ((pTVar1 == (ThemeWorldObject *)0x0) ||
         (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
      goto code_?;
      Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Theme GetThemePrefab(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_GetThemePrefab
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__TryGetValue_System__String__Theme__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Theme>__get_Item_int_);
    func_?(&StringLiteral_Theme_is_missing);
    func_?(&StringLiteral__is_not_present_in_theme_reposit);
    cRam_? = '\x01';
  }
  pTVar1 = (Theme *)0x0;
  this_00 = (this->fields).IdentifierToTheme;
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)identifier,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__TryGetValue_System__String__Theme__
                      );
    if (bVar2 != 0) {
      return pTVar1;
    }
    message = mscorlib.dll::System::String::String_Concat_3
                        (identifier,StringLiteral__is_not_present_in_theme_reposit,(MethodInfo *)0x0
                        );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Theme_is_missing,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).themePrefabs;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,0,
                         MethodInfo__System__Collections__Generic__List<Theme>__get_Item_int_);
      return (Theme *)RVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar1 = (Theme *)(*pcVar4)();
  return pTVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Initialize
               (ThemeRepository *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__set_Item_System__String__Theme_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Theme>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = this;
  func_?(TypeInfo__ThemeRepository->static_fields,this);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).themePrefabs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<Theme>__GetEnumerator__);
    method_00 = (MethodInfo *)pLVar6->_version;
    value = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pDStack_9 = (this->fields).IdentifierToTheme;
      if (value == (RegexCharClass_SingleRange)0x0) break;
      key = (Object *)(**(code **)(*(int *)value + 0xe0))();
      if (pDStack_9 == (Dictionary_2_System_String_Theme_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDStack_9,key,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__set_Item_System__String__Theme_
                );
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* ThemeRepository() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository__ctor
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_Theme>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_Theme>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__Dictionary__
            );
  ppDVar1 = &(this->fields).IdentifierToTheme;
  *ppDVar1 = (Dictionary_2_System_String_Theme_ *)this_00;
  func_?(ppDVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::ScriptableObject::ScriptableObject__ctor
            ((ScriptableObject *)this,(MethodInfo *)0x0);
  return;
}


/* ThemeWorldObject get_CurrentTheme() */

ThemeWorldObject *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentTheme
          (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__ThemeWorldObject);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      if ((pLVar2->fields)._size < 1) {
        return (ThemeWorldObject *)0x0;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0);
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RStack3 =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,0,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
          if (RStack3 == (RegexCharClass_SingleRange)0x0) {
            return (ThemeWorldObject *)0x0;
          }
          bVar4 = (TypeInfo__ThemeWorldObject->_1).naturalAligment;
          pTStack5 = TypeInfo__ThemeWorldObject;
          if ((bVar4 <= *(byte *)(*(int *)RStack3 + 0xb8)) &&
             (*(ThemeWorldObject__Class **)
               (*(int *)(*(int *)RStack3 + 100) + -4 + (uint)bVar4 * 4) ==
              TypeInfo__ThemeWorldObject)) {
            return (ThemeWorldObject *)RStack3;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  RStack3 = extraout_EDX;
  pTStack5 = unaff_ESI;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pTVar7 = (ThemeWorldObject *)(*pcVar6)();
  return pTVar7;
}


/* String get_CurrentThemeIdentifier() */

String * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeIdentifier
                   (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    return (String *)0x0;
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 != (ThemeWorldObject *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
        != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TStack3 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                       (in_stack_2 + 0x58),(Object *)StringLiteral_identifier,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      TVar4.m_Index = 0;
      if (TStack3.m_Index != 0) {
        if (*(String__Class **)TStack3.m_Index == TypeInfo__System__String) {
          TVar4 = TStack3;
        }
        if ((String *)TVar4.m_Index == (String *)0x0) {
          func_?();
          pcVar5 = (code *)swi(3);
          pSVar6 = (String *)(*pcVar5)();
          return pSVar6;
        }
      }
      return (String *)TVar4.m_Index;
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Theme get_CurrentThemeVisualization() */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeVisualization
                  (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 != (ThemeWorldObject *)0x0) {
    return (pTVar1->fields)._Visualization_k__BackingField;
  }
  return (Theme *)0x0;
}


/* Int32 get_CurrentThemeWoid() */

int32_t Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentThemeWoid
                  (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    return -1;
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 != (ThemeWorldObject *)0x0) {
    return (pTVar1->fields)._._.id;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* ThemeRepository get_Instance() */

ThemeRepository *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  return TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_SkyboxOverride
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    x = (Theme *)0x0;
  }
  else {
    x = (pTVar1->fields)._Visualization_k__BackingField;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  if (x != (Theme *)0x0) {
    return (x->fields).overrideSkyboxManager;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_ThemeIsActive() */

bool Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_ThemeIsActive
               (ThemeRepository *this,MethodInfo *method)

{
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  return pTVar1 != (ThemeWorldObject *)0x0;
}


/* Void set_Instance(ThemeRepository) */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_set_Instance
               (ThemeRepository *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = value;
  func_?(TypeInfo__ThemeRepository->static_fields,value);
  return;
}


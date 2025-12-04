
/* Theme CreateTemporaryThemeVisualization(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_theme_created);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 != (Theme *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
      if ((pTVar1 == (ThemeWorldObject *)0x0) ||
         (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
      goto code_?;
      Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
    }
  }
  pTVar2 = ThemeRepository_GetThemePrefab(this,identifier,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (Theme *)(*pcVar3)();
  return pTVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = (ThemeRepository *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__ThemeRepository->static_fields >> 0xc);
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
  return;
}


/* Void DestroyTemporary(Theme) */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_DestroyTemporary
               (ThemeRepository *this,Theme *theme,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_theme_destroyed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Preview_theme_destroyed,(MethodInfo *)0x0);
  if (theme != (Theme *)0x0) {
    Theme::Theme_Deactivate(theme,(MethodInfo *)0x0);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)theme,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar2 != (Theme *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
        if ((pTVar1 == (ThemeWorldObject *)0x0) ||
           (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
        goto code_?;
        Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Theme GetThemePrefab(String) */

Theme * Assembly-CSharp.dll::ThemeRepository::ThemeRepository_GetThemePrefab
                  (ThemeRepository *this,String *identifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__TryGetValue_System__String__Theme__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Theme>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_is_missing);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_present_in_theme_reposit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).IdentifierToTheme;
  pTStackX_8 = (Theme *)0x0;
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)identifier,
                       (Object **)&pTStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__TryGetValue_System__String__Theme__
                      );
    if (bVar1 != 0) {
      return pTStackX_8;
    }
    message = mscorlib.dll::System::String::String_Concat_4
                        (identifier,StringLiteral__is_not_present_in_theme_reposit,(MethodInfo *)0x0
                        );
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Theme_is_missing,(MethodInfo *)0x0);
    pLVar2 = (this->fields).themePrefabs;
    if (pLVar2 != (List_1_Theme_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pTVar4 = (Theme *)(*pcVar3)();
        return pTVar4;
      }
      pTVar5 = (pLVar2->fields)._items;
      if (pTVar5 != (Theme__Array *)0x0) {
        if ((int)pTVar5->max_length != 0) {
          return pTVar5->vector[0];
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        pTVar4 = (Theme *)(*pcVar3)();
        return pTVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (Theme *)(*pcVar3)();
  return pTVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository_Initialize
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__set_Item_System__String__Theme_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Theme>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?();
  LStack_1._list = (List_1_System_Object_ *)(this->fields).themePrefabs;
  if ((List_1_Theme_ *)LStack_1._list == (List_1_Theme_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_Theme_ *)LStack_1._list)->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<Theme>__MoveNext__
                      );
    value = LStack_1._current;
    if (bVar10 == 0) {
      return;
    }
    this_00 = (this->fields).IdentifierToTheme;
    if (LStack_1._current == (Object *)0x0) break;
    key = (Object *)
          (*(code *)(LStack_1._current)->klass[1]._0.image)
                    (LStack_1._current,(LStack_1._current)->klass[1]._0.gc_desc);
    if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) {
      FUN_?();
      break;
    }
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__set_Item_System__String__Theme_
                ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),method_00);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ThemeRepository() */

void Assembly-CSharp.dll::ThemeRepository::ThemeRepository__ctor
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_Theme>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_Theme>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Theme>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).IdentifierToTheme = (Dictionary_2_System_String_Theme_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).IdentifierToTheme >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(this);
  return;
}


/* ThemeWorldObject get_CurrentTheme() */

ThemeWorldObject *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_CurrentTheme
          (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0),
     pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
    if ((pLVar2->fields)._size < 1) {
      return (ThemeWorldObject *)0x0;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_Theme,(MethodInfo *)0x0),
       pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
      if ((pLVar2->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pTVar4 = (ThemeWorldObject *)(*pcVar3)();
        return pTVar4;
      }
      pMVar5 = (pLVar2->fields)._items;
      if (pMVar5 != (MVWorldObjectClient__Array *)0x0) {
        if ((int)pMVar5->max_length == 0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          pTVar4 = (ThemeWorldObject *)(*pcVar3)();
          return pTVar4;
        }
        pTVar4 = (ThemeWorldObject *)pMVar5->vector[0];
        if (pTVar4 == (ThemeWorldObject *)0x0) {
          return (ThemeWorldObject *)0x0;
        }
        bVar6 = (TypeInfo__ThemeWorldObject->_1).naturalAligment;
        if ((bVar6 <= (((MVWorldObjectClient__Class *)pTVar4->klass)->_1).naturalAligment) &&
           ((ThemeWorldObject__Class *)
            (((MVWorldObjectClient__Class *)pTVar4->klass)->_1).typeHierarchy[(ulonglong)bVar6 - 1]
            == TypeInfo__ThemeWorldObject)) {
          return pTVar4;
        }
        FUN_?(pTVar4,TypeInfo__ThemeWorldObject);
        pcVar3 = (code *)swi(3);
        pTVar4 = (ThemeWorldObject *)(*pcVar3)();
        return pTVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (ThemeWorldObject *)(*pcVar3)();
  return pTVar4;
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
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_identifier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pTVar1->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pSVar4 = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_00,(Object *)StringLiteral_identifier,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pSVar3 = pSVar4;
  if (pSVar4 != (String *)0x0) {
    pSVar3 = (String *)0x0;
    if (pSVar4->klass == pSRam0000000182dbbc60) {
      pSVar3 = pSVar4;
    }
    if (pSVar3 == (String *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  return pSVar3;
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* ThemeRepository get_Instance() */

ThemeRepository *
Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeRepository::ThemeRepository_get_SkyboxOverride
               (ThemeRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = ThemeRepository_get_CurrentTheme(this,(MethodInfo *)0x0);
  if (pTVar1 == (ThemeWorldObject *)0x0) {
    pTVar2 = (Theme *)0x0;
  }
  else {
    pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 != (Theme *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return (pTVar2->fields).overrideSkyboxManager;
    }
  }
  return 0;
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
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__ThemeRepository->static_fields >> 0xc);
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
  return;
}


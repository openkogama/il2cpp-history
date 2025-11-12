
/* Void <OpenSettingsForPreview>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass6_0::
     ThemeMenuController_c_DisplayClass6_0__OpenSettingsForPreview_b__0
               (ThemeMenuController_c_DisplayClass6_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__1__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemePreviewSettingsMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if ((this->fields).__9__1 == (UnityAction *)0x0) {
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__1__
                 ,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields).__9__1 = (UnityAction *)this_01;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).__9__1 >> 0xc);
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
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OpenSettingsForPreview>b__1() */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass6_0::
     ThemeMenuController_c_DisplayClass6_0__OpenSettingsForPreview_b__1
               (ThemeMenuController_c_DisplayClass6_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (this_00 == (ThemeRepository *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = (this->fields).theme;
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
  if (pTVar2 != (Theme *)0x0) {
    Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar2,(MethodInfo *)0x0);
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
    pTVar3 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
    if (pTVar3 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar3->fields)._Visualization_k__BackingField;
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
        pTVar3 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
        if ((pTVar3 == (ThemeWorldObject *)0x0) ||
           (pTVar2 = (pTVar3->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
        goto code_?;
        Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


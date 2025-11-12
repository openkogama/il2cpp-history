
/* Void Start() */

void Assembly-CSharp.dll::ThemeSpawner::ThemeSpawner_Start(ThemeSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Animals);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (this_01 == (ThemeRepository *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = ThemeRepository::ThemeRepository_GetThemePrefab
                     (this_01,StringLiteral_Animals,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar2 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar2,
                               Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  if (pTVar2 == (Theme *)0x0) goto code_?;
  Theme::Theme_InitializeForPreview(pTVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pTVar2->fields).overrideSkyboxManager != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar3 == (MVGameControllerBase *)0x0) ||
       (this_00 = (pMVar3->fields).skyboxManager, this_00 == (SkyboxManager *)0x0))
    goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_00,(MethodInfo *)0x0);
  }
  LStack_4._list = (List_1_System_Object_ *)(pTVar2->fields).components;
  if ((List_1_ThemeComponent_ *)LStack_4._list != (List_1_ThemeComponent_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    puStack_10 = (undefined1 *)
                 ((ulonglong)(uint)(((List_1_ThemeComponent_ *)LStack_4._list)->fields)._version <<
                 0x20);
    puStack_11 = (undefined *)0x0;
    LStack_4._8_8_ = puStack_10;
    LStack_4._current = (Object *)0x0;
    uStack_6 = 0;
    puStack_10 = (undefined1 *)&LStack_4;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar12 == 0) {
        return;
      }
      if (LStack_4._current == (Object *)0x0) break;
      (*(code *)(LStack_4._current)->klass[1]._0.image)
                (LStack_4._current,(LStack_4._current)->klass[1]._0.gc_desc);
    }
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


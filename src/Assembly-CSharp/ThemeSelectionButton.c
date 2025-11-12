
/* Void EventTriggerCB_MouseEnter() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_EventTriggerCB_MouseEnter
               (ThemeSelectionButton *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionMenu;
  pTVar1 = (this->fields).themePrefab;
  if ((pTVar1 != (Theme *)0x0) &&
     (value = (String *)
              (*(pTVar1->klass->vtable).__unknown_2.methodPtr)
                        (pTVar1,(pTVar1->klass->vtable).__unknown_2.method),
     this_00 != (ThemeSelection *)0x0)) {
    ThemeSelection::ThemeSelection_set_ThemeDescription(this_00,value,(MethodInfo *)0x0);
    if ((this->fields).themeInUse != 0) {
      return;
    }
    this_01 = (this->fields).nameLabel;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).background;
      if (pRVar2 != (RawImage *)0x0) {
        fStack_3 = (this->fields).selectedColor.r;
        fStack_4 = (this->fields).selectedColor.g;
        fStack_5 = (this->fields).selectedColor.b;
        fStack_6 = (this->fields).selectedColor.a;
        (*(pRVar2->klass->vtable).set_color.methodPtr)
                  (pRVar2,&fStack_3,(pRVar2->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void EventTriggerCB_MouseExit() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_EventTriggerCB_MouseExit
               (ThemeSelectionButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).selectionMenu;
  if (this_00 != (ThemeSelection *)0x0) {
    ThemeSelection::ThemeSelection_set_ThemeDescription
              (this_00,StringLiteral____Hover_over_a_theme_to_know_mo,(MethodInfo *)0x0);
    if ((this->fields).themeInUse != 0) {
      return;
    }
    this_01 = (this->fields).nameLabel;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pRVar1 = (this->fields).background;
      if (pRVar1 != (RawImage *)0x0) {
        fStack_2 = (this->fields).normalColor.r;
        fStack_3 = (this->fields).normalColor.g;
        fStack_4 = (this->fields).normalColor.b;
        fStack_5 = (this->fields).normalColor.a;
        (*(pRVar1->klass->vtable).set_color.methodPtr)
                  (pRVar1,&fStack_2,(pRVar1->klass->vtable).set_color.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(ThemeSelection, Theme, UnityAction, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_Initialize
               (ThemeSelectionButton *this,ThemeSelection *selectionMenu,Theme *themePrefab,
               UnityAction *buttonClickedCB,int32_t price,int32_t levelReq,bool alreadyInUse,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).selectionMenu = selectionMenu;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).selectionMenu >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).themePrefab = themePrefab;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).themePrefab >> 0xc);
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
  if (themePrefab != (Theme *)0x0) {
    original = (themePrefab->fields).themeButtonImagePrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (Transform *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        );
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(Transform *)(this->fields).previewImageArea,0,(MethodInfo *)0x0);
      pSVar7 = (String *)(*(themePrefab->klass->vtable).__unknown_1.methodPtr)(themePrefab);
      bVar6 = iRam_? != 0;
      (this->fields).themeName = pSVar7;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(this->fields).themeName >> 0xc);
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
      pTVar8 = (this->fields)._.text;
      pSVar7 = TM::TM__((this->fields).themeName,(MethodInfo *)0x0);
      if (pTVar8 != (Text *)0x0) {
        (*(pTVar8->klass->vtable).set_text.methodPtr)
                  (pTVar8,pSVar7,(pTVar8->klass->vtable).set_text.method);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,
                   MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__,(MethodInfo *)0x0);
        TM::TM_LanguageChanged((Action *)this_02,(MethodInfo *)0x0);
        pRVar9 = (this->fields).background;
        if (pRVar9 != (RawImage *)0x0) {
          puVar10 = (undefined8 *)(*(pRVar9->klass->vtable).get_color.methodPtr)(&fStack_11);
          uVar12 = *puVar10;
          uVar13 = puVar10[1];
          (this->fields).normalColor.r = (float)(int)uVar12;
          (this->fields).normalColor.g = (float)(int)((ulonglong)uVar12 >> 0x20);
          (this->fields).normalColor.b = (float)(int)uVar13;
          (this->fields).normalColor.a = (float)(int)((ulonglong)uVar13 >> 0x20);
          if (alreadyInUse != 0) {
            pRVar9 = (this->fields).background;
            if (pRVar9 == (RawImage *)0x0) goto code_?;
            fStack_11 = (this->fields).selectedColor.r;
            fStack_14 = (this->fields).selectedColor.g;
            fStack_15 = (this->fields).selectedColor.b;
            fStack_16 = (this->fields).selectedColor.a;
            (*(pRVar9->klass->vtable).set_color.methodPtr)(pRVar9,&fStack_11);
          }
          pBVar17 = (this->fields)._.button;
          if ((pBVar17 != (Button *)0x0) &&
             (this_00 = (UnityEvent *)(pBVar17->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,buttonClickedCB,(MethodInfo *)0x0);
            obj = (this->fields).nameLabel;
            (this->fields).themeInUse = alreadyInUse;
            if (obj != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,alreadyInUse,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (obj == (GameObject *)0x0) {
                FUN_?();
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pvVar19 = (obj->fields)._.m_CachedPtr;
              if (pvVar19 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar19,alreadyInUse);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void LocalizeAndSetThemeName() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_LocalizeAndSetThemeName
               (ThemeSelectionButton *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._.text;
  pSVar2 = TM::TM__((this->fields).themeName,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


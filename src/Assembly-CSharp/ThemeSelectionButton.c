
/* Void EventTriggerCB_MouseEnter() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_EventTriggerCB_MouseEnter
               (ThemeSelectionButton *this,MethodInfo *method)

{
  pTVar1 = (this->fields).themePrefab;
  pTVar2 = (this->fields).selectionMenu;
  if ((pTVar1 != (Theme *)0x0) &&
     (pSVar3 = (String *)
               (*(code *)(pTVar1->klass->vtable).__unknown_2.method)
                         (pTVar1,(pTVar1->klass->vtable).__unknown_3.methodPtr),
     pTVar2 != (ThemeSelection *)0x0)) {
    (pTVar2->fields).currentDescription = pSVar3;
    func_?(&(pTVar2->fields).currentDescription,pSVar3);
    pTVar4 = (pTVar2->fields).themeDescription;
    pSVar3 = TM::TM__((pTVar2->fields).currentDescription,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar3,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((this->fields).themeInUse != 0) {
        return;
      }
      this_00 = (this->fields).nameLabel;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pRVar5 = (this->fields).background;
        if (pRVar5 != (RawImage *)0x0) {
          (*(code *)(pRVar5->klass->vtable).set_color.method)
                    (pRVar5,(this->fields).selectedColor.r,(this->fields).selectedColor.g,
                     (this->fields).selectedColor.b,(this->fields).selectedColor.a,
                     (pRVar5->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EventTriggerCB_MouseExit() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_EventTriggerCB_MouseExit
               (ThemeSelectionButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral____Hover_over_a_theme_to_know_mo;
  pTVar2 = (this->fields).selectionMenu;
  if (pTVar2 != (ThemeSelection *)0x0) {
    (pTVar2->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
    func_?(&(pTVar2->fields).currentDescription,pSVar1);
    pTVar3 = (pTVar2->fields).themeDescription;
    pSVar1 = TM::TM__((pTVar2->fields).currentDescription,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar1,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((this->fields).themeInUse != 0) {
        return;
      }
      this_00 = (this->fields).nameLabel;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        pRVar4 = (this->fields).background;
        if (pRVar4 != (RawImage *)0x0) {
          (*(code *)(pRVar4->klass->vtable).set_color.method)
                    (pRVar4,(this->fields).normalColor.r,(this->fields).normalColor.g,
                     (this->fields).normalColor.b,(this->fields).normalColor.a,
                     (pRVar4->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(ThemeSelection, Theme, UnityAction, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_Initialize
               (ThemeSelectionButton *this,ThemeSelection *selectionMenu,Theme *themePrefab,
               UnityAction *buttonClickedCB,int32_t price,int32_t levelReq,bool alreadyInUse,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__);
    cRam_? = '\x01';
  }
  (this->fields).selectionMenu = selectionMenu;
  func_?(&(this->fields).selectionMenu,selectionMenu);
  (this->fields).themePrefab = themePrefab;
  func_?(&(this->fields).themePrefab,themePrefab);
  if (themePrefab != (Theme *)0x0) {
    original = (themePrefab->fields).themeButtonImagePrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_02 = (Transform *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        );
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_02,(Transform *)(this->fields).previewImageArea,0,(MethodInfo *)0x0);
      pSVar1 = (String *)
               (*(code *)(themePrefab->klass->vtable).__unknown_1.method)
                         (themePrefab,(themePrefab->klass->vtable).__unknown_2.methodPtr);
      (this->fields).themeName = pSVar1;
      func_?(&(this->fields).themeName,pSVar1);
      pTVar2 = (this->fields)._.text;
      pSVar1 = TM::TM__((this->fields).themeName,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pSVar1,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,
                   MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__,(MethodInfo *)0x0);
        TM::TM_LanguageChanged((Action *)this_03,(MethodInfo *)0x0);
        pRVar3 = (this->fields).background;
        if (pRVar3 != (RawImage *)0x0) {
          pfVar4 = (float *)(*(code *)(pRVar3->klass->vtable).get_color.method)
                                      (auStack_5,pRVar3,(pRVar3->klass->vtable).set_color.methodPtr
                                      );
          fVar6 = pfVar4[1];
          fVar7 = pfVar4[2];
          fVar8 = pfVar4[3];
          (this->fields).normalColor.r = *pfVar4;
          (this->fields).normalColor.g = fVar6;
          (this->fields).normalColor.b = fVar7;
          (this->fields).normalColor.a = fVar8;
          if (alreadyInUse != 0) {
            pRVar3 = (this->fields).background;
            if (pRVar3 == (RawImage *)0x0) goto code_?;
            (*(code *)(pRVar3->klass->vtable).set_color.method)
                      (pRVar3,(this->fields).selectedColor.r,(this->fields).selectedColor.g,
                       (this->fields).selectedColor.b,(this->fields).selectedColor.a,
                       (pRVar3->klass->vtable).get_raycastTarget.methodPtr);
          }
          pBVar9 = (this->fields)._.button;
          if ((pBVar9 != (Button *)0x0) &&
             (this_00 = (UnityEvent *)(pBVar9->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,buttonClickedCB,(MethodInfo *)0x0);
            this_01 = (this->fields).nameLabel;
            (this->fields).themeInUse = alreadyInUse;
            if (this_01 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,alreadyInUse,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void LocalizeAndSetThemeName() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_LocalizeAndSetThemeName
               (ThemeSelectionButton *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._.text;
  pSVar2 = TM::TM__((this->fields).themeName,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


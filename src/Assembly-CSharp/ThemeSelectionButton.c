
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
    ppSVar4 = &(pTVar2->fields).currentDescription;
    *ppSVar4 = pSVar3;
    func_?(ppSVar4,pSVar3);
    pTVar5 = (pTVar2->fields).themeDescription;
    pSVar3 = TM::TM__(*ppSVar4,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)
                (pTVar5,pSVar3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((this->fields).themeInUse != 0) {
        return;
      }
      this_00 = (this->fields).nameLabel;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pRVar6 = (this->fields).background;
        if (pRVar6 != (RawImage *)0x0) {
          (*(code *)(pRVar6->klass->vtable).set_color.method)
                    (pRVar6,(this->fields).selectedColor.r,(this->fields).selectedColor.g,
                     (this->fields).selectedColor.b,(this->fields).selectedColor.a,
                     (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    ppSVar3 = &(pTVar2->fields).currentDescription;
    *ppSVar3 = StringLiteral____Hover_over_a_theme_to_know_mo;
    func_?(ppSVar3,pSVar1);
    pTVar4 = (pTVar2->fields).themeDescription;
    pSVar1 = TM::TM__(*ppSVar3,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar1,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((this->fields).themeInUse != 0) {
        return;
      }
      this_00 = (this->fields).nameLabel;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        pRVar5 = (this->fields).background;
        if (pRVar5 != (RawImage *)0x0) {
          (*(code *)(pRVar5->klass->vtable).set_color.method)
                    (pRVar5,(this->fields).normalColor.r,(this->fields).normalColor.g,
                     (this->fields).normalColor.b,(this->fields).normalColor.a,
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
  ppTVar1 = &(this->fields).selectionMenu;
  *ppTVar1 = selectionMenu;
  func_?(ppTVar1,selectionMenu);
  ppTVar2 = &(this->fields).themePrefab;
  *ppTVar2 = themePrefab;
  func_?(ppTVar2,themePrefab);
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
      pSVar3 = (String *)
                (*(code *)(themePrefab->klass->vtable).__unknown_1.method)
                          (themePrefab,(themePrefab->klass->vtable).__unknown_2.methodPtr);
      ppSVar4 = &(this->fields).themeName;
      *ppSVar4 = pSVar3;
      func_?(ppSVar4,pSVar3);
      pTVar5 = (this->fields)._.text;
      pSVar3 = TM::TM__(*ppSVar4,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,pSVar3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,
                   MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__,(MethodInfo *)0x0);
        TM::TM_LanguageChanged((Action *)this_03,(MethodInfo *)0x0);
        pRVar6 = (this->fields).background;
        if (pRVar6 != (RawImage *)0x0) {
          pfVar7 = (float *)(*(code *)(pRVar6->klass->vtable).get_color.method)
                                       (auStack_8,pRVar6,
                                        (pRVar6->klass->vtable).set_color.methodPtr);
          fVar9 = pfVar7[1];
          fVar10 = pfVar7[2];
          fVar11 = pfVar7[3];
          (this->fields).normalColor.r = *pfVar7;
          (this->fields).normalColor.g = fVar9;
          (this->fields).normalColor.b = fVar10;
          (this->fields).normalColor.a = fVar11;
          if (alreadyInUse != 0) {
            pRVar6 = (this->fields).background;
            if (pRVar6 == (RawImage *)0x0) goto code_?;
            (*(code *)(pRVar6->klass->vtable).set_color.method)
                      (pRVar6,(this->fields).selectedColor.r,(this->fields).selectedColor.g,
                       (this->fields).selectedColor.b,(this->fields).selectedColor.a,
                       (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
          }
          pBVar12 = (this->fields)._.button;
          if ((pBVar12 != (Button *)0x0) &&
             (this_00 = (UnityEvent *)(pBVar12->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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


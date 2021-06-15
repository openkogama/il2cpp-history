
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
    pTVar4 = (pTVar2->fields).themeDescription;
    pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EventTriggerCB_MouseExit() */

void Assembly-CSharp.dll::ThemeSelectionButton::ThemeSelectionButton_EventTriggerCB_MouseExit
               (ThemeSelectionButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral____Hover_over_a_theme_to_know_mo;
  pTVar2 = (this->fields).selectionMenu;
  if (pTVar2 != (ThemeSelection *)0x0) {
    pTVar3 = (pTVar2->fields).themeDescription;
    (pTVar2->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
    pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).selectionMenu = selectionMenu;
  (this->fields).themePrefab = themePrefab;
  if (themePrefab != (Theme *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)(themePrefab->fields).themeButtonImagePrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                ((Transform *)pXVar1,(Transform *)(this->fields).previewImageArea,0,
                 (MethodInfo *)0x0);
      pSVar2 = (String *)
               (*(code *)(themePrefab->klass->vtable).__unknown_1.method)
                         (themePrefab,(themePrefab->klass->vtable).__unknown_2.methodPtr);
      pTVar3 = (this->fields)._.text;
      (this->fields).themeName = pSVar2;
      pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,pSVar2,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__ThemeSelectionButton__LocalizeAndSetThemeName__,(MethodInfo *)0x0);
        TM::TM_LanguageChanged((Action *)this_02,(MethodInfo *)0x0);
        pRVar4 = (this->fields).background;
        if (pRVar4 != (RawImage *)0x0) {
          pfVar5 = (float *)(*(code *)(pRVar4->klass->vtable).get_color.method)
                                      (&stack0xffffffec,pRVar4,
                                       (pRVar4->klass->vtable).set_color.methodPtr);
          fVar6 = pfVar5[1];
          fVar7 = pfVar5[2];
          fVar8 = pfVar5[3];
          (this->fields).normalColor.r = *pfVar5;
          (this->fields).normalColor.g = fVar6;
          (this->fields).normalColor.b = fVar7;
          (this->fields).normalColor.a = fVar8;
          if (alreadyInUse != 0) {
            pRVar4 = (this->fields).background;
            if (pRVar4 == (RawImage *)0x0) goto code_?;
            (*(code *)(pRVar4->klass->vtable).set_color.method)
                      (pRVar4,(this->fields).selectedColor.r,(this->fields).selectedColor.g,
                       (this->fields).selectedColor.b,(this->fields).selectedColor.a,
                       (pRVar4->klass->vtable).get_raycastTarget.methodPtr);
          }
          this_00 = (HoverCraftMotor *)(this->fields)._.button;
          if (this_00 != (HoverCraftMotor *)0x0) {
            this_03 = (UnityEvent *)
                      HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
            if (this_03 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (this_03,buttonClickedCB,(MethodInfo *)0x0);
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
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


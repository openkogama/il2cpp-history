
/* Void Awake() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Awake
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = (this->fields).effectStyle;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__get_Item_EffectStyle_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__Styles);
  }
  this_00 = TypeInfo__Styles->static_fields->effectStylesDictionary;
  if ((((this_00 != (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__get_Item_EffectStyle_
                           ), pOVar2 != (Object *)0x0)) && (this != (EffectStyleObject *)0x0)) &&
     (pSVar3 = (Shadow *)(this->fields).shadow, pSVar3 != (Shadow *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pSVar3,*(bool *)((longlong)&pOVar2[1].klass + 4),(MethodInfo *)0x0);
    pMStack_4 = pOVar2[1].monitor;
    pOStack_5 = pOVar2[2].klass;
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              (pSVar3,(Color *)&pMStack_4,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
              (pSVar3,(Vector2)pOVar2[2].monitor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
              (pSVar3,*(bool *)&pOVar2[3].klass,(MethodInfo *)0x0);
    pSVar3 = (Shadow *)(this->fields).outline;
    if (pSVar3 != (Shadow *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pSVar3,*(bool *)((longlong)&pOVar2[3].klass + 1),(MethodInfo *)0x0);
      pMStack_4 = *(MonitorData **)((longlong)&pOVar2[3].klass + 4);
      pOStack_5 = *(Object__Class **)((longlong)&pOVar2[3].monitor + 4);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
                (pSVar3,(Color *)&pMStack_4,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
                (pSVar3,*(Vector2 *)((longlong)&pOVar2[4].klass + 4),(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
                (pSVar3,*(bool *)((longlong)&pOVar2[4].monitor + 4),(MethodInfo *)0x0);
      this_01 = (this->fields).gradient;
      if (this_01 != (GradientEffect *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,*(bool *)((longlong)&pOVar2[4].monitor + 5),
                   (MethodInfo *)0x0);
        pMVar6 = pOVar2[5].monitor;
        *(Object__Class **)&(this_01->fields).top = pOVar2[5].klass;
        *(MonitorData **)&(this_01->fields).top.b = pMVar6;
        pMVar6 = pOVar2[6].monitor;
        *(Object__Class **)&(this_01->fields).bottom = pOVar2[6].klass;
        *(MonitorData **)&(this_01->fields).bottom.b = pMVar6;
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_OnValidate
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if (cVar3 == '\0') {
    effectStyle = (this->fields).effectStyle;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Reset
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (Graphic *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).graphic = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).graphic >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (ShadowEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).shadow = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).shadow >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pOVar8 = (Outline *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                      );
  bVar2 = iRam_? != 0;
  (this->fields).outline = pOVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).outline >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar9 = (GradientEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                      );
  bVar2 = iRam_? != 0;
  (this->fields).gradient = pGVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gradient >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  key = (this->fields).effectStyle;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__get_Item_EffectStyle_
                  ,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar10 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
  if (bVar10 != 0) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__Styles);
    }
    this_00 = TypeInfo__Styles->static_fields->effectStylesDictionary;
    if ((((this_00 != (Dictionary_2_EffectStyle_Styles_EffectStyleDef_ *)0x0) &&
         (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                               MethodInfo__System__Collections__Generic__Dictionary<EffectStyle,_Styles::EffectStyleDef>__get_Item_EffectStyle_
                              ), pOVar11 != (Object *)0x0)) && (this != (EffectStyleObject *)0x0))
       && (pSVar12 = (Shadow *)(this->fields).shadow, pSVar12 != (Shadow *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pSVar12,*(bool *)((longlong)&pOVar11[1].klass + 4),(MethodInfo *)0x0);
      pMStack_13 = pOVar11[1].monitor;
      pOStack_14 = pOVar11[2].klass;
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
                (pSVar12,(Color *)&pMStack_13,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
                (pSVar12,(Vector2)pOVar11[2].monitor,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
                (pSVar12,*(bool *)&pOVar11[3].klass,(MethodInfo *)0x0);
      pSVar12 = (Shadow *)(this->fields).outline;
      if (pSVar12 != (Shadow *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pSVar12,*(bool *)((longlong)&pOVar11[3].klass + 1),(MethodInfo *)0x0)
        ;
        pMStack_13 = *(MonitorData **)((longlong)&pOVar11[3].klass + 4);
        pOStack_14 = *(Object__Class **)((longlong)&pOVar11[3].monitor + 4);
        UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
                  (pSVar12,(Color *)&pMStack_13,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
                  (pSVar12,*(Vector2 *)((longlong)&pOVar11[4].klass + 4),(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
                  (pSVar12,*(bool *)((longlong)&pOVar11[4].monitor + 4),(MethodInfo *)0x0);
        pGVar9 = (this->fields).gradient;
        if (pGVar9 != (GradientEffect *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pGVar9,*(bool *)((longlong)&pOVar11[4].monitor + 5),
                     (MethodInfo *)0x0);
          pMVar15 = pOVar11[5].monitor;
          *(Object__Class **)&(pGVar9->fields).top = pOVar11[5].klass;
          *(MonitorData **)&(pGVar9->fields).top.b = pMVar15;
          pMVar15 = pOVar11[6].monitor;
          *(Object__Class **)&(pGVar9->fields).bottom = pOVar11[6].klass;
          *(MonitorData **)&(pGVar9->fields).bottom.b = pMVar15;
          return;
        }
      }
    }
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  return;
}



/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>c__Iterator0::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0_MoveNext
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar2) {
  case 0:
    pPVar3 = (this->fields)._this;
    if ((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
       (this_00 = (pPVar3->fields).image, this_00 == (Image *)0x0)) break;
    this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)this_00,(MethodInfo *)0x0);
    value.x = 0.0;
    value.y = 0.0;
    func_?(&stack0xfffffff0,0,0,0);
    if (this_01 == (RectTransform *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_01,value,(MethodInfo *)0x0);
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 == (PurchasedAccessoryPreviewer *)0x0) break;
    (pPVar3->fields).currentTime = 0.0;
  case 1:
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0 *)
             (pPVar3->fields).currentTime;
      if (_UNK_? <= (float)this / (pPVar3->fields).imageDisplayTime) {
        if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
          PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                    (pPVar3,1.0,1.0,(MethodInfo *)0x0);
          this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0 *)0x0;
          pOVar4 = (Object *)func_?();
          (pPVar1->fields)._current = pOVar4;
          if ((pPVar1->fields)._disposing != 0) {
            return 1;
          }
          (pPVar1->fields)._PC = 2;
          return 1;
        }
      }
      else if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pPVar3->fields).currentTime = (float)this + fVar5;
        pPVar3 = (pPVar1->fields)._this;
        if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
          fVar5 = (pPVar3->fields).currentTime;
          PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                    (pPVar3,fVar5 / (pPVar3->fields).imageBounceEffectTime,
                     fVar5 / (pPVar3->fields).imageDisplayTime,(MethodInfo *)0x0);
          pOVar4 = (Object *)func_?();
          (pPVar1->fields)._current = pOVar4;
          if ((pPVar1->fields)._disposing != 0) {
            return 1;
          }
          (pPVar1->fields)._PC = 1;
          return 1;
        }
      }
    }
    break;
  case 2:
    pPVar3 = (this->fields)._this;
    if ((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
       (pAVar6 = (pPVar3->fields).previewData, pAVar6 == (AccessoryDataClient__Array *)0x0)) break;
    if ((int)(pAVar6->max_length - 1) <= (pPVar3->fields).currentStreamingAssetIndex) {
      if (pPVar3 == (PurchasedAccessoryPreviewer *)0x0) break;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pPVar3,(MethodInfo *)0x0);
      if (TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0->static_fields->
          __f__am_cache0 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)0x0,
                   MethodInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0->static_fields->
        __f__am_cache0 = (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0->static_fields
           ->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      goto code_?;
    }
    if (pPVar3 == (PurchasedAccessoryPreviewer *)0x0) break;
    PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
              (pPVar3,0.0,0.0,(MethodInfo *)0x0);
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 == (PurchasedAccessoryPreviewer *)0x0) break;
    piVar7 = &(pPVar3->fields).currentStreamingAssetIndex;
    *piVar7 = *piVar7 + 1;
    pPVar3 = (pPVar1->fields)._this;
    if (((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
        ((pPVar3->fields).previewData == (AccessoryDataClient__Array *)0x0)) ||
       (iVar8 = func_?(), iVar8 == 0)) break;
    if (*(int *)(iVar8 + 0x1c) == 0) {
code_?:
      pPVar3 = (pPVar1->fields)._this;
      if (((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
          ((pPVar3->fields).previewData == (AccessoryDataClient__Array *)0x0)) ||
         (iVar8 = func_?(), iVar8 == 0)) break;
      iVar2 = *(int32_t *)(iVar8 + 0x14);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      pRVar9 = Styles::Styles_GetAccessoryColorsFromPrice(iVar2,(MethodInfo *)0x0);
    }
    else {
      pPVar3 = (pPVar1->fields)._this;
      if (((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
          ((pPVar3->fields).previewData == (AccessoryDataClient__Array *)0x0)) ||
         (iVar8 = func_?(), iVar8 == 0)) break;
      if (*(int *)(iVar8 + 0x14) != 0) goto code_?;
      pPVar3 = (pPVar1->fields)._this;
      if (((pPVar3 == (PurchasedAccessoryPreviewer *)0x0) ||
          ((pPVar3->fields).previewData == (AccessoryDataClient__Array *)0x0)) ||
         (iVar8 = func_?(), iVar8 == 0)) break;
      iVar2 = *(int32_t *)(iVar8 + 0x1c);
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      pRVar9 = Styles::Styles_GetAccessoryColorsFromLevel(iVar2,(MethodInfo *)0x0);
    }
    if ((pRVar9 != (RarityStylesDef *)0x0) &&
       (pPVar3 = (pPVar1->fields)._this, pPVar3 != (PurchasedAccessoryPreviewer *)0x0)) {
      fVar5 = (pRVar9->fields).backgroundColor.g;
      fVar10 = (pRVar9->fields).backgroundColor.b;
      fVar11 = (pRVar9->fields).backgroundColor.a;
      (pPVar3->fields).targetColorBackground.r = (pRVar9->fields).backgroundColor.r;
      (pPVar3->fields).targetColorBackground.g = fVar5;
      (pPVar3->fields).targetColorBackground.b = fVar10;
      (pPVar3->fields).targetColorBackground.a = fVar11;
      pPVar3 = (pPVar1->fields)._this;
      if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
        fVar5 = (pRVar9->fields).glowColor.g;
        fVar10 = (pRVar9->fields).glowColor.b;
        fVar11 = (pRVar9->fields).glowColor.a;
        (pPVar3->fields).targetColorGlow.r = (pRVar9->fields).glowColor.r;
        (pPVar3->fields).targetColorGlow.g = fVar5;
        (pPVar3->fields).targetColorGlow.b = fVar10;
        (pPVar3->fields).targetColorGlow.a = fVar11;
        pPVar3 = (pPVar1->fields)._this;
        if (pPVar3 != (PurchasedAccessoryPreviewer *)0x0) {
          routine = PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
                              (pPVar3,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)pPVar3,routine,(MethodInfo *)0x0);
code_?:
          ppPStack12 = &this;
          this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0 *)0x0;
          pIStack13 = TypeInfo__System__Int32;
          method = (MethodInfo *)&UNK_?;
          pOVar4 = (Object *)func_?();
          (pPVar1->fields)._current = pOVar4;
          if ((pPVar1->fields)._disposing != 0) {
            return 1;
          }
          (pPVar1->fields)._PC = 3;
          return 1;
        }
      }
    }
    break;
  default:
    return 0;
  }
  uVar14 = func_?();
  piVar15 = (int *)uVar14;
  piRam_? = piVar15;
  *(char *)&pPVar1->klass =
       *(char *)&pPVar1->klass + (char)((ulonglong)uVar14 >> 8) +
       (&stack0xfffffffc < (undefined1 *)*extraout_ECX);
  in_stack_16 = in_stack_16 + (char)((ulonglong)uVar14 >> 0x28) + ((byte)uVar14 < 0x29);
  *piVar15 = *piVar15 - (int)((ulonglong)uVar14 >> 0x20);
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void Reset() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>c__Iterator0::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0_Reset
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>c__Iterator0::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_c_Iterator0___m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


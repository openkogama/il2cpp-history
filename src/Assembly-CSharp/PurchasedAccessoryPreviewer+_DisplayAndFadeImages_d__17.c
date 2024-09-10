
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_MoveNext
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Styles);
    func_?(&
                    MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PurchasedAccessoryPreviewer____c);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      this_01 = (this_00->fields).image;
      bVar2 = 0;
      if (this_01 != (Image *)0x0) {
        this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)this_01,(MethodInfo *)0x0);
        bVar2 = 0;
        if (this_02 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (this_02,(Vector2)0x0,(MethodInfo *)0x0);
          (this_00->fields).currentTime = 0.0;
          goto code_?;
        }
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
code_?:
      if (_UNK_? <= (this_00->fields).currentTime / (this_00->fields).imageDisplayTime) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar3 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar3;
        func_?(&(pPVar1->fields).__2__current,pOVar3);
        (pPVar1->fields).__1__state = 2;
        return 1;
      }
      method_00 = (MethodInfo *)(this_00->fields).currentTime;
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
      fVar4 = (float)this + (float)method_00;
      (this_00->fields).currentTime = fVar4;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,fVar4 / (this_00->fields).imageBounceEffectTime,
                 fVar4 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar3 = (Object *)func_?();
      (pPVar1->fields).__2__current = pOVar3;
      func_?(&(pPVar1->fields).__2__current);
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_00 == (PurchasedAccessoryPreviewer *)0x0) break;
    pAVar5 = (this_00->fields).previewData;
    bVar2 = 0;
    if (pAVar5 == (AccessoryDataClient__Array *)0x0) break;
    if ((int)(pAVar5->max_length - 1) <= (this_00->fields).currentStreamingAssetIndex) {
      root = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
      this = root;
      if ((TypeInfo__PurchasedAccessoryPreviewer____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PurchasedAccessoryPreviewer____c);
      }
      callbackFunction = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PurchasedAccessoryPreviewer____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0 = callbackFunction;
        func_?(&TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0,
                        callbackFunction);
        root = this;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      goto code_?;
    }
    PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
              (this_00,0.0,0.0,(MethodInfo *)0x0);
    iVar6 = (this_00->fields).currentStreamingAssetIndex;
    pAVar5 = (this_00->fields).previewData;
    uVar7 = iVar6 + 1;
    (this_00->fields).currentStreamingAssetIndex = uVar7;
    bVar2 = 0;
    if (pAVar5 == (AccessoryDataClient__Array *)0x0) break;
    bVar2 = uVar7 < pAVar5->max_length;
    if ((bool)bVar2) {
      bVar2 = 0;
      if (pAVar5->vector[iVar6 + 1] == (AccessoryDataClient *)0x0) break;
      if (((pAVar5->vector[iVar6 + 1]->fields)._.lvl == 0) ||
         ((((this_00->fields).previewData)->vector[iVar6 + 1]->fields)._.cost != 0)) {
        pAVar5 = (this_00->fields).previewData;
        bVar2 = 0;
        if (pAVar5 == (AccessoryDataClient__Array *)0x0) break;
        bVar2 = uVar7 < pAVar5->max_length;
        if (!(bool)bVar2) goto code_?;
        iVar8 = (pAVar5->vector[iVar6 + 1]->fields)._.cost;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar9 = Styles::Styles_GetAccessoryColorsFromPrice(iVar8,(MethodInfo *)0x0);
      }
      else {
        pAVar5 = (this_00->fields).previewData;
        bVar2 = 0;
        if (pAVar5 == (AccessoryDataClient__Array *)0x0) break;
        bVar2 = uVar7 < pAVar5->max_length;
        if (!(bool)bVar2) goto code_?;
        bVar2 = 0;
        if (pAVar5->vector[iVar6 + 1] == (AccessoryDataClient *)0x0) break;
        iVar8 = (pAVar5->vector[iVar6 + 1]->fields)._.lvl;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar9 = Styles::Styles_GetAccessoryColorsFromLevel(iVar8,(MethodInfo *)0x0);
      }
      bVar2 = 0;
      if (pRVar9 != (RarityStylesDef *)0x0) {
        fVar4 = (pRVar9->fields).backgroundColor.g;
        fVar10 = (pRVar9->fields).backgroundColor.b;
        fVar11 = (pRVar9->fields).backgroundColor.a;
        (this_00->fields).targetColorBackground.r = (pRVar9->fields).backgroundColor.r;
        (this_00->fields).targetColorBackground.g = fVar4;
        (this_00->fields).targetColorBackground.b = fVar10;
        (this_00->fields).targetColorBackground.a = fVar11;
        fVar4 = (pRVar9->fields).glowColor.g;
        fVar10 = (pRVar9->fields).glowColor.b;
        fVar11 = (pRVar9->fields).glowColor.a;
        (this_00->fields).targetColorGlow.r = (pRVar9->fields).glowColor.r;
        (this_00->fields).targetColorGlow.g = fVar4;
        (this_00->fields).targetColorGlow.b = fVar10;
        (this_00->fields).targetColorGlow.a = fVar11;
        routine = PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
                            (this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
        pOVar3 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar3;
        func_?();
        (pPVar1->fields).__1__state = 3;
        return 1;
      }
    }
    else {
code_?:
      func_?();
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  pbVar12 = (byte *)func_?();
  this_00->klass = (PurchasedAccessoryPreviewer__Class *)(int)extraout_ST0;
  bVar13 = *pbVar12;
  bVar14 = *pbVar12;
  *pbVar12 = bVar14 + extraout_DH + bVar2;
  bVar15 = extraout_DH;
  if (!CARRY1(bVar13,extraout_DH) && !CARRY1(bVar14 + extraout_DH,bVar2)) {
    bVar15 = (byte)((uint)*(undefined4 *)pbVar12 >> 8);
  }
  *extraout_ECX = *extraout_ECX + (bVar15 & (byte)((uint)*(undefined4 *)pbVar12 >> 8));
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_System_Collections_IEnumerator_Reset
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


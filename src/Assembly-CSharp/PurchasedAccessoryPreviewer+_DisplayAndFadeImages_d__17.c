
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
    if (((this_00 != (PurchasedAccessoryPreviewer *)0x0) &&
        (this_01 = (this_00->fields).image, this_01 != (Image *)0x0)) &&
       (this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)this_01,(MethodInfo *)0x0), this_02 != (RectTransform *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_02,(Vector2)0x0,(MethodInfo *)0x0);
      (this_00->fields).currentTime = 0.0;
code_?:
      if (_UNK_? <= (this_00->fields).currentTime / (this_00->fields).imageDisplayTime) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar2 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar2;
        func_?(&(pPVar1->fields).__2__current,pOVar2);
        (pPVar1->fields).__1__state = 2;
        return 1;
      }
      method_00 = (MethodInfo *)(this_00->fields).currentTime;
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
      fVar3 = (float)this + (float)method_00;
      (this_00->fields).currentTime = fVar3;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,fVar3 / (this_00->fields).imageBounceEffectTime,
                 fVar3 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar2 = (Object *)func_?();
      (pPVar1->fields).__2__current = pOVar2;
      func_?(&(pPVar1->fields).__2__current);
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if ((this_00 == (PurchasedAccessoryPreviewer *)0x0) ||
       (pAVar4 = (this_00->fields).previewData, pAVar4 == (AccessoryDataClient__Array *)0x0)) break;
    if ((int)(pAVar4->max_length - 1) <= (this_00->fields).currentStreamingAssetIndex) {
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
    iVar5 = (this_00->fields).currentStreamingAssetIndex;
    pAVar4 = (this_00->fields).previewData;
    uVar6 = iVar5 + 1;
    (this_00->fields).currentStreamingAssetIndex = uVar6;
    if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
    if (uVar6 < pAVar4->max_length) {
      if (pAVar4->vector[iVar5 + 1] == (AccessoryDataClient *)0x0) break;
      if (((pAVar4->vector[iVar5 + 1]->fields)._.lvl == 0) ||
         ((((this_00->fields).previewData)->vector[iVar5 + 1]->fields)._.cost != 0)) {
        pAVar4 = (this_00->fields).previewData;
        if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
        if (pAVar4->max_length <= uVar6) goto code_?;
        unaff_EBX = (pAVar4->vector[iVar5 + 1]->fields)._.cost;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar7 = Styles::Styles_GetAccessoryColorsFromPrice(unaff_EBX,(MethodInfo *)0x0);
      }
      else {
        pAVar4 = (this_00->fields).previewData;
        if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
        if (pAVar4->max_length <= uVar6) goto code_?;
        if (pAVar4->vector[iVar5 + 1] == (AccessoryDataClient *)0x0) break;
        unaff_EBX = (pAVar4->vector[iVar5 + 1]->fields)._.lvl;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar7 = Styles::Styles_GetAccessoryColorsFromLevel(unaff_EBX,(MethodInfo *)0x0);
      }
      if (pRVar7 != (RarityStylesDef *)0x0) {
        fVar3 = (pRVar7->fields).backgroundColor.g;
        fVar8 = (pRVar7->fields).backgroundColor.b;
        fVar9 = (pRVar7->fields).backgroundColor.a;
        (this_00->fields).targetColorBackground.r = (pRVar7->fields).backgroundColor.r;
        (this_00->fields).targetColorBackground.g = fVar3;
        (this_00->fields).targetColorBackground.b = fVar8;
        (this_00->fields).targetColorBackground.a = fVar9;
        fVar3 = (pRVar7->fields).glowColor.g;
        fVar8 = (pRVar7->fields).glowColor.b;
        fVar9 = (pRVar7->fields).glowColor.a;
        (this_00->fields).targetColorGlow.r = (pRVar7->fields).glowColor.r;
        (this_00->fields).targetColorGlow.g = fVar3;
        (this_00->fields).targetColorGlow.b = fVar8;
        (this_00->fields).targetColorGlow.a = fVar9;
        routine = PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
                            (this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
        pOVar2 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar2;
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
  uVar10 = func_?();
  puVar11 = (ushort *)(unaff_EBX + 0x10);
  sVar12 = (uVar10 & 3) - (*puVar11 & 3);
  *puVar11 = *puVar11 + (ushort)(0 < sVar12) * sVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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


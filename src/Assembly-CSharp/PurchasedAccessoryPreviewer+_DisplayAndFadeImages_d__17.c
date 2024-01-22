
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
    cVar2 = '\0';
    uVar3 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      this_01 = (this_00->fields).image;
      cVar2 = '\0';
      uVar3 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
      if (this_01 != (Image *)0x0) {
        this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)this_01,(MethodInfo *)0x0);
        cVar2 = '\0';
        uVar3 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
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
    cVar2 = '\0';
    uVar3 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
code_?:
      if (_UNK_? <= (this_00->fields).currentTime / (this_00->fields).imageDisplayTime) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar4 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar4;
        func_?(&(pPVar1->fields).__2__current,pOVar4);
        (pPVar1->fields).__1__state = 2;
        return 1;
      }
      method_00 = (MethodInfo *)(this_00->fields).currentTime;
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
      fVar5 = (float)this + (float)method_00;
      (this_00->fields).currentTime = fVar5;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,fVar5 / (this_00->fields).imageBounceEffectTime,
                 fVar5 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar4 = (Object *)func_?();
      (pPVar1->fields).__2__current = pOVar4;
      func_?(&(pPVar1->fields).__2__current);
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    cVar2 = '\0';
    uVar3 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      pAVar6 = (this_00->fields).previewData;
      cVar2 = '\0';
      uVar3 = (POPCOUNT((uint)pAVar6 & 0xff) & 1U) == 0;
      if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
        if ((int)(pAVar6->max_length - 1) <= (this_00->fields).currentStreamingAssetIndex) {
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
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0 = callbackFunction;
            func_?(&TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0,
                            callbackFunction);
            root = this;
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    ((GameObject *)root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          goto code_?;
        }
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,0.0,0.0,(MethodInfo *)0x0);
        iVar7 = (this_00->fields).currentStreamingAssetIndex;
        pAVar6 = (this_00->fields).previewData;
        uVar8 = iVar7 + 1;
        (this_00->fields).currentStreamingAssetIndex = uVar8;
        cVar2 = '\0';
        uVar3 = (POPCOUNT((uint)pAVar6 & 0xff) & 1U) == 0;
        if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
          cVar2 = uVar8 < pAVar6->max_length;
          uVar3 = (POPCOUNT(uVar8 - pAVar6->max_length & 0xff) & 1U) == 0;
          if ((bool)cVar2) {
            pAVar9 = pAVar6->vector[iVar7 + 1];
            cVar2 = '\0';
            uVar3 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
            if (pAVar9 != (AccessoryDataClient *)0x0) {
              if (((pAVar9->fields)._.lvl == 0) ||
                 ((((this_00->fields).previewData)->vector[iVar7 + 1]->fields)._.cost != 0)) {
                pAVar6 = (this_00->fields).previewData;
                cVar2 = '\0';
                uVar3 = (POPCOUNT((uint)pAVar6 & 0xff) & 1U) == 0;
                if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
                  cVar2 = uVar8 < pAVar6->max_length;
                  uVar3 = (POPCOUNT(uVar8 - pAVar6->max_length & 0xff) & 1U) == 0;
                  if (!(bool)cVar2) goto code_?;
                  iVar10 = (pAVar6->vector[iVar7 + 1]->fields)._.cost;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pRVar11 = Styles::Styles_GetAccessoryColorsFromPrice(iVar10,(MethodInfo *)0x0);
code_?:
                  cVar2 = '\0';
                  uVar3 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
                  if (pRVar11 != (RarityStylesDef *)0x0) {
                    fVar5 = (pRVar11->fields).backgroundColor.g;
                    fVar12 = (pRVar11->fields).backgroundColor.b;
                    fVar13 = (pRVar11->fields).backgroundColor.a;
                    (this_00->fields).targetColorBackground.r = (pRVar11->fields).backgroundColor.r;
                    (this_00->fields).targetColorBackground.g = fVar5;
                    (this_00->fields).targetColorBackground.b = fVar12;
                    (this_00->fields).targetColorBackground.a = fVar13;
                    fVar5 = (pRVar11->fields).glowColor.g;
                    fVar12 = (pRVar11->fields).glowColor.b;
                    fVar13 = (pRVar11->fields).glowColor.a;
                    (this_00->fields).targetColorGlow.r = (pRVar11->fields).glowColor.r;
                    (this_00->fields).targetColorGlow.g = fVar5;
                    (this_00->fields).targetColorGlow.b = fVar12;
                    (this_00->fields).targetColorGlow.a = fVar13;
                    routine = PurchasedAccessoryPreviewer::
                              PurchasedAccessoryPreviewer_DisplayAndFadeImages
                                        (this_00,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else {
                pAVar6 = (this_00->fields).previewData;
                cVar2 = '\0';
                uVar3 = (POPCOUNT((uint)pAVar6 & 0xff) & 1U) == 0;
                if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
                  cVar2 = uVar8 < pAVar6->max_length;
                  uVar3 = (POPCOUNT(uVar8 - pAVar6->max_length & 0xff) & 1U) == 0;
                  if (!(bool)cVar2) goto code_?;
                  pAVar9 = pAVar6->vector[iVar7 + 1];
                  cVar2 = '\0';
                  uVar3 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
                  if (pAVar9 != (AccessoryDataClient *)0x0) {
                    iVar10 = (pAVar9->fields)._.lvl;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pRVar11 = Styles::Styles_GetAccessoryColorsFromLevel(iVar10,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
code_?:
            func_?();
          }
        }
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar7 = func_?();
  if ((bool)uVar3) {
    bVar14 = (char)(iVar7 + 1) + extraout_DL + cVar2;
    puVar15 = (uint *)(CONCAT31((int3)((uint)(iVar7 + 1) >> 8),bVar14) + 0x10);
    *puVar15 = *puVar15 << 3 | *puVar15 >> 0x1d;
    return bVar14;
  }
code_?:
  this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
  pOVar4 = (Object *)func_?();
  (pPVar1->fields).__2__current = pOVar4;
  func_?();
  (pPVar1->fields).__1__state = 3;
  return 1;
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


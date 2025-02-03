
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_MoveNext
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  uVar1 = (undefined1)((uint)in_stack_2 >> 0x18);
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
  pPVar3 = this;
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    uVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      this_01 = (this_00->fields).image;
      uVar4 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
      if (this_01 != (Image *)0x0) {
        this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)this_01,(MethodInfo *)0x0);
        uVar1 = 0;
        uVar4 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
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
    uVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
code_?:
      if (_UNK_? <= (this_00->fields).currentTime / (this_00->fields).imageDisplayTime) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar5 = (Object *)func_?();
        (pPVar3->fields).__2__current = pOVar5;
        func_?(&(pPVar3->fields).__2__current,pOVar5);
        (pPVar3->fields).__1__state = 2;
        return 1;
      }
      method_00 = (MethodInfo *)(this_00->fields).currentTime;
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
      fVar6 = (float)this + (float)method_00;
      (this_00->fields).currentTime = fVar6;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,fVar6 / (this_00->fields).imageBounceEffectTime,
                 fVar6 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?();
      (pPVar3->fields).__2__current = pOVar5;
      func_?(&(pPVar3->fields).__2__current);
      (pPVar3->fields).__1__state = 1;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    uVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      pAVar7 = (this_00->fields).previewData;
      uVar4 = (POPCOUNT((uint)pAVar7 & 0xff) & 1U) == 0;
      if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
        if ((int)(pAVar7->max_length - 1) <= (this_00->fields).currentStreamingAssetIndex) {
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
        iVar8 = (this_00->fields).currentStreamingAssetIndex;
        pAVar7 = (this_00->fields).previewData;
        uVar9 = iVar8 + 1;
        (this_00->fields).currentStreamingAssetIndex = uVar9;
        uVar4 = (POPCOUNT((uint)pAVar7 & 0xff) & 1U) == 0;
        if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
          uVar4 = (POPCOUNT(uVar9 - pAVar7->max_length & 0xff) & 1U) == 0;
          if (uVar9 < pAVar7->max_length) {
            pAVar10 = pAVar7->vector[iVar8 + 1];
            uVar4 = (POPCOUNT((uint)pAVar10 & 0xff) & 1U) == 0;
            if (pAVar10 != (AccessoryDataClient *)0x0) {
              if (((pAVar10->fields)._.lvl == 0) ||
                 ((((this_00->fields).previewData)->vector[iVar8 + 1]->fields)._.cost != 0)) {
                pAVar7 = (this_00->fields).previewData;
                uVar4 = (POPCOUNT((uint)pAVar7 & 0xff) & 1U) == 0;
                if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
                  uVar4 = (POPCOUNT(uVar9 - pAVar7->max_length & 0xff) & 1U) == 0;
                  if (pAVar7->max_length <= uVar9) goto code_?;
                  unaff_EBX = (pAVar7->vector[iVar8 + 1]->fields)._.cost;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pRVar11 = Styles::Styles_GetAccessoryColorsFromPrice(unaff_EBX,(MethodInfo *)0x0);
code_?:
                  uVar4 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
                  if (pRVar11 != (RarityStylesDef *)0x0) {
                    fVar6 = (pRVar11->fields).backgroundColor.g;
                    fVar12 = (pRVar11->fields).backgroundColor.b;
                    fVar13 = (pRVar11->fields).backgroundColor.a;
                    (this_00->fields).targetColorBackground.r = (pRVar11->fields).backgroundColor.r;
                    (this_00->fields).targetColorBackground.g = fVar6;
                    (this_00->fields).targetColorBackground.b = fVar12;
                    (this_00->fields).targetColorBackground.a = fVar13;
                    fVar6 = (pRVar11->fields).glowColor.g;
                    fVar12 = (pRVar11->fields).glowColor.b;
                    fVar13 = (pRVar11->fields).glowColor.a;
                    (this_00->fields).targetColorGlow.r = (pRVar11->fields).glowColor.r;
                    (this_00->fields).targetColorGlow.g = fVar6;
                    (this_00->fields).targetColorGlow.b = fVar12;
                    (this_00->fields).targetColorGlow.a = fVar13;
                    routine = PurchasedAccessoryPreviewer::
                              PurchasedAccessoryPreviewer_DisplayAndFadeImages
                                        (this_00,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
                    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
                    pOVar5 = (Object *)func_?();
                    (pPVar3->fields).__2__current = pOVar5;
                    func_?();
                    (pPVar3->fields).__1__state = 3;
                    return 1;
                  }
                }
              }
              else {
                pAVar7 = (this_00->fields).previewData;
                uVar4 = (POPCOUNT((uint)pAVar7 & 0xff) & 1U) == 0;
                if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
                  uVar4 = (POPCOUNT(uVar9 - pAVar7->max_length & 0xff) & 1U) == 0;
                  if (pAVar7->max_length <= uVar9) goto code_?;
                  pAVar10 = pAVar7->vector[iVar8 + 1];
                  uVar4 = (POPCOUNT((uint)pAVar10 & 0xff) & 1U) == 0;
                  if (pAVar10 != (AccessoryDataClient *)0x0) {
                    unaff_EBX = (pAVar10->fields)._.lvl;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pRVar11 = Styles::Styles_GetAccessoryColorsFromLevel
                                        (unaff_EBX,(MethodInfo *)0x0);
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
  func_?();
  if ((bool)uVar4) {
    pcVar14 = (code *)swi(3);
    bVar15 = (*pcVar14)();
    return bVar15;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar8 = CONCAT31((int3)in_stack_16,uVar1);
  puVar17 = *(undefined1 **)(iVar8 + 0x10);
  switch(*(undefined4 *)(iVar8 + 8)) {
  case 0:
  case 1:
    *(undefined4 *)(iVar8 + 8) = 0xffffffff;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    if (puVar17 == (undefined1 *)0x0) goto code_?;
    if (fVar6 - *(float *)(puVar17 + 0x18) < *(float *)(puVar17 + 0x14)) {
      uVar18 = func_?();
      *(undefined4 *)(iVar8 + 0xc) = uVar18;
      func_?();
      *(undefined4 *)(iVar8 + 8) = 1;
      return 1;
    }
    fVar6 = 0.0;
    break;
  case 2:
    *(undefined4 *)(iVar8 + 8) = 0xffffffff;
    uVar1 = (undefined1)*(undefined4 *)(iVar8 + 0x14);
    uVar19 = (undefined3)((uint)*(undefined4 *)(iVar8 + 0x14) >> 8);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (puVar17 == (undefined1 *)0x0) goto code_?;
    fVar6 = fVar6 / *(float *)(puVar17 + 0x10) + (float)CONCAT31(uVar19,uVar1);
    break;
  case 3:
    *(undefined4 *)(iVar8 + 8) = 0xffffffff;
  default:
    return 0;
  }
  *(float *)(iVar8 + 0x14) = fVar6;
  if (_UNK_? <= fVar6) {
code_?:
    uVar18 = func_?();
    *(undefined4 *)(iVar8 + 0xc) = uVar18;
    func_?();
    *(undefined4 *)(iVar8 + 8) = 3;
    return 1;
  }
  if (*(int *)(puVar17 + 0x28) != 0) {
    fVar6 = *(float *)(iVar8 + 0x14);
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    if (*(ProgressBarAndroid **)(puVar17 + 0x24) != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (*(ProgressBarAndroid **)(puVar17 + 0x24),
                 (*(float *)(*(int *)(puVar17 + 0x28) + 0x14) - *(float *)(puVar17 + 0x1c)) * fVar6 +
                 *(float *)(puVar17 + 0x1c),(MethodInfo *)0x0);
      if ((*(int *)(puVar17 + 0x24) != 0) && (*(int *)(puVar17 + 0x28) != 0)) {
        if (*(float *)(*(int *)(puVar17 + 0x28) + 0x14) < *(float *)(*(int *)(puVar17 + 0x24) + 0x14))
        {
          uVar18 = func_?();
          *(undefined4 *)(iVar8 + 0xc) = uVar18;
          func_?();
          *(undefined4 *)(iVar8 + 8) = 2;
          return 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar20 = 0;
  uVar21 = func_?();
  uVar1 = in((short)((uint6)uVar21 >> 0x20));
  *puVar17 = uVar1;
  pbVar22 = &stack0x00000037 + (int)uVar21 * 2;
  bVar23 = *pbVar22;
  bVar24 = *pbVar22;
  *pbVar22 = bVar24 + extraout_CH + bVar20;
  bVar25 = (byte)((uint6)uVar21 >> 0x20);
  bVar26 = (byte)((uint6)uVar21 >> 0x28);
  *(char *)(unaff_EBX + 2) =
       *(char *)(unaff_EBX + 2) + (char)uVar21 +
       (CARRY1(bVar26,bVar25) ||
       CARRY1(bVar26 + bVar25,CARRY1(bVar23,extraout_CH) || CARRY1(bVar24 + extraout_CH,bVar20)));
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
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



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
      if ((this_00->fields).currentTime / (this_00->fields).imageDisplayTime < _UNK_?) {
        method_00 = (MethodInfo *)(this_00->fields).currentTime;
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
        fVar3 = (float)this + (float)method_00;
        (this_00->fields).currentTime = fVar3;
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,fVar3 / (this_00->fields).imageBounceEffectTime,
                   fVar3 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
        pOVar4 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar4;
        func_?(&(pPVar1->fields).__2__current);
        (pPVar1->fields).__1__state = 1;
        return 1;
      }
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,1.0,1.0,(MethodInfo *)0x0);
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
      pOVar4 = (Object *)func_?();
      (pPVar1->fields).__2__current = pOVar4;
      func_?(&(pPVar1->fields).__2__current,pOVar4);
      (pPVar1->fields).__1__state = 2;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
      pAVar5 = (this_00->fields).previewData;
      bVar2 = 0;
      if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
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
        iVar6 = (this_00->fields).currentStreamingAssetIndex;
        pAVar5 = (this_00->fields).previewData;
        uVar7 = iVar6 + 1;
        (this_00->fields).currentStreamingAssetIndex = uVar7;
        bVar2 = 0;
        if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
          bVar2 = uVar7 < pAVar5->max_length;
          if ((bool)bVar2) {
            bVar2 = 0;
            if (pAVar5->vector[iVar6 + 1] != (AccessoryDataClient *)0x0) {
              if (((pAVar5->vector[iVar6 + 1]->fields)._.lvl == 0) ||
                 ((((this_00->fields).previewData)->vector[iVar6 + 1]->fields)._.cost != 0)) {
                pAVar5 = (this_00->fields).previewData;
                bVar2 = 0;
                if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
                  bVar2 = uVar7 < pAVar5->max_length;
                  if (!(bool)bVar2) goto code_?;
                  unaff_EBX = (pAVar5->vector[iVar6 + 1]->fields)._.cost;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pRVar8 = Styles::Styles_GetAccessoryColorsFromPrice(unaff_EBX,(MethodInfo *)0x0);
code_?:
                  bVar2 = 0;
                  if (pRVar8 != (RarityStylesDef *)0x0) {
                    fVar3 = (pRVar8->fields).backgroundColor.g;
                    fVar9 = (pRVar8->fields).backgroundColor.b;
                    fVar10 = (pRVar8->fields).backgroundColor.a;
                    (this_00->fields).targetColorBackground.r = (pRVar8->fields).backgroundColor.r;
                    (this_00->fields).targetColorBackground.g = fVar3;
                    (this_00->fields).targetColorBackground.b = fVar9;
                    (this_00->fields).targetColorBackground.a = fVar10;
                    fVar3 = (pRVar8->fields).glowColor.g;
                    fVar9 = (pRVar8->fields).glowColor.b;
                    fVar10 = (pRVar8->fields).glowColor.a;
                    (this_00->fields).targetColorGlow.r = (pRVar8->fields).glowColor.r;
                    (this_00->fields).targetColorGlow.g = fVar3;
                    (this_00->fields).targetColorGlow.b = fVar9;
                    (this_00->fields).targetColorGlow.a = fVar10;
                    routine = PurchasedAccessoryPreviewer::
                              PurchasedAccessoryPreviewer_DisplayAndFadeImages
                                        (this_00,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
                    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
                    pOVar4 = (Object *)func_?();
                    (pPVar1->fields).__2__current = pOVar4;
                    func_?();
                    (pPVar1->fields).__1__state = 3;
                    return 1;
                  }
                }
              }
              else {
                pAVar5 = (this_00->fields).previewData;
                bVar2 = 0;
                if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
                  bVar2 = uVar7 < pAVar5->max_length;
                  if (!(bool)bVar2) goto code_?;
                  bVar2 = 0;
                  if (pAVar5->vector[iVar6 + 1] != (AccessoryDataClient *)0x0) {
                    unaff_EBX = (pAVar5->vector[iVar6 + 1]->fields)._.lvl;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pRVar8 = Styles::Styles_GetAccessoryColorsFromLevel
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
  puVar11 = &stack0xfffffff4;
  bVar12 = func_?();
  if (extraout_ECX == 0) {
    bVar13 = &stack0xfffffff4 < (undefined1 *)0x10;
  }
  else {
    bVar14 = (byte)((ushort)extraout_DX >> 8);
    bVar13 = CARRY1(bVar12,bVar14) || CARRY1(bVar12 + bVar14,bVar2);
    puVar11 = &stack0xfffffffc;
    if (extraout_ECX != 0) {
      uVar15 = in(0x42);
      out(0x42,uVar15);
      pcVar16 = (code *)swi(3);
      bVar17 = (*pcVar16)();
      return bVar17;
    }
  }
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + (char)extraout_DX + bVar13;
  iVar6 = *(int *)(puVar11 + 8);
  iVar18 = *(int *)(iVar6 + 0x10);
  if (*(int *)(iVar6 + 8) == 0) {
    *(undefined4 *)(iVar6 + 8) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    if ((iVar18 != 0) && (*(AnimationCurve **)(iVar18 + 0x28) != (AnimationCurve *)0x0)) {
      pKVar19 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                          (*(AnimationCurve **)(iVar18 + 0x28),(MethodInfo *)0x0);
      if ((*(AnimationCurve **)(iVar18 + 0x28) != (AnimationCurve *)0x0) &&
         (iVar20 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                   AnimationCurve_get_length(*(AnimationCurve **)(iVar18 + 0x28),(MethodInfo *)0x0),
         pKVar19 != (Keyframe__Array *)0x0)) {
        if (pKVar19->max_length <= iVar20 - 1U) goto code_?;
        fVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
                 Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                           ((KeyValuePair_2_System_Single_System_Single_ *)
                            (pKVar19->vector + iVar20 + -1),(MethodInfo *)0x0);
        *(float *)(iVar6 + 0x18) = fVar3;
        if (*(int **)(iVar18 + 0x10) != (int *)0x0) {
          iVar21 = **(int **)(iVar18 + 0x10);
          this = *(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 **)(iVar21 + 0x174);
          puVar22 = (undefined4 *)(**(code **)(iVar21 + 0x170))();
          fVar3 = *(float *)(iVar6 + 0x18);
          uVar23 = puVar22[1];
          uVar24 = puVar22[2];
          uVar25 = puVar22[3];
          *(undefined4 *)(iVar6 + 0x1c) = *puVar22;
          *(undefined4 *)(iVar6 + 0x20) = uVar23;
          *(undefined4 *)(iVar6 + 0x24) = uVar24;
          *(undefined4 *)(iVar6 + 0x28) = uVar25;
          fVar9 = *(float *)(iVar6 + 0x14);
          goto code_?;
        }
      }
    }
  }
  else {
    if (*(int *)(iVar6 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(iVar6 + 8) = 0xffffffff;
    fVar9 = *(float *)(iVar6 + 0x14);
    fVar3 = *(float *)(iVar6 + 0x18);
    if (iVar18 != 0) {
code_?:
      if (fVar3 <= fVar9) {
        piVar26 = *(int **)(iVar18 + 0x24);
        if (piVar26 != (int *)0x0) {
          this = *(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 **)(*piVar26 + 0x17c);
          (**(code **)(*piVar26 + 0x178))(piVar26);
          return 0;
        }
      }
      else if (*(AnimationCurve **)(iVar18 + 0x28) != (AnimationCurve *)0x0) {
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (*(AnimationCurve **)(iVar18 + 0x28),*(float *)(iVar6 + 0x14),
                            (MethodInfo *)0x0);
        piVar26 = *(int **)(iVar18 + 0x24);
        *(float *)(iVar6 + 0x28) = fVar3;
        if (piVar26 != (int *)0x0) {
          iVar18 = *piVar26;
          this = *(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 **)(iVar6 + 0x20);
          method = *(MethodInfo **)(iVar6 + 0x24);
          iStack27 = *(int32_t *)(iVar6 + 0x28);
          pOStack28 = *(Object **)(iVar18 + 0x17c);
          (**(code **)(iVar18 + 0x178))();
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(iVar6 + 0x14);
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar3 = *(float *)(puVar11 + 8);
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(float *)(iVar6 + 0x14) = fVar9 + fVar3;
          func_?();
          *(undefined4 *)(iVar6 + 8) = 1;
          return 1;
        }
      }
    }
  }
  this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&UNK_?;
  func_?();
code_?:
  func_?();
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


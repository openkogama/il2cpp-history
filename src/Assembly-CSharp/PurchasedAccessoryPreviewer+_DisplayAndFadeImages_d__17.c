
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
  this_03 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_03 != (PurchasedAccessoryPreviewer *)0x0) {
      pIVar3 = (this_03->fields).image;
      bVar2 = 0;
      if (pIVar3 != (Image *)0x0) {
        this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar3,(MethodInfo *)0x0);
        bVar2 = 0;
        if (this_01 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (this_01,(Vector2)0x0,(MethodInfo *)0x0);
          (this_03->fields).currentTime = 0.0;
          goto code_?;
        }
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_03 != (PurchasedAccessoryPreviewer *)0x0) {
code_?:
      fVar4 = 0.0;
      if ((float)_UNK_? <= (this_03->fields).currentTime / (this_03->fields).imageDisplayTime
         ) {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_03,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar5 = (Object *)func_?();
        ppOVar6 = &(pPVar1->fields).__2__current;
        *ppOVar6 = pOVar5;
        func_?(ppOVar6,pOVar5);
        (pPVar1->fields).__1__state = 2;
        return 1;
      }
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar4 = (float)this + fVar4;
      (this_03->fields).currentTime = fVar4;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_03,fVar4 / (this_03->fields).imageBounceEffectTime,
                 fVar4 / (this_03->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?();
      ppOVar6 = &(pPVar1->fields).__2__current;
      *ppOVar6 = pOVar5;
      func_?(ppOVar6);
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    bVar2 = 0;
    if (this_03 != (PurchasedAccessoryPreviewer *)0x0) {
      pAVar7 = (this_03->fields).previewData;
      bVar2 = 0;
      if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
        if ((int)(pAVar7->max_length - 1) <= (this_03->fields).currentStreamingAssetIndex) {
          root = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_03,(MethodInfo *)0x0);
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
                  (this_03,0.0,0.0,(MethodInfo *)0x0);
        piVar8 = &(this_03->fields).currentStreamingAssetIndex;
        *piVar8 = *piVar8 + 1;
        pAVar7 = (this_03->fields).previewData;
        uVar9 = (this_03->fields).currentStreamingAssetIndex;
        bVar2 = 0;
        if (pAVar7 != (AccessoryDataClient__Array *)0x0) {
          bVar2 = uVar9 < pAVar7->max_length;
          if (!(bool)bVar2) goto code_?;
          pAVar10 = pAVar7->vector[uVar9];
          bVar2 = 0;
          if (pAVar10 != (AccessoryDataClient *)0x0) {
            if (((pAVar10->fields)._.lvl == 0) || ((pAVar10->fields)._.cost != 0)) {
              bVar2 = uVar9 < pAVar7->max_length;
              if (!(bool)bVar2) goto code_?;
              bVar2 = 0;
              if (pAVar10 != (AccessoryDataClient *)0x0) {
                price = (pAVar10->fields)._.cost;
                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Styles);
                }
                pRVar11 = Styles::Styles_GetAccessoryColorsFromPrice(price,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              bVar2 = uVar9 < pAVar7->max_length;
              if ((bool)bVar2) {
                bVar2 = 0;
                if (pAVar10 != (AccessoryDataClient *)0x0) {
                  price = (pAVar10->fields)._.lvl;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pRVar11 = Styles::Styles_GetAccessoryColorsFromLevel(price,(MethodInfo *)0x0);
code_?:
                  unaff_BL = (char)price;
                  bVar2 = 0;
                  if (pRVar11 != (RarityStylesDef *)0x0) {
                    fVar4 = (pRVar11->fields).backgroundColor.g;
                    fVar12 = (pRVar11->fields).backgroundColor.b;
                    fVar13 = (pRVar11->fields).backgroundColor.a;
                    (this_03->fields).targetColorBackground.r = (pRVar11->fields).backgroundColor.r;
                    (this_03->fields).targetColorBackground.g = fVar4;
                    (this_03->fields).targetColorBackground.b = fVar12;
                    (this_03->fields).targetColorBackground.a = fVar13;
                    fVar4 = (pRVar11->fields).glowColor.g;
                    fVar12 = (pRVar11->fields).glowColor.b;
                    fVar13 = (pRVar11->fields).glowColor.a;
                    (this_03->fields).targetColorGlow.r = (pRVar11->fields).glowColor.r;
                    (this_03->fields).targetColorGlow.g = fVar4;
                    (this_03->fields).targetColorGlow.b = fVar12;
                    (this_03->fields).targetColorGlow.a = fVar13;
                    routine = PurchasedAccessoryPreviewer::
                              PurchasedAccessoryPreviewer_DisplayAndFadeImages
                                        (this_03,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this_03,routine,(MethodInfo *)0x0);
code_?:
                    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
                    pOVar5 = (Object *)func_?();
                    (pPVar1->fields).__2__current = pOVar5;
                    func_?();
                    (pPVar1->fields).__1__state = 3;
                    return 1;
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
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  func_?();
  piVar14 = (int *)func_?();
  pbVar15 = (byte *)((int)&pPVar1[0x64d9cf2].klass + 1);
  bVar16 = *pbVar15;
  bVar17 = *pbVar15;
  *pbVar15 = bVar17 + extraout_CL + bVar2;
  *piVar14 = (int)piVar14 +
             (uint)(CARRY1(bVar16,extraout_CL) || CARRY1(bVar17 + extraout_CL,bVar2)) + *piVar14;
  if (*piVar14 == 0) {
    func_?(&TypeInfo__System__Int32);
    uRam_? = 1;
  }
  pPVar1 = this;
  pPVar18 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 1:
    (this->fields).__1__state = -1;
    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    if (pPVar18 == (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    if ((float)this - (float)(pPVar18->fields).background < (float)(pPVar18->fields).imageLoader) {
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this,this_03);
      ppOVar6 = &(pPVar1->fields).__2__current;
      *ppOVar6 = pOVar5;
      func_?(ppOVar6,pOVar5);
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
    pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0;
    break;
  case 2:
    pPVar19 = this[1].klass;
    (this->fields).__1__state = -1;
    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pPVar18 == (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)
              ((float)this / (float)(pPVar18->fields).image + (float)pPVar19);
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  pPVar1[1].klass = pPVar19;
  if ((float)_UNK_? <= (float)pPVar19) {
code_?:
    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
    pOVar5 = (Object *)func_?();
    ppOVar6 = &(pPVar1->fields).__2__current;
    *ppOVar6 = pOVar5;
    func_?(ppOVar6,pOVar5);
    (pPVar1->fields).__1__state = 3;
    return 1;
  }
  pAVar20 = (pPVar18->fields).bounceEffect;
  this_00 = (ProgressBarAndroid *)(pPVar18->fields).imageBounceEffectTime;
  if (pAVar20 != (AnimationCurve *)0x0) {
    pIVar3 = (pPVar18->fields).backgroundGlow;
    if ((float)pPVar19 < 0.0) {
      pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0;
    }
    else if ((float)_UNK_? < (float)pPVar19) {
      pPVar19 = _UNK_?;
    }
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,((float)pAVar20[1].fields.m_Ptr - (float)pIVar3) * (float)pPVar19 +
                         (float)pIVar3,(MethodInfo *)0x0);
      fVar4 = (pPVar18->fields).imageBounceEffectTime;
      if ((fVar4 != 0.0) &&
         (pAVar20 = (pPVar18->fields).bounceEffect, pAVar20 != (AnimationCurve *)0x0)) {
        if ((float)pAVar20[1].fields.m_Ptr < *(float *)((int)fVar4 + 0x14)) {
          this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
          pOVar5 = (Object *)func_?();
          ppOVar6 = &(pPVar1->fields).__2__current;
          *ppOVar6 = pOVar5;
          func_?(ppOVar6,pOVar5);
          (pPVar1->fields).__1__state = 2;
          return 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar17 = 0;
  bVar2 = func_?();
  bVar21 = bVar2 < 0xec || (byte)(bVar2 + 0x14) < bVar17;
  bVar17 = (bVar2 + 0x14) - bVar17;
  pbVar15 = (byte *)((int)&stack0x00000000 * 9 + -0x24);
  bVar2 = *pbVar15;
  bVar16 = *pbVar15 + (unaff_BL - 1U);
  *pbVar15 = bVar16 + bVar21;
  in(extraout_DX + 2);
  ppMVar22 = &pPVar1[5].monitor;
  *(char *)ppMVar22 =
       *(char *)ppMVar22 + (char)extraout_DX + '\x03' +
       (CARRY1(in_stack_23,bVar17) ||
       CARRY1(in_stack_23 + bVar17,CARRY1(bVar2,unaff_BL - 1U) || CARRY1(bVar16,bVar21)));
  if (*(char *)ppMVar22 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_?();
  this_02 = (NotSupportedException *)func_?();
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_02,(MethodInfo *)0x0);
  this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)func_?();
  func_?();
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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


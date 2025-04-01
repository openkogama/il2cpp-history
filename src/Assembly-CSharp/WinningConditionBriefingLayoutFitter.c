
/* Void AdjustElement(WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef) */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_AdjustElement
               (WinningConditionBriefingLayoutFitter *this,
               WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *layoutElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__HorizontalLayoutGroup);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  if (((layoutElement != (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)0x0) &&
      (pLVar1 = (layoutElement->fields).group, pLVar1 != (LayoutElement *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pLVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pTVar3 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar2;
    }
    index = TypeInfo__UnityEngine__RectTransform;
    if (pTVar3 == (Transform *)0x0) {
code_?:
      func_?(pTVar2,index);
    }
    else {
      pTVar3 = (Transform *)0x0;
      if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar2;
      }
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                         ((RectTransform *)pTVar3,(MethodInfo *)0x0);
      pLVar5 = (layoutElement->fields).layoutGroup;
      if (pLVar5 != (LayoutGroup *)0x0) {
        pLVar6 = pLVar5->klass;
        bVar7 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
        if ((bVar7 <= (pLVar6->_1).naturalAligment) &&
           (ppIVar8 = (pLVar6->_1).typeHierarchy,
           (HorizontalLayoutGroup__Class *)ppIVar8[bVar7 - 1] ==
           TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
          pLVar5 = (LayoutGroup *)0x0;
          if ((HorizontalLayoutGroup__Class *)ppIVar8[bVar7 - 1] ==
              TypeInfo__UnityEngine__UI__HorizontalLayoutGroup) {
            pLVar5 = (layoutElement->fields).layoutGroup;
          }
          (*(code *)(pLVar1->klass->vtable).set_minHeight.method)
                    (pLVar1,(VVar4.x - (float)pLVar5[1].monitor) / (this->fields).groupAspectRatio
                    );
          fVar9 = (this->fields).defaultSpacing;
          pHVar10 = (HorizontalOrVerticalLayoutGroup *)(layoutElement->fields).layoutGroup;
          fVar11 = (this->fields).referenceRes.y;
          pHVar12 = pHVar10;
          iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                            ((MethodInfo *)0x0);
          if (pHVar10 != (HorizontalOrVerticalLayoutGroup *)0x0) {
            bVar7 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
            if ((bVar7 <= (pHVar10->klass->_1).naturalAligment) &&
               (ppIVar8 = (pHVar10->klass->_1).typeHierarchy,
               (HorizontalLayoutGroup__Class *)ppIVar8[bVar7 - 1] ==
               TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
              pHVar10 = (HorizontalOrVerticalLayoutGroup *)0x0;
              if ((HorizontalLayoutGroup__Class *)ppIVar8[bVar7 - 1] ==
                  TypeInfo__UnityEngine__UI__HorizontalLayoutGroup) {
                pHVar10 = pHVar12;
              }
              UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
              HorizontalOrVerticalLayoutGroup_set_spacing
                        (pHVar10,(fVar9 / fVar11) * (float)iVar13,(MethodInfo *)0x0);
              index = (RectTransform__Class *)0x0;
              while (pLVar14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (layoutElement->fields).elements,
                    pLVar14 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0) {
                if ((pLVar14->fields)._size <= (int)index) {
                  return;
                }
                RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar14,(int32_t)index,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                                   );
                pLVar14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (layoutElement->fields).elements;
                if (((pLVar14 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) ||
                    (this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar14,(int32_t)index,
                                          MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                                         ), this_00 == (RegexCharClass_SingleRange)0x0)) ||
                   (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)this_00,(MethodInfo *)0x0),
                   pTVar2 == (Transform *)0x0)) break;
                pTVar3 = (Transform *)0x0;
                if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                  pTVar3 = pTVar2;
                }
                if (pTVar3 == (Transform *)0x0) {
                  func_?();
                  pTVar2 = extraout_EDX;
                  goto code_?;
                }
                pTVar3 = (Transform *)0x0;
                if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                  pTVar3 = pTVar2;
                }
                VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_sizeDelta((RectTransform *)pTVar3,(MethodInfo *)0x0);
                fVar11 = VVar4.x;
                fVar9 = (layoutElement->fields).elementAspectRatio;
                pLVar1 = (layoutElement->fields).group;
                if (pLVar1 == (LayoutElement *)0x0) break;
                fVar16 = (float10)(*(code *)(pLVar1->klass->vtable).get_minHeight_1.method)();
                fVar17 = fVar11 / fVar9;
                if ((float)fVar16 <= fVar11 / fVar9) {
                  fVar17 = (float)fVar16;
                }
                if (RVar15 == (RegexCharClass_SingleRange)0x0) break;
                (**(code **)(*(int *)RVar15 + 0x1d0))
                          (RVar15,fVar17,*(undefined4 *)(*(int *)RVar15 + 0x1d4));
                index = (RectTransform__Class *)((int)&(index->_0).image + 1);
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void FixAspectRatio() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_FixAspectRatio
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__set_Item_int__WinningConditionBriefingLayoutFitter__LayoutGroupAspectFitterDef_
                   );
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).layoutGroup;
  if (pVVar1 != (VerticalLayoutGroup *)0x0) {
    (*(code *)(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.method)
              (pVVar1,(pVVar1->klass->vtable).get_minWidth_1.methodPtr);
    fVar2 = (this->fields).defaultSpacing;
    pVVar1 = (this->fields).layoutGroup;
    fVar3 = (this->fields).referenceRes.y;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if (pVVar1 != (VerticalLayoutGroup *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
      HorizontalOrVerticalLayoutGroup_set_spacing
                ((HorizontalOrVerticalLayoutGroup *)pVVar1,(fVar2 / fVar3) * (float)iVar4,
                 (MethodInfo *)0x0);
      pVVar1 = (this->fields).layoutGroup;
      if (pVVar1 != (VerticalLayoutGroup *)0x0) {
        (*(code *)(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.method)
                  (pVVar1,(pVVar1->klass->vtable).get_minWidth_1.methodPtr);
        index = 0;
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).elements;
        while (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          if ((pLVar5->fields)._size <= index) {
            return;
          }
          if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              || (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar5,index,
                                     MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                                    ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
             (piVar7 = *(int **)((int)RVar6 + 8), piVar7 == (int *)0x0)) break;
          (**(code **)(*piVar7 + 0x1a0))(piVar7,*(undefined4 *)(*piVar7 + 0x1a4));
          pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).elements;
          if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar5,index,
                             MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                            );
          WinningConditionBriefingLayoutFitter_AdjustElement
                    (this,(WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)RVar6,
                     (MethodInfo *)0x0);
          this_00 = (this->fields).elements;
          if (this_00 ==
              (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__set_Item
                    ((List_1_System_Object_ *)this_00,index,(Object *)RVar6,
                     MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__set_Item_int__WinningConditionBriefingLayoutFitter__LayoutGroupAspectFitterDef_
                    );
          index = index + 1;
          pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).elements;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_Start
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  fVar2 = (this->fields).desktopReferenceRes.y;
  pVVar3 = (this->fields).layoutGroup;
  (this->fields).referenceRes.x = (this->fields).desktopReferenceRes.x;
  (this->fields).referenceRes.y = fVar2;
  if (pVVar3 != (VerticalLayoutGroup *)0x0) {
    (this->fields).defaultSpacing = *(float *)&(pVVar3->fields)._.m_ChildForceExpandWidth;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WinningConditionBriefingLayoutFitter() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter__ctor
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  (this->fields).groupAspectRatio = 1.0;
  (this->fields).desktopReferenceRes.x = 1920.0;
  (this->fields).desktopReferenceRes.y = 1440.0;
  (this->fields).defaultSpacing = 20.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


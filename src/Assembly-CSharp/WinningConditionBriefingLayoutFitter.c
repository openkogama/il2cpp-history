
/* Void AdjustElement(WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef) */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_AdjustElement
               (WinningConditionBriefingLayoutFitter *this,
               WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *layoutElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((layoutElement != (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)0x0) &&
     (pLVar1 = (layoutElement->fields).group, pLVar1 != (LayoutElement *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pLVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar3 = (Transform *)0x0;
      if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar2;
      }
      if (pTVar3 == (Transform *)0x0) {
code_?:
        func_?();
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                  ((RectTransform *)pTVar3,(MethodInfo *)0x0);
        pLVar4 = (layoutElement->fields).layoutGroup;
        if (pLVar4 != (LayoutGroup *)0x0) {
          pLVar5 = pLVar4->klass;
          bVar6 = (pLVar5->_1).naturalAligment;
          bVar7 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
          if ((bVar6 < bVar7) ||
             (bVar8 = true,
             (HorizontalLayoutGroup__Class *)(pLVar5->_1).typeHierarchy[bVar7 - 1] !=
             TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
            bVar8 = false;
          }
          pTVar9 = (ThemeSkybox *)(layoutElement->fields).layoutGroup;
          pTVar10 = (ThemeSkybox *)0x0;
          if (bVar8) {
            pTVar10 = pTVar9;
          }
          if (pTVar10 != (ThemeSkybox *)0x0) {
            if ((bVar6 < bVar7) ||
               ((HorizontalLayoutGroup__Class *)(pTVar9->klass->_1).typeHierarchy[bVar7 - 1] !=
                TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            fVar11 = 0.0;
            pTVar10 = (ThemeSkybox *)0x0;
            if (bVar8) {
              pTVar10 = pTVar9;
            }
            fVar12 = ThemeSkybox::ThemeSkybox_get_FogDensity(pTVar10,(MethodInfo *)0x0);
            if (pLVar1 != (LayoutElement *)0x0) {
              (*(code *)(pLVar1->klass->vtable).set_minHeight.method)
                        (pLVar1,(fVar11 - fVar12) / (this->fields).groupAspectRatio,
                         (pLVar1->klass->vtable).get_preferredWidth_1.methodPtr);
              fVar11 = (this->fields).defaultSpacing;
              pHVar13 = (HorizontalOrVerticalLayoutGroup *)(layoutElement->fields).layoutGroup;
              fVar12 = (this->fields).referenceRes.y;
              pHVar14 = pHVar13;
              iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                                 ((MethodInfo *)0x0);
              if (pHVar13 != (HorizontalOrVerticalLayoutGroup *)0x0) {
                pHVar16 = pHVar13->klass;
                bVar6 = (pHVar16->_1).naturalAligment;
                bVar7 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
                if ((bVar6 < bVar7) ||
                   ((HorizontalLayoutGroup__Class *)(pHVar16->_1).typeHierarchy[bVar7 - 1] !=
                    TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                pHVar13 = (HorizontalOrVerticalLayoutGroup *)0x0;
                if (bVar8) {
                  pHVar13 = pHVar14;
                }
                if (pHVar13 != (HorizontalOrVerticalLayoutGroup *)0x0) {
                  if ((bVar6 < bVar7) ||
                     ((HorizontalLayoutGroup__Class *)(pHVar16->_1).typeHierarchy[bVar7 - 1] !=
                      TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                  }
                  pHVar13 = (HorizontalOrVerticalLayoutGroup *)0x0;
                  if (bVar8) {
                    pHVar13 = pHVar14;
                  }
                  UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
                  HorizontalOrVerticalLayoutGroup_set_spacing
                            (pHVar13,(float)iVar15 * (fVar11 / fVar12),(MethodInfo *)0x0);
                  index = 0;
                  while( true ) {
                    pLVar17 = (layoutElement->fields).elements;
                    if (pLVar17 == (List_1_UnityEngine_UI_LayoutElement_ *)0x0) break;
                    pOVar18 = mscorlib.dll::System::Collections::ObjectModel::
                              Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *
                                         )pLVar17,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Count__
                                        );
                    if ((int)pOVar18 <= index) {
                      return;
                    }
                    pLVar17 = (layoutElement->fields).elements;
                    if (pLVar17 == (List_1_UnityEngine_UI_LayoutElement_ *)0x0) break;
                    pIVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar17,index,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                                        );
                    pLVar17 = (layoutElement->fields).elements;
                    if (pLVar17 == (List_1_UnityEngine_UI_LayoutElement_ *)0x0) break;
                    this_00 = (Component_1 *)
                              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar17,index,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                                        );
                    if (this_00 == (Component_1 *)0x0) break;
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform(this_00,(MethodInfo *)0x0);
                    if (pTVar2 == (Transform *)0x0) break;
                    pTVar3 = (Transform *)0x0;
                    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)
                    {
                      pTVar3 = pTVar2;
                    }
                    if (pTVar3 == (Transform *)0x0) goto code_?;
                    VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                             RectTransform_get_sizeDelta((RectTransform *)pTVar3,(MethodInfo *)0x0)
                    ;
                    fVar12 = VVar20.x;
                    fVar11 = (layoutElement->fields).elementAspectRatio;
                    pLVar1 = (layoutElement->fields).group;
                    if (pLVar1 == (LayoutElement *)0x0) break;
                    fVar21 = (float10)(*(code *)(pLVar1->klass->vtable).get_minHeight_1.method)();
                    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Mathf);
                    }
                    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                                       (fVar12 / fVar11,(float)fVar21,(MethodInfo *)0x0);
                    if (pIVar19 == (IEventSystemHandler *)0x0) break;
                    func_?(0x22,pIVar19,fVar11);
                    index = index + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void FixAspectRatio() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_FixAspectRatio
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        pLVar5 = (this->fields).elements;
        while (pLVar5 != (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                         0x0) {
          pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                              MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Count__
                             );
          if ((int)pOVar6 <= index) {
            return;
          }
          pLVar5 = (this->fields).elements;
          if (((pLVar5 == (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *
                          )0x0) ||
              (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                                  ), pIVar7 == (IEventSystemHandler *)0x0)) ||
             (pIVar8 = pIVar7[1].klass, pIVar8 == (IEventSystemHandler__Class *)0x0)) break;
          pIVar9 = (pIVar8->_0).image;
          (*(code *)pIVar9[9].customAttributeCount)(pIVar8,pIVar9[9].metadataHandle);
          pLVar5 = (this->fields).elements;
          if (pLVar5 == (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                        0x0) break;
          layoutElement =
               (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,index,
                          MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                         );
          WinningConditionBriefingLayoutFitter_AdjustElement(this,layoutElement,(MethodInfo *)0x0);
          pLVar5 = (this->fields).elements;
          if (pLVar5 == (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                        0x0) break;
          mscorlib.dll::System::Collections::Generic::
          List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
          List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                    (pLVar5,index,layoutElement,
                     MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__set_Item_int__WinningConditionBriefingLayoutFitter__LayoutGroupAspectFitterDef_
                    );
          index = index + 1;
          pLVar5 = (this->fields).elements;
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_Start
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  fVar1 = (this->fields).desktopReferenceRes.y;
  this_00 = (ThemeSkybox *)(this->fields).layoutGroup;
  (this->fields).referenceRes.x = (this->fields).desktopReferenceRes.x;
  (this->fields).referenceRes.y = fVar1;
  if (this_00 != (ThemeSkybox *)0x0) {
    fVar1 = ThemeSkybox::ThemeSkybox_get_FogDensity(this_00,(MethodInfo *)0x0);
    (this->fields).defaultSpacing = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WinningConditionBriefingLayoutFitter() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter__ctor
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  uStack_1 = 0;
  (this->fields).groupAspectRatio = 1.0;
  func_?(&uStack_1,0x44f00000,0x44b40000,0);
  (this->fields).desktopReferenceRes.x = (float)uStack_1;
  (this->fields).desktopReferenceRes.y = uStack_1._4_4_;
  (this->fields).defaultSpacing = 20.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


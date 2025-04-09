
/* IEnumerator DisplayAndFadeImages() */

IEnumerator *
Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
          (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void EvaluateImageAtTime(Single, Single) */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::
     PurchasedAccessoryPreviewer_EvaluateImageAtTime
               (PurchasedAccessoryPreviewer *this,float bounceTime,float colorTime,
               MethodInfo *method)

{
  pAVar1 = (this->fields).bounceEffect;
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,bounceTime,(MethodInfo *)0x0);
    pIVar3 = (this->fields).image;
    if (pIVar3 != (Image *)0x0) {
      pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar3,(MethodInfo *)0x0);
      if (pRVar4 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar4,RectTransform_Axis__Enum_Horizontal,
                   (float)(this->fields).targetHeight * fVar2,(MethodInfo *)0x0);
        pIVar3 = (this->fields).image;
        if (pIVar3 != (Image *)0x0) {
          pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar3,(MethodInfo *)0x0);
          if (pRVar4 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar4,RectTransform_Axis__Enum_Vertical,
                       (float)(this->fields).targetHeight * (float)pIVar3,(MethodInfo *)0x0);
            pIVar3 = (this->fields).background;
            if (pIVar3 != (Image *)0x0) {
              pIVar5 = pIVar3->klass;
              pIStack6 = (pIVar5->vtable).CrossFadeColor_1.methodPtr;
              (*(code *)(pIVar5->vtable).CrossFadeColor.method)();
              pIVar3 = (this->fields).backgroundGlow;
              if (pIVar3 != (Image *)0x0) {
                pIVar5 = pIVar3->klass;
                pIStack6 = (pIVar5->vtable).CrossFadeColor_1.methodPtr;
                fVar2 = (this->fields).targetColorGlow.b;
                (*(code *)(pIVar5->vtable).CrossFadeColor.method)();
                pIVar3 = (this->fields).image;
                if (pIVar3 != (Image *)0x0) {
                  pIVar5 = pIVar3->klass;
                  pIStack6 = (pIVar5->vtable).set_color.methodPtr;
                  (*(code *)(pIVar5->vtable).get_color.method)();
                  pAVar1 = (this->fields).fadeEffect;
                  if (pAVar1 != (AnimationCurve *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (pAVar1,fVar2,(MethodInfo *)0x0);
                    pIVar3 = (this->fields).image;
                    if (pIVar3 != (Image *)0x0) {
                      pIVar5 = pIVar3->klass;
                      pIStack6 = (pIVar5->vtable).get_raycastTarget.methodPtr;
                      (*(code *)(pIVar5->vtable).set_color.method)();
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String GetImageUrl(AccessoryDataClient) */

String * Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_GetImageUrl
                   (PurchasedAccessoryPreviewer *this,AccessoryDataClient *accessoryDataClient,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessoryCategory);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_AvatarAccessory_);
    func_?(&StringLiteral_Image_unity3d);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__Images_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (accessoryDataClient != (AccessoryDataClient *)0x0) {
    EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__AccessoryCategory;
    iStack_2 = (accessoryDataClient->fields)._.cat;
    EStack_1.monitor = (MonitorData *)0xffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    str0 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_AvatarAccessory_,pSVar3,StringLiteral__Images_,(MethodInfo *)0x0
                     );
    pSVar3 = (accessoryDataClient->fields)._.url;
    pSVar4 = (String__Array *)func_?(TypeInfo__System__String,1);
    pSVar5 = ::StringLiteral__;
    if (pSVar4 != (String__Array *)0x0) {
      if (pSVar4->max_length == 0) goto code_?;
      pSVar4->vector[0] = ::StringLiteral__;
      func_?(pSVar4->vector,pSVar5);
      if (pSVar3 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Split_4
                           (pSVar3,pSVar4,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
        if (pSVar4 != (String__Array *)0x0) {
          uVar6 = pSVar4->max_length;
          if (uVar6 <= uVar6 - 1) goto code_?;
          pSVar3 = pSVar4->vector[uVar6 - 1];
          pSVar4 = (String__Array *)func_?(TypeInfo__System__String,1);
          pSVar5 = ::StringLiteral__;
          if (pSVar4 != (String__Array *)0x0) {
            if (pSVar4->max_length == 0) goto code_?;
            pSVar4->vector[0] = ::StringLiteral__;
            func_?(pSVar4->vector,pSVar5);
            if (pSVar3 != (String *)0x0) {
              pSVar4 = mscorlib.dll::System::String::String_Split_4
                                 (pSVar3,pSVar4,StringSplitOptions__Enum_None,(MethodInfo *)0x0);
              if (pSVar4 != (String__Array *)0x0) {
                if (pSVar4->max_length == 0) goto code_?;
                pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                   (pSVar4->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0)
                ;
                if (pSVar3 != (String *)0x0) {
                  pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar3,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                     (str0,pSVar3,(MethodInfo *)0x0);
                  return pSVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar7)();
  return pSVar3;
}


/* Void Initialize(AccessoryDataClient[]) */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
               (PurchasedAccessoryPreviewer *this,AccessoryDataClient__Array *previewAccessories,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__PurchasedAccessoryPreviewer__OnShow__);
    func_?(&TypeInfo__Styles);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                      ((Resolution *)&stack0xffffffdc,(MethodInfo *)0x0);
  TStack_2._id_k__BackingField = pRVar1->m_Width;
  TStack_2.m_Data = (Object *)pRVar1->m_Height;
  TStack_2.m_Children =
       (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
       (pRVar1->m_RefreshRate).numerator;
  uStack_3 = (pRVar1->m_RefreshRate).denominator;
  pOVar4 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::TreeViewItemData`1[System::
            Object]::TreeViewItemData_1_System_Object__get_data(&TStack_2,(MethodInfo *)0x0);
  ppAVar5 = &(this->fields).previewData;
  (this->fields).targetHeight = (int32_t)pOVar4;
  *ppAVar5 = previewAccessories;
  func_?(ppAVar5,previewAccessories);
  pAVar6 = *ppAVar5;
  if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
    uVar7 = (this->fields).currentStreamingAssetIndex;
    if (pAVar6->max_length <= uVar7) goto code_?;
    pAVar8 = pAVar6->vector[uVar7];
    if (pAVar8 != (AccessoryDataClient *)0x0) {
      if (((pAVar8->fields)._.lvl == 0) || ((pAVar8->fields)._.cost != 0)) {
        if (pAVar6->max_length <= uVar7) goto code_?;
        if (pAVar8 != (AccessoryDataClient *)0x0) {
          iVar9 = (pAVar8->fields)._.cost;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar10 = Styles::Styles_GetAccessoryColorsFromPrice(iVar9,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else {
        if (pAVar6->max_length <= uVar7) goto code_?;
        if (pAVar8 != (AccessoryDataClient *)0x0) {
          iVar9 = (pAVar8->fields)._.lvl;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar10 = Styles::Styles_GetAccessoryColorsFromLevel(iVar9,(MethodInfo *)0x0);
code_?:
          if (pRVar10 != (RarityStylesDef *)0x0) {
            fVar11 = (pRVar10->fields).backgroundColor.g;
            fVar12 = (pRVar10->fields).backgroundColor.b;
            fVar13 = (pRVar10->fields).backgroundColor.a;
            pAVar6 = *ppAVar5;
            (this->fields).targetColorBackground.r = (pRVar10->fields).backgroundColor.r;
            (this->fields).targetColorBackground.g = fVar11;
            (this->fields).targetColorBackground.b = fVar12;
            (this->fields).targetColorBackground.a = fVar13;
            fVar11 = (pRVar10->fields).glowColor.g;
            fVar12 = (pRVar10->fields).glowColor.b;
            fVar13 = (pRVar10->fields).glowColor.a;
            (this->fields).targetColorGlow.r = (pRVar10->fields).glowColor.r;
            (this->fields).targetColorGlow.g = fVar11;
            (this->fields).targetColorGlow.b = fVar12;
            (this->fields).targetColorGlow.a = fVar13;
            if (pAVar6 != (AccessoryDataClient__Array *)0x0) {
              uVar7 = (this->fields).currentStreamingAssetIndex;
              if (pAVar6->max_length <= uVar7) goto code_?;
              url = PurchasedAccessoryPreviewer_GetImageUrl
                              (this,pAVar6->vector[uVar7],(MethodInfo *)0x0);
              this_00 = (this->fields).imageLoader;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)this,MethodInfo__PurchasedAccessoryPreviewer__OnShow__,
                         (MethodInfo *)0x0);
              if (this_00 != (StreamedSpriteToImageManual *)0x0) {
                StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                          (this_00,url,(UnityAction *)this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_OnShow
               (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}



/* IEnumerator DisplayAndFadeImages() */

IEnumerator *
Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
          (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
              pIStack7 = (Image *)0x0;
              (*(code *)(pIVar5->vtable).CrossFadeColor.method)();
              pIVar3 = (this->fields).backgroundGlow;
              if (pIVar3 != (Image *)0x0) {
                pIVar5 = pIVar3->klass;
                pIStack6 = (pIVar5->vtable).CrossFadeColor_1.methodPtr;
                pIStack7 = (Image *)0x0;
                fVar2 = (this->fields).targetColorGlow.b;
                (*(code *)(pIVar5->vtable).CrossFadeColor.method)();
                pIStack7 = (this->fields).image;
                if (pIStack7 != (Image *)0x0) {
                  pIStack6 = (pIStack7->klass->vtable).set_color.methodPtr;
                  (*(code *)(pIStack7->klass->vtable).get_color.method)();
                  pAVar1 = (this->fields).fadeEffect;
                  if (pAVar1 != (AnimationCurve *)0x0) {
                    pIStack7 =
                         (Image *)UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                  AnimationCurve_Evaluate(pAVar1,fVar2,(MethodInfo *)0x0);
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
  pIStack6 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* String GetImageUrl(AccessoryDataClient) */

String * Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_GetImageUrl
                   (PurchasedAccessoryPreviewer *this,AccessoryDataClient *accessoryDataClient,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (accessoryDataClient == (AccessoryDataClient *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    piVar2 = &(accessoryDataClient->fields)._.cat;
    piVar3 = (int *)func_?(TypeInfo__MV__Common__AccessoryCategory,piVar2);
    if (piVar3 == (int *)0x0) goto code_?;
    pSVar4 = (String *)(**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
    piVar5 = (int32_t *)func_?(piVar3);
    *piVar2 = *piVar5;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str0 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_AvatarAccessory_,pSVar4,StringLiteral__Images_,(MethodInfo *)0x0
                     );
    pSVar4 = (accessoryDataClient->fields)._.url;
    pSVar6 = (String__Array *)func_?(TypeInfo__System__String,1);
    if (pSVar6 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar7 = func_?(::StringLiteral__,(pSVar6->klass->_0).element_class), iVar7 == 0))
    goto code_?;
    if (pSVar6->max_length == 0) goto code_?;
    pSVar6->vector[0] = ::StringLiteral__;
    if ((pSVar4 == (String *)0x0) ||
       (pSVar6 = mscorlib.dll::System::String::String_Split_5
                           (pSVar4,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar6 == (String__Array *)0x0)) goto code_?;
    uVar8 = pSVar6->max_length;
    if (uVar8 <= uVar8 - 1) goto code_?;
    pSVar4 = pSVar6->vector[uVar8 - 1];
    pSVar6 = (String__Array *)func_?(TypeInfo__System__String,1);
    if (pSVar6 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar7 = func_?(::StringLiteral__,(pSVar6->klass->_0).element_class), iVar7 == 0))
    goto code_?;
    if (pSVar6->max_length != 0) {
      pSVar6->vector[0] = ::StringLiteral__;
      if ((pSVar4 != (String *)0x0) &&
         (pSVar6 = mscorlib.dll::System::String::String_Split_5
                             (pSVar4,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
         pSVar6 != (String__Array *)0x0)) {
        if (pSVar6->max_length == 0) goto code_?;
        pSVar4 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar6->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0);
        if (pSVar4 != (String *)0x0) {
          pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_2(str0,pSVar4,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar9 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar9)();
  return pSVar4;
}


/* Void Initialize(AccessoryDataClient[]) */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_Initialize
               (PurchasedAccessoryPreviewer *this,AccessoryDataClient__Array *previewAccessories,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  uStack_2 = 0;
  pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                     (&RStack_4,(MethodInfo *)0x0);
  uStack_2._0_4_ = pRVar3->m_Width;
  uStack_2._4_4_ = pRVar3->m_Height;
  iStack_1 = pRVar3->m_RefreshRate;
  iVar5 = func_?(&uStack_2,0);
  (this->fields).targetHeight = iVar5;
  (this->fields).previewData = previewAccessories;
  if (previewAccessories == (AccessoryDataClient__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0,0);
    func_?(uVar6);
  }
  else {
    uVar7 = (this->fields).currentStreamingAssetIndex;
    uVar8 = previewAccessories->max_length;
    if (uVar8 <= uVar7) goto code_?;
    pAVar9 = previewAccessories->vector[uVar7];
    if (pAVar9 == (AccessoryDataClient *)0x0) goto code_?;
    level = (pAVar9->fields)._.lvl;
    if (level != 0) {
      if (uVar8 <= uVar7) goto code_?;
      if (pAVar9 == (AccessoryDataClient *)0x0) goto code_?;
      if ((pAVar9->fields)._.cost != 0) goto code_?;
      if (uVar7 < uVar8) {
        if (pAVar9 == (AccessoryDataClient *)0x0) goto code_?;
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pRVar10 = Styles::Styles_GetAccessoryColorsFromLevel(level,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if (uVar7 < uVar8) {
      if (pAVar9 != (AccessoryDataClient *)0x0) {
        iVar5 = (pAVar9->fields)._.cost;
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?(TypeInfo__Styles);
        }
        pRVar10 = Styles::Styles_GetAccessoryColorsFromPrice(iVar5,(MethodInfo *)0x0);
code_?:
        if (pRVar10 != (RarityStylesDef *)0x0) {
          fVar11 = (pRVar10->fields).backgroundColor.g;
          fVar12 = (pRVar10->fields).backgroundColor.b;
          fVar13 = (pRVar10->fields).backgroundColor.a;
          pAVar14 = (this->fields).previewData;
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
          if (pAVar14 != (AccessoryDataClient__Array *)0x0) {
            uVar7 = (this->fields).currentStreamingAssetIndex;
            uVar6 = 0;
            if (pAVar14->max_length <= uVar7) goto code_?;
            url = PurchasedAccessoryPreviewer_GetImageUrl
                            (this,pAVar14->vector[uVar7],(MethodInfo *)0x0);
            this_00 = (this->fields).imageLoader;
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
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
      goto code_?;
    }
  }
  uVar6 = 0;
  uVar15 = func_?(0,0);
  func_?(uVar15);
code_?:
  uVar6 = func_?(0,uVar6);
  func_?(uVar6);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_OnShow
               (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


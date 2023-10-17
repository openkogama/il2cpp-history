
/* IEnumerator DisplayAndFadeImages() */

IEnumerator *
Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
          (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
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
              pMStack6 = (pIVar5->vtable).CrossFadeColor.method;
              (*(pIVar5->vtable).CrossFadeColor.methodPtr)();
              pIVar3 = (this->fields).backgroundGlow;
              if (pIVar3 != (Image *)0x0) {
                pIVar5 = pIVar3->klass;
                pMStack6 = (pIVar5->vtable).CrossFadeColor.method;
                fVar2 = (this->fields).targetColorGlow.b;
                (*(pIVar5->vtable).CrossFadeColor.methodPtr)();
                pIVar3 = (this->fields).image;
                if (pIVar3 != (Image *)0x0) {
                  pIVar5 = pIVar3->klass;
                  pMStack6 = (pIVar5->vtable).get_color.method;
                  (*(pIVar5->vtable).get_color.methodPtr)();
                  pAVar1 = (this->fields).fadeEffect;
                  if (pAVar1 != (AnimationCurve *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (pAVar1,fVar2,(MethodInfo *)0x0);
                    pIVar3 = (this->fields).image;
                    if (pIVar3 != (Image *)0x0) {
                      pIVar5 = pIVar3->klass;
                      pMStack6 = (pIVar5->vtable).set_color.method;
                      (*(pIVar5->vtable).set_color.methodPtr)();
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
  if (accessoryDataClient == (AccessoryDataClient *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    EStack_2.klass = (Enum__Class *)TypeInfo__MV__Common__AccessoryCategory;
    iStack_3 = (accessoryDataClient->fields)._.cat;
    EStack_2.monitor = (MonitorData *)0xffffffff;
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    str0 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_AvatarAccessory_,pSVar4,StringLiteral__Images_,(MethodInfo *)0x0
                     );
    pSVar4 = (accessoryDataClient->fields)._.url;
    pSVar5 = (String__Array *)func_?(TypeInfo__System__String,1);
    if (pSVar5 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar6 = func_?(::StringLiteral__,(pSVar5->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    pSVar7 = ::StringLiteral__;
    if (pSVar5->max_length == 0) goto code_?;
    pSVar5->vector[0] = ::StringLiteral__;
    func_?(pSVar5->vector,pSVar7);
    if ((pSVar4 == (String *)0x0) ||
       (pSVar5 = mscorlib.dll::System::String::String_Split_4
                           (pSVar4,pSVar5,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
       pSVar5 == (String__Array *)0x0)) goto code_?;
    if (pSVar5->max_length <= pSVar5->max_length - 1) goto code_?;
    pSVar4 = pSVar5->vector[pSVar5->max_length - 1];
    pSVar5 = (String__Array *)func_?(TypeInfo__System__String,1);
    if (pSVar5 == (String__Array *)0x0) goto code_?;
    if ((::StringLiteral__ == (String *)0x0) ||
       (iVar6 = func_?(::StringLiteral__,(pSVar5->klass->_0).element_class), iVar6 != 0)) {
      pSVar7 = ::StringLiteral__;
      if (pSVar5->max_length == 0) goto code_?;
      pSVar5->vector[0] = ::StringLiteral__;
      func_?(pSVar5->vector,pSVar7);
      if ((pSVar4 != (String *)0x0) &&
         (pSVar5 = mscorlib.dll::System::String::String_Split_4
                             (pSVar4,pSVar5,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
         pSVar5 != (String__Array *)0x0)) {
        if (pSVar5->max_length == 0) goto code_?;
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar5->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0);
        if (pSVar4 != (String *)0x0) {
          pSVar4 = mscorlib.dll::System::String::String_ToLower(pSVar4,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar4,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar8)();
  return pSVar4;
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
  iStack_1 = 0;
  SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
  SStack_2._index = 0;
  pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                     ((Resolution *)&stack0xffffffe4,(MethodInfo *)0x0);
  SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)pRVar3->m_Width;
  SStack_2._index = pRVar3->m_Height;
  iStack_1 = pRVar3->m_RefreshRate;
  iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
          SparselyPopulatedArrayAddInfo_1_System_Object__get_Index(&SStack_2,(MethodInfo *)0x0);
  (this->fields).targetHeight = iVar4;
  (this->fields).previewData = previewAccessories;
  func_?(&(this->fields).previewData,previewAccessories);
  pAVar5 = (this->fields).previewData;
  if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
    uVar6 = (this->fields).currentStreamingAssetIndex;
    if (pAVar5->max_length <= uVar6) goto code_?;
    if (pAVar5->vector[uVar6] != (AccessoryDataClient *)0x0) {
      if (((pAVar5->vector[uVar6]->fields)._.lvl == 0) ||
         ((pAVar5->vector[(this->fields).currentStreamingAssetIndex]->fields)._.cost != 0)) {
        if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
          uVar6 = (this->fields).currentStreamingAssetIndex;
          if (pAVar5->max_length <= uVar6) goto code_?;
          iVar4 = (pAVar5->vector[uVar6]->fields)._.cost;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar7 = Styles::Styles_GetAccessoryColorsFromPrice(iVar4,(MethodInfo *)0x0);
code_?:
          if (pRVar7 != (RarityStylesDef *)0x0) {
            fVar8 = (pRVar7->fields).backgroundColor.g;
            fVar9 = (pRVar7->fields).backgroundColor.b;
            fVar10 = (pRVar7->fields).backgroundColor.a;
            pAVar5 = (this->fields).previewData;
            (this->fields).targetColorBackground.r = (pRVar7->fields).backgroundColor.r;
            (this->fields).targetColorBackground.g = fVar8;
            (this->fields).targetColorBackground.b = fVar9;
            (this->fields).targetColorBackground.a = fVar10;
            fVar8 = (pRVar7->fields).glowColor.g;
            fVar9 = (pRVar7->fields).glowColor.b;
            fVar10 = (pRVar7->fields).glowColor.a;
            (this->fields).targetColorGlow.r = (pRVar7->fields).glowColor.r;
            (this->fields).targetColorGlow.g = fVar8;
            (this->fields).targetColorGlow.b = fVar9;
            (this->fields).targetColorGlow.a = fVar10;
            if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
              uVar6 = (this->fields).currentStreamingAssetIndex;
              if (pAVar5->max_length <= uVar6) goto code_?;
              url = PurchasedAccessoryPreviewer_GetImageUrl
                              (this,pAVar5->vector[uVar6],(MethodInfo *)0x0);
              this_00 = (this->fields).imageLoader;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
      else if (pAVar5 != (AccessoryDataClient__Array *)0x0) {
        uVar6 = (this->fields).currentStreamingAssetIndex;
        if (pAVar5->max_length <= uVar6) goto code_?;
        if (pAVar5->vector[uVar6] != (AccessoryDataClient *)0x0) {
          iVar4 = (pAVar5->vector[uVar6]->fields)._.lvl;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar7 = Styles::Styles_GetAccessoryColorsFromLevel(iVar4,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_OnShow
               (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  routine = PurchasedAccessoryPreviewer_DisplayAndFadeImages(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  return;
}


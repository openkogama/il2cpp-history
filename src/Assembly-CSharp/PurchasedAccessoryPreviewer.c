
/* IEnumerator DisplayAndFadeImages() */

IEnumerator *
Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
          (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void EvaluateImageAtTime(Single, Single) */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::
     PurchasedAccessoryPreviewer_EvaluateImageAtTime
               (PurchasedAccessoryPreviewer *this,float bounceTime,float colorTime,
               MethodInfo *method)

{
  pAVar1 = (this->fields).bounceEffect;
  if (pAVar1 != (AnimationCurve *)0x0) {
    pvVar2 = (pAVar1->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)(pvVar2,bounceTime);
    pIVar6 = (this->fields).image;
    if ((pIVar6 != (Image *)0x0) &&
       (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar6,(MethodInfo *)0x0), pRVar7 != (RectTransform *)0x0)) {
      iVar8 = (this->fields).targetHeight;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar7,(MethodInfo *)0x0);
      fStackX_c = VVar9.y;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                        (pRVar7,(MethodInfo *)0x0);
      fVar10 = VVar9.x;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                        (pRVar7,(MethodInfo *)0x0);
      VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar7,(MethodInfo *)0x0);
      fStackX_8 = VVar9.x;
      VVar9.x = (float)iVar8 * fVar5 - (fStackX_8 - VVar11.x) * fVar10;
      VVar9.y = fStackX_c;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar7,VVar9,(MethodInfo *)0x0);
      pIVar6 = (this->fields).image;
      if ((pIVar6 != (Image *)0x0) &&
         (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar6,(MethodInfo *)0x0), pRVar7 != (RectTransform *)0x0))
      {
        iVar8 = (this->fields).targetHeight;
        VStack_12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_sizeDelta(pRVar7,(MethodInfo *)0x0);
        VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                          (pRVar7,(MethodInfo *)0x0);
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar7,(MethodInfo *)0x0);
        VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                          (pRVar7,(MethodInfo *)0x0);
        fStackX_c = VVar11.y;
        VVar11.y = (float)iVar8 * fVar5 - (fStackX_c - VVar13.y) * VVar9.y;
        VVar11.x = VStack_12.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar7,VVar11,(MethodInfo *)0x0);
        pIVar6 = (this->fields).background;
        if (pIVar6 != (Image *)0x0) {
          VStack_12.x = (this->fields).targetColorBackground.r;
          VStack_12.y = (this->fields).targetColorBackground.g;
          fStack_14 = (this->fields).targetColorBackground.b;
          fStack_15 = (this->fields).targetColorBackground.a;
          (*(pIVar6->klass->vtable).CrossFadeColor.methodPtr)
                    (pIVar6,&VStack_12,colorTime,0,0,(pIVar6->klass->vtable).CrossFadeColor.method,
                     VVar9,VVar13);
          pIVar6 = (this->fields).backgroundGlow;
          if (pIVar6 != (Image *)0x0) {
            VStack_12.x = (this->fields).targetColorGlow.r;
            VStack_12.y = (this->fields).targetColorGlow.g;
            fStack_14 = (this->fields).targetColorGlow.b;
            fStack_15 = (this->fields).targetColorGlow.a;
            (*(pIVar6->klass->vtable).CrossFadeColor.methodPtr)
                      (pIVar6,&VStack_12,colorTime,0,0,(pIVar6->klass->vtable).CrossFadeColor.method
                      );
            pIVar6 = (this->fields).image;
            if (pIVar6 != (Image *)0x0) {
              pVVar16 = (Vector2 *)
                        (*(pIVar6->klass->vtable).get_color.methodPtr)
                                  (&VStack_12,pIVar6,(pIVar6->klass->vtable).get_color.method);
              pAVar1 = (this->fields).fadeEffect;
              fVar5 = pVVar16->y;
              VVar9 = *pVVar16;
              fVar10 = pVVar16[1].x;
              if (pAVar1 != (AnimationCurve *)0x0) {
                pvVar2 = (pAVar1->fields).m_Ptr;
                if (pvVar2 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar4 = func_?(&UNK_?);
                  FUN_?(uVar4,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                uVar17 = (*pcRam_?)(pvVar2,colorTime);
                pIVar6 = (this->fields).image;
                if (pIVar6 != (Image *)0x0) {
                  VStack_12 = VVar9;
                  fStack_14 = fVar10;
                  fStack_15 = (float)uVar17;
                  (*(pIVar6->klass->vtable).set_color.methodPtr)(pIVar6,fVar5,fVar10);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String GetImageUrl(AccessoryDataClient) */

String * Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_GetImageUrl
                   (PurchasedAccessoryPreviewer *this,AccessoryDataClient *accessoryDataClient,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessoryCategory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarAccessory_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Image_unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Images_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (accessoryDataClient != (AccessoryDataClient *)0x0) {
    EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__AccessoryCategory;
    iStack_2 = (accessoryDataClient->fields)._.cat;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_AvatarAccessory_,pSVar3,StringLiteral__Images_,
                        (MethodInfo *)0x0);
    pSVar3 = (accessoryDataClient->fields)._.url;
    pSVar5 = (String__Array *)FUN_?(TypeInfo__System__String);
    if (pSVar5 != (String__Array *)0x0) {
      FUN_?(pSVar5,0,::StringLiteral__);
      if (pSVar3 != (String *)0x0) {
        pSVar5 = mscorlib.dll::System::String::String_SplitInternal_1
                           (pSVar3,(String *)0x0,pSVar5,0x7fffffff,StringSplitOptions__Enum_None,
                            (MethodInfo *)0x0);
        if (pSVar5 != (String__Array *)0x0) {
          iVar6 = (int)pSVar5->max_length;
          if ((uint)pSVar5->max_length <= iVar6 - 1U) {
code_?:
            FUN_?();
            pcVar7 = (code *)swi(3);
            pSVar3 = (String *)(*pcVar7)();
            return pSVar3;
          }
          pSVar3 = pSVar5->vector[(longlong)iVar6 + -1];
          pSVar5 = (String__Array *)FUN_?(TypeInfo__System__String);
          if (pSVar5 != (String__Array *)0x0) {
            FUN_?(pSVar5,0,::StringLiteral__);
            if (pSVar3 != (String *)0x0) {
              pSVar5 = mscorlib.dll::System::String::String_SplitInternal_1
                                 (pSVar3,(String *)0x0,pSVar5,0x7fffffff,
                                  StringSplitOptions__Enum_None,(MethodInfo *)0x0);
              if (pSVar5 != (String__Array *)0x0) {
                if ((int)pSVar5->max_length == 0) goto code_?;
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                   (pSVar5->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0)
                ;
                if (pSVar3 != (String *)0x0) {
                  pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar3,(MethodInfo *)0x0);
                  if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
                    if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
                      return pSVar3;
                    }
                    return (String *)**(undefined8 **)(lRam_? + 0xb8);
                  }
                  if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0)) {
                    return pSVar4;
                  }
                  iVar6 = (pSVar4->fields)._stringLength;
                  pSVar8 = (String *)FUN_?((pSVar3->fields)._stringLength + iVar6,pSVar3,0);
                  if (pSVar8 == (String *)0x0) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    pSVar3 = (String *)(*pcVar7)();
                    return pSVar3;
                  }
                  if ((pSVar4->fields)._stringLength <= (pSVar8->fields)._stringLength) {
                    puVar9 = &(pSVar8->fields)._firstChar;
                    puVar10 = &(pSVar4->fields)._firstChar;
                    uVar11 = (pSVar4->fields)._stringLength * 2;
                    if (((ulonglong)((longlong)puVar9 - (longlong)puVar10) < (ulonglong)uVar11) ||
                       ((ulonglong)((longlong)puVar10 - (longlong)puVar9) < (ulonglong)uVar11)) {
                      FUN_?();
                    }
                    else {
                      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                                ((uint8_t *)puVar9,(uint8_t *)puVar10,uVar11,(MethodInfo *)0x0);
                    }
                    if ((pSVar3->fields)._stringLength <= (pSVar8->fields)._stringLength - iVar6) {
                      puVar10 = &(pSVar8->fields)._firstChar + iVar6;
                      puVar9 = &(pSVar3->fields)._firstChar;
                      uVar11 = (pSVar3->fields)._stringLength * 2;
                      if (((ulonglong)((longlong)puVar10 - (longlong)puVar9) < (ulonglong)uVar11) ||
                         ((ulonglong)((longlong)puVar9 - (longlong)puVar10) < (ulonglong)uVar11)) {
                        FUN_?();
                      }
                      else {
                        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                                  ((uint8_t *)puVar10,(uint8_t *)puVar9,uVar11,(MethodInfo *)0x0);
                      }
                      return pSVar8;
                    }
                    uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                    pIVar13 = (IndexOutOfRangeException *)func_?(uVar12);
                    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                              (pIVar13,(MethodInfo *)0x0);
                    uVar12 = func_?(&
                                                 MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                                );
                    FUN_?(pIVar13,uVar12);
                    pcVar7 = (code *)swi(3);
                    pSVar3 = (String *)(*pcVar7)();
                    return pSVar3;
                  }
                  uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                  pIVar13 = (IndexOutOfRangeException *)func_?(uVar12);
                  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                            (pIVar13,(MethodInfo *)0x0);
                  uVar12 = func_?(&
                                               MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                              );
                  FUN_?(pIVar13,uVar12);
                  pcVar7 = (code *)swi(3);
                  pSVar3 = (String *)(*pcVar7)();
                  return pSVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
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
    FUN_?(&MethodInfo__PurchasedAccessoryPreviewer__OnShow__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (iVar1 = 0, pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&stack0xffffffffffffffe8);
  bVar4 = iRam_? != 0;
  (this->fields).targetHeight = iVar1;
  (this->fields).previewData = previewAccessories;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).previewData >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pAVar9 = (this->fields).previewData;
  if (pAVar9 != (AccessoryDataClient__Array *)0x0) {
    uVar5 = (this->fields).currentStreamingAssetIndex;
    if ((uint)pAVar9->max_length <= uVar5) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pAVar9->vector[(int)uVar5] != (AccessoryDataClient *)0x0) {
      if (((pAVar9->vector[(int)uVar5]->fields)._.lvl == 0) ||
         ((pAVar9->vector[(this->fields).currentStreamingAssetIndex]->fields)._.cost != 0)) {
        pAVar10 = ((this->fields).previewData)->vector[(this->fields).currentStreamingAssetIndex];
        if (pAVar10 == (AccessoryDataClient *)0x0) goto DAT_?;
        iVar1 = (pAVar10->fields)._.cost;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar11 = Styles::Styles_GetAccessoryColorsFromPrice(iVar1,(MethodInfo *)0x0);
      }
      else {
        pAVar9 = (this->fields).previewData;
        if (pAVar9 == (AccessoryDataClient__Array *)0x0) goto DAT_?;
        uVar5 = (this->fields).currentStreamingAssetIndex;
        if ((uint)pAVar9->max_length <= uVar5) goto DAT_?;
        if (pAVar9->vector[(int)uVar5] == (AccessoryDataClient *)0x0) goto DAT_?;
        iVar1 = (pAVar9->vector[(int)uVar5]->fields)._.lvl;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar11 = Styles::Styles_GetAccessoryColorsFromLevel(iVar1,(MethodInfo *)0x0);
      }
      if (pRVar11 != (RarityStylesDef *)0x0) {
        fVar12 = (pRVar11->fields).backgroundColor.g;
        fVar13 = (pRVar11->fields).backgroundColor.b;
        fVar14 = (pRVar11->fields).backgroundColor.a;
        pAVar9 = (this->fields).previewData;
        (this->fields).targetColorBackground.r = (pRVar11->fields).backgroundColor.r;
        (this->fields).targetColorBackground.g = fVar12;
        (this->fields).targetColorBackground.b = fVar13;
        (this->fields).targetColorBackground.a = fVar14;
        fVar12 = (pRVar11->fields).glowColor.g;
        fVar13 = (pRVar11->fields).glowColor.b;
        fVar14 = (pRVar11->fields).glowColor.a;
        (this->fields).targetColorGlow.r = (pRVar11->fields).glowColor.r;
        (this->fields).targetColorGlow.g = fVar12;
        (this->fields).targetColorGlow.b = fVar13;
        (this->fields).targetColorGlow.a = fVar14;
        if (pAVar9 != (AccessoryDataClient__Array *)0x0) {
          uVar5 = (this->fields).currentStreamingAssetIndex;
          if ((uint)pAVar9->max_length <= uVar5) goto DAT_?;
          pSVar15 = PurchasedAccessoryPreviewer_GetImageUrl
                              (this,pAVar9->vector[(int)uVar5],(MethodInfo *)0x0);
          this_00 = (this->fields).imageLoader;
          pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar16,(Object *)this,MethodInfo__PurchasedAccessoryPreviewer__OnShow__,
                     (MethodInfo *)0x0);
          if (this_00 != (StreamedSpriteToImageManual *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar17 = iRam_?;
            (this_00->fields).onAssetSetManual = (UnityAction *)pNVar16;
            if (iVar17 != 0) {
              uVar5 = (uint)((ulonglong)&(this_00->fields).onAssetSetManual >> 0xc);
              lVar18 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar18 + 0xADDR);
                puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                LOCK();
                bVar4 = uVar8 == *puVar6;
                if (bVar4) {
                  *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
                iVar17 = iRam_?;
              } while (!bVar4);
            }
            (this_00->fields)._._.url = pSVar15;
            if (iVar17 != 0) {
              uVar5 = (uint)((ulonglong)&(this_00->fields)._._.url >> 0xc);
              lVar18 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar18 + 0xADDR);
                puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                LOCK();
                bVar4 = uVar8 == *puVar6;
                if (bVar4) {
                  *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar4);
            }
            pUVar19 = (this_00->fields)._._.onAssetSetAction;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this_00,
                       MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
                       (MethodInfo *)0x0);
            pUVar19 = (UnityAction *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar19,(Delegate *)pNVar16,(MethodInfo *)0x0);
            if (pUVar19 == (UnityAction *)0x0) {
              (this_00->fields)._._.onAssetSetAction = (UnityAction *)0x0;
            }
            else {
              pUVar20 = (UnityAction *)0x0;
              if (pUVar19->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar20 = pUVar19;
              }
              if (pUVar20 == (UnityAction *)0x0) {
                FUN_?(pUVar19,TypeInfo__UnityEngine__Events__UnityAction);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this_00->fields)._._.onAssetSetAction = pUVar20;
              pUVar20 = (UnityAction *)0x0;
              if (pUVar19->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar20 = pUVar19;
              }
              if (pUVar20 == (UnityAction *)0x0) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)&(this_00->fields)._._.onAssetSetAction >> 0xc);
              lVar18 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar18 + 0xADDR);
                puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                LOCK();
                bVar4 = uVar8 == *puVar6;
                if (bVar4) {
                  *puVar6 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar4);
            }
            pMVar21 = 
            MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
            ;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MV__Common__Urls);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar22 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
            if (bVar22 == 0) {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar23 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)this_00,pMVar21->klass->rgctx_data[2].rgctxDataDummy,
                         (MethodInfo *)0x0);
              pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar23,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pUVar23 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar24 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar24 = pUVar23;
                }
                if (pUVar24 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar23,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar24;
                pUVar24 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar24 = pUVar23;
                }
                if (pUVar24 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar23,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar18 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar18 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                  LOCK();
                  bVar4 = uVar8 == *puVar6;
                  if (bVar4) {
                    *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar4);
              }
            }
            else {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar23 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)this_00,pMVar21->klass->rgctx_data[2].rgctxDataDummy,
                         (MethodInfo *)0x0);
              pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pUVar23,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pUVar23 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar24 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar24 = pUVar23;
                }
                if (pUVar24 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar23,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar24;
                pUVar24 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar24 = pUVar23;
                }
                if (pUVar24 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar23,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar18 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar18 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar18 + 0xADDR);
                  LOCK();
                  bVar4 = uVar8 == *puVar6;
                  if (bVar4) {
                    *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar4);
              }
              requestPriority = (this_00->fields)._.requestPriority;
              pUVar19 = (this_00->fields)._._.onAssetSetAction;
              pSVar15 = (this_00->fields)._._.url;
              if ((this_00->fields)._.useCache == 0) {
                StreamingAsset::StreamingAsset_Download_NonCached
                          ((StreamingAsset *)this_00,pSVar15,pUVar19,requestPriority,
                           (MethodInfo *)0x0);
              }
              else {
                StreamingAsset::StreamingAsset_Download_Cached
                          ((StreamingAsset *)this_00,pSVar15,pUVar19,requestPriority,
                           (MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_OnShow
               (PurchasedAccessoryPreviewer *this,MethodInfo *method)

{
  pIVar1 = PurchasedAccessoryPreviewer_DisplayAndFadeImages(this,(MethodInfo *)0x0);
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (PurchasedAccessoryPreviewer *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar6 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar6,pIVar1);
  return;
}


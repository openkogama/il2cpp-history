
/* Void OnFontReceived(TMP_FontAsset) */

void Assembly-CSharp.dll::TMPSettingsDropdownItemFont::TMPSettingsDropdownItemFont_OnFontReceived
               (TMPSettingsDropdownItemFont *this,TMP_FontAsset *fontAsset,MethodInfo *method)

{
  pTVar1 = (this->fields).text;
  if (pTVar1 == (TextMeshProUGUI *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,fontAsset,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar3 = (pTVar1->fields)._.m_fontAsset;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (fontAsset != (TMP_FontAsset *)0x0 || pTVar3 != (TMP_FontAsset *)0x0) {
    if (fontAsset == (TMP_FontAsset *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pTVar3 == (TMP_FontAsset *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = (pTVar3->fields)._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pTVar3 == (TMP_FontAsset *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar4 = (fontAsset->fields)._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar4 = pTVar3 == fontAsset;
    }
    if (!bVar4) {
      bVar4 = iRam_? != 0;
      (pTVar1->fields)._.m_fontAsset = fontAsset;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pTVar1->fields)._.m_fontAsset >> 0xc);
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
      (*(pTVar1->klass->vtable).LoadFontAsset.methodPtr)
                (pTVar1,(pTVar1->klass->vtable).LoadFontAsset.method);
      pTVar9 = pTVar1->klass;
      *(undefined1 *)&(pTVar1->fields)._.m_marginLeft = 1;
      (*(pTVar9->vtable).SetVerticesDirty.methodPtr)
                (pTVar1,(pTVar9->vtable).SetVerticesDirty.method);
      (*(pTVar1->klass->vtable).SetLayoutDirty.methodPtr)
                (pTVar1,(pTVar1->klass->vtable).SetLayoutDirty.method);
    }
  }
  return;
}


/* Void SetIndex(Int32) */

void Assembly-CSharp.dll::TMPSettingsDropdownItemFont::TMPSettingsDropdownItemFont_SetIndex
               (TMPSettingsDropdownItemFont *this,int32_t index,MethodInfo *method)

{
  this_00 = (this->fields).fontList;
  if (this_00 != (StreamedTextMeshProFontList *)0x0) {
    pSVar1 = StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                       (this_00,index,(MethodInfo *)0x0);
    this_01 = (this->fields).fontStream;
    if (this_01 != (StreamedTextMeshProFontTriggered *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__StreamingAsset<TMPro::TMP_FontAsset,_TMPro::TMP_FontAsset>__DownloadWhenPossible__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_StreamedAsset_is_missing_a_refer);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar2 = iRam_?;
      if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar1 = StringLiteral_StreamedAsset_is_missing_a_refer;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar3 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar1);
        return;
      }
      (this_01->fields)._._._.url = pSVar1;
      if (iVar2 != 0) {
        uVar5 = (uint)((ulonglong)&(this_01->fields)._._._.url >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar2 = iRam_?;
        } while (!bVar9);
      }
      (this_01->fields)._.receiver = (StreamedTextMeshProFont_IReceiver *)this;
      if (iVar2 != 0) {
        uVar5 = (uint)((ulonglong)&(this_01->fields)._.receiver >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pMVar10 = 
      MethodInfo__StreamingAsset<TMPro::TMP_FontAsset,_TMPro::TMP_FontAsset>__DownloadWhenPossible__
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
      bVar11 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
      if (bVar11 == 0) {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this_01,pMVar10->klass->rgctx_data[2].rgctxDataDummy,
                   (MethodInfo *)0x0);
        pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
        if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      else {
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MV__Common__Urls);
        }
        pUVar12 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this_01,pMVar10->klass->rgctx_data[2].rgctxDataDummy,
                   (MethodInfo *)0x0);
        pUVar12 = (Urls_OnStreamingAssetsUrlAvailable *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
        if (pUVar12 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
               (Urls_OnStreamingAssetsUrlAvailable *)0x0;
        }
        else {
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar14;
          pUVar14 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
          if (pUVar12->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
            pUVar14 = pUVar12;
          }
          if (pUVar14 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
            FUN_?(pUVar12,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        requestPriority = (this_01->fields)._._.requestPriority;
        onAssetSetAction = (this_01->fields)._._._.onAssetSetAction;
        pSVar1 = (this_01->fields)._._._.url;
        if ((this_01->fields)._._.useCache == 0) {
          StreamingAsset::StreamingAsset_Download_NonCached
                    ((StreamingAsset *)this_01,pSVar1,onAssetSetAction,requestPriority,
                     (MethodInfo *)0x0);
        }
        else {
          StreamingAsset::StreamingAsset_Download_Cached
                    ((StreamingAsset *)this_01,pSVar1,onAssetSetAction,requestPriority,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TMPSettingsDropdownItemFont::TMPSettingsDropdownItemFont_Start
               (TMPSettingsDropdownItemFont *this,MethodInfo *method)

{
  if ((this->fields).isIndexSetAfterStart != 0) {
    return;
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (((this_02 != (Transform *)0x0) &&
      (pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                          ((Object_1 *)this_02,(MethodInfo *)0x0), pSVar1 != (String *)0x0)) &&
     (pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar1,5,(pSVar1->fields)._stringLength + -5,(MethodInfo *)0x0),
     pSVar1 != (String *)0x0)) {
    iVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                      (&(pSVar1->fields)._firstChar,0x3a,(pSVar1->fields)._stringLength,
                       (MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar2,(MethodInfo *)0x0);
    iVar2 = mscorlib.dll::System::Int32::Int32_Parse(pSVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).fontList;
    if (this_00 != (StreamedTextMeshProFontList *)0x0) {
      pSVar1 = StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                         (this_00,iVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).fontStream;
      if (this_01 != (StreamedTextMeshProFontTriggered *)0x0) {
        StreamedTextMeshProFontTriggered::StreamedTextMeshProFontTriggered_StreamFont
                  (this_01,(StreamedTextMeshProFont_IReceiver *)this,pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


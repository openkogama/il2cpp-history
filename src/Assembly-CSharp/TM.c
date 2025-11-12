
/* Void Destroy() */

void Assembly-CSharp.dll::TM::TM_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TM);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__TM->static_fields->instance != (TM *)0x0) {
    TypeInfo__TM->static_fields->instance = (TM *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)TypeInfo__TM->static_fields >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    this = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this,(Object *)0x0,
               MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,(MethodInfo *)0x0);
  }
  return;
}


/* String GetFilename(String) */

String * Assembly-CSharp.dll::TM::TM_GetFilename(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_es_ES);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_es);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_GB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (languageName == (String *)0x0) {
    return (String *)0x0;
  }
  if (languageName == StringLiteral_en_GB) {
    return StringLiteral_en_US;
  }
  if (((StringLiteral_en_GB != (String *)0x0) &&
      ((languageName->fields)._stringLength == (StringLiteral_en_GB->fields)._stringLength)) &&
     (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(languageName->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_en_GB->fields)._firstChar,
                         (longlong)(languageName->fields)._stringLength * 2,(MethodInfo *)0x0),
     bVar1 != 0)) {
    return StringLiteral_en_US;
  }
  if (languageName == StringLiteral_es) {
    return StringLiteral_es_ES;
  }
  if (((StringLiteral_es != (String *)0x0) &&
      ((languageName->fields)._stringLength == (StringLiteral_es->fields)._stringLength)) &&
     (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(languageName->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_es->fields)._firstChar,
                         (longlong)(languageName->fields)._stringLength * 2,(MethodInfo *)0x0),
     bVar1 != 0)) {
    return StringLiteral_es_ES;
  }
  return languageName;
}


/* String[] GetTextAsArray(String) */

String__Array * Assembly-CSharp.dll::TM::TM_GetTextAsArray(String *toArrayString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Char,2);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x18) == 0) ||
       (*(undefined2 *)(lVar1 + 0x20) = 0x7b, *(uint *)(lVar1 + 0x18) < 2)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String__Array *)(*pcVar2)();
      return pSVar3;
    }
    *(undefined2 *)(lVar1 + 0x22) = 0x7d;
    if (toArrayString != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_4._12_4_ = 0;
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      RStack_4._pointer._value = (void *)(lVar1 + 0x20);
      RStack_4._length = *(int32_t *)(lVar1 + 0x18);
      pSVar3 = mscorlib.dll::System::String::String_SplitInternal
                         (toArrayString,&RStack_4,0x7fffffff,StringSplitOptions__Enum_None,
                          (MethodInfo *)0x0);
      return pSVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String__Array *)(*pcVar2)();
  return pSVar3;
}


/* String GetTextWithValues(String, ValueInsert) */

String * Assembly-CSharp.dll::TM::TM_GetTextWithValues
                   (String *index,ValueInsert *values,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM__(index,(MethodInfo *)0x0);
  if (values == (ValueInsert *)0x0) {
    return pSVar1;
  }
  pTVar2 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar2 != (TM *)0x0) {
    name = (pTVar2->fields).cultureName;
    this_00 = (CultureInfo *)FUN_?(TypeInfo__System__Globalization__CultureInfo);
    mscorlib.dll::System::Globalization::CultureInfo::CultureInfo__ctor_5
              (this_00,name,1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)(values->fields).values;
    if (this != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)0x0) {
      args = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
             RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
             List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
      if (args != (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0) {
        PStack_3._arg0 = (Object *)0x0;
        PStack_3._arg1 = (Object *)0x0;
        PStack_3._arg2 = (Object *)0x0;
        PStack_3._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                  (&PStack_3,(Object__Array *)args,(MethodInfo *)0x0);
        PStack_4._arg0 = PStack_3._arg0;
        PStack_4._arg1 = PStack_3._arg1;
        PStack_4._arg2 = PStack_3._arg2;
        PStack_4._args = PStack_3._args;
        pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)this_00,pSVar1,&PStack_4,(MethodInfo *)0x0);
        return pSVar1;
      }
      ppSVar5 = &StringLiteral_format;
      if (pSVar1 != (String *)0x0) {
        ppSVar5 = &StringLiteral_args;
      }
      pSVar1 = (String *)func_?(ppSVar5);
      uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
      this_01 = (ArgumentNullException *)func_?(uVar6);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_01,pSVar1,(MethodInfo *)0x0);
      uVar6 = func_?(&
                                  MethodInfo__System__String__Format_System__IFormatProvider__MethodInfo__System__String__System__Object____
                                 );
      FUN_?(this_01,uVar6);
      pcVar7 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar7)();
      return pSVar1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}


/* Void LanguageChanged(Action) */

void Assembly-CSharp.dll::TM::TM_LanguageChanged
               (Action *onLanguageChangedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    if ((pTVar1->fields).languageLoadingDone != 0) {
      return;
    }
    pTVar1 = TM_get_Instance((MethodInfo *)0x0);
    pMVar2 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
    if ((pTVar1 != (TM *)0x0) &&
       (pLVar3 = (pTVar1->fields).languageChangedCallback, pLVar3 != (List_1_System_Action_ *)0x0))
    {
      pAVar4 = (pLVar3->fields)._items;
      piVar5 = &(pLVar3->fields)._version;
      *piVar5 = *piVar5 + 1;
      if (pAVar4 == (Action__Array *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar7 = (pLVar3->fields)._size;
      if (uVar7 < (uint)pAVar4->max_length) {
        (pLVar3->fields)._size = uVar7 + 1;
      }
      else {
        uVar7 = (pLVar3->fields)._size;
        FUN_?(pLVar3,uVar7 + 1,
                      (pMVar2->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                     );
        pAVar4 = (pLVar3->fields)._items;
        (pLVar3->fields)._size = uVar7 + 1;
        if (pAVar4 == (Action__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pAVar4->max_length <= uVar7) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = iRam_? != 0;
      pAVar4->vector[(int)uVar7] = onLanguageChangedCallback;
      if (bVar8) {
        uVar7 = (uint)((ulonglong)(pAVar4->vector + (int)uVar7) >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LoadLanguage(String) */

void Assembly-CSharp.dll::TM::TM_LoadLanguage(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_30 = &UNK_?;
    FUN_?(&StringLiteral_es_ES);
    LOCK();
    UNLOCK();
    puStackY_30 = &UNK_?;
    FUN_?(&StringLiteral_es);
    LOCK();
    UNLOCK();
    puStackY_30 = &UNK_?;
    FUN_?(&StringLiteral_en_GB);
    LOCK();
    UNLOCK();
    puStackY_30 = &UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (languageName != (String *)0x0) {
    pSVar1 = StringLiteral_en_US;
    if (languageName == StringLiteral_en_GB) {
code_?:
      languageName = pSVar1;
      if (pSVar1 == (String *)0x0) goto code_?;
    }
    else {
      if ((StringLiteral_en_GB != (String *)0x0) &&
         ((languageName->fields)._stringLength == (StringLiteral_en_GB->fields)._stringLength)) {
        puStackY_30 = &UNK_?;
        bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(languageName->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_en_GB->fields)._firstChar,
                            (longlong)(languageName->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar1 = StringLiteral_en_US;
        if (bVar2 != 0) goto code_?;
      }
      pSVar1 = StringLiteral_es_ES;
      if (languageName == StringLiteral_es) goto code_?;
      if ((StringLiteral_es != (String *)0x0) &&
         ((languageName->fields)._stringLength == (StringLiteral_es->fields)._stringLength)) {
        puStackY_30 = &UNK_?;
        bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(languageName->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_es->fields)._firstChar,
                            (longlong)(languageName->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar1 = StringLiteral_es_ES;
        if (bVar2 != 0) goto code_?;
      }
    }
    puStackY_30 = &UNK_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace(languageName,0x5f,0x2d,(MethodInfo *)0x0)
    ;
    puStackY_30 = &UNK_?;
    pTVar3 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar3 == (TM *)0x0) goto code_?;
    pSVar4 = (pTVar3->fields).cultureName;
    if (pSVar1 != pSVar4) {
      if (((pSVar1 == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
         ((pSVar1->fields)._stringLength != (pSVar4->fields)._stringLength)) {
code_?:
        if (cRam_? == '\0') {
          puStackY_40 = &UNK_?;
          FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?(&TypeInfo__GetRequest);
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?(&
                        MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                       );
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?(&TypeInfo__MV__Common__Urls);
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?(&StringLiteral_Languages_);
          LOCK();
          UNLOCK();
          puStackY_40 = &UNK_?;
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        puStackY_40 = &UNK_?;
        pTVar3 = TM_get_Instance((MethodInfo *)0x0);
        if (pTVar3 == (TM *)0x0) {
          puStackY_40 = &UNK_?;
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = iRam_? != 0;
        (pTVar3->fields).fileName = languageName;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pTVar3->fields).fileName >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        puStackY_40 = &UNK_?;
        pSVar1 = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_Languages_,languageName,StringLiteral__txt,
                             (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
          puStackY_40 = &UNK_?;
          FUN_?();
        }
        puStackY_40 = &UNK_?;
        pSVar4 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
        puStackY_40 = &UNK_?;
        pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar1,(MethodInfo *)0x0);
        puStackY_40 = &UNK_?;
        this_00 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        puStackY_40 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
                   (MethodInfo *)0x0);
        puStackY_40 = &UNK_?;
        this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
        puStackY_40 = &UNK_?;
        AsyncWebRequest::AsyncWebRequest__ctor
                  (this_01,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          puStackY_40 = &UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          puStackY_30 = &UNK_?;
          FUN_?(&TypeInfo__AsyncWWWManager,0);
          LOCK();
          UNLOCK();
          puStackY_30 = &UNK_?;
          FUN_?(&TypeInfo__CachedGetRequest);
          LOCK();
          UNLOCK();
          puStackY_30 = &UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
          LOCK();
          UNLOCK();
          puStackY_30 = &UNK_?;
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          puStackY_30 = &UNK_?;
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
          if (this_01 != (AsyncWebRequest *)0x0) {
            bVar11 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if ((bVar11 <= (this_01->klass->_1).naturalAligment) &&
               ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                puStackY_30 = &UNK_?;
                FUN_?(TypeInfo__AsyncWWWManager);
              }
              pAVar12 = this_01->klass;
              bVar11 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
              if (((pAVar12->_1).naturalAligment < bVar11) ||
                 ((pAVar12->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  (Il2CppClass *)TypeInfo__CachedGetRequest)) {
                puStackY_30 = &UNK_?;
                FUN_?(this_01,TypeInfo__CachedGetRequest);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puStackY_30 = &UNK_?;
              cVar13 = (*(code *)pAVar12[1]._0.image)
                                 (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                                  pAVar12[1]._0.gc_desc);
              if (cVar13 != '\0') {
                return;
              }
            }
          }
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            puStackY_30 = &UNK_?;
            FUN_?(TypeInfo__AsyncWWWManager);
          }
          this = TypeInfo__AsyncWWWManager->static_fields->requests;
          if ((this_01 != (AsyncWebRequest *)0x0) &&
             (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
            puStackY_30 = &UNK_?;
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                                 (this_01->fields).requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                );
            if (pOVar14 != (Object *)0x0) {
              if (pOVar14[1].klass != (Object__Class *)0x0) {
                if (*(int *)&pOVar14[2].klass == *(int *)&((pOVar14[1].klass)->_0).namespaze) {
                  pOVar15 = pOVar14[1].klass;
                  iVar16 = *(int *)&(pOVar15->_0).namespaze * 2;
                  if (iVar16 < *(int *)&(pOVar15->_0).namespaze + 4) {
                    iVar16 = *(int *)&(pOVar15->_0).namespaze + 4;
                  }
                  puStackY_30 = &UNK_?;
                  FUN_?(pOVar14,iVar16,
                                MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                if (pOVar14[1].klass != (Object__Class *)0x0) {
                  puStackY_30 = &UNK_?;
                  FUN_?(pOVar14[1].klass,
                                (longlong)*(int *)((longlong)&pOVar14[1].monitor + 4),this_01);
                  if (pOVar14[1].klass != (Object__Class *)0x0) {
                    iVar17 = *(int *)((longlong)&pOVar14[1].monitor + 4) + 1;
                    iVar16 = 0;
                    if (iVar17 != *(int *)&((pOVar14[1].klass)->_0).namespaze) {
                      iVar16 = iVar17;
                    }
                    *(int *)((longlong)&pOVar14[1].monitor + 4) = iVar16;
                    *(int *)&pOVar14[2].klass = *(int *)&pOVar14[2].klass + 1;
                    piVar18 = (int *)((longlong)&pOVar14[2].klass + 4);
                    *piVar18 = *piVar18 + 1;
                    return;
                  }
                }
              }
              puStackY_30 = &UNK_?;
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puStackY_30 = &UNK_?;
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        return;
      }
      puStackY_30 = &UNK_?;
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(pSVar4->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
    }
  }
code_?:
  puStackY_30 = &UNK_?;
  pTVar3 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar3 != (TM *)0x0) {
    bVar6 = iRam_? != 0;
    (pTVar3->fields).catalog = (Catalog *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&pTVar3->fields >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar10;
        LOCK();
        uVar8 = *puVar10;
        if (uVar9 == uVar8) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar8);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar3 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar3 != (TM *)0x0) {
      (pTVar3->fields).languageLoadingDone = 1;
      pTVar3 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar3 != (TM *)0x0) &&
         (pLVar19 = (pTVar3->fields).languageChangedCallback, pLVar19 != (List_1_System_Action_ *)0x0
         )) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&puStackY_40 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar10;
            LOCK();
            uVar8 = *puVar10;
            if (uVar9 == uVar8) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar8);
        }
        puStackY_38 = (undefined1 *)((ulonglong)(uint)(pLVar19->fields)._version << 0x20);
        puStackY_30 = (undefined *)0x0;
        lStackY_20 = (longlong)puStackY_38;
        pOVar14 = (Object *)0x0;
        puStackY_40 = (undefined *)0x0;
        puStackY_38 = (undefined1 *)&pLStackY_28;
        pLStackY_28 = pLVar19;
        while (bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&pLStackY_28,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                                  ), bVar2 != 0) {
          if (pOVar14 == (Object *)0x0) goto code_?;
          (*(code *)pOVar14[1].monitor)(pOVar14[4].klass,pOVar14[2].monitor);
        }
        pTVar3 = TM_get_Instance((MethodInfo *)0x0);
        if ((pTVar3 != (TM *)0x0) &&
           (pLVar19 = (pTVar3->fields).languageChangedCallback,
           pLVar19 != (List_1_System_Action_ *)0x0)) {
          piVar20 = &(pLVar19->fields)._version;
          *piVar20 = *piVar20 + 1;
          length = (pLVar19->fields)._size;
          (pLVar19->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar19->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  puStackY_30 = &UNK_?;
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetLanguageLoadingDone() */

void Assembly-CSharp.dll::TM::TM_SetLanguageLoadingDone(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    (pTVar1->fields).languageLoadingDone = 1;
    pTVar1 = TM_get_Instance((MethodInfo *)0x0);
    if ((pTVar1 != (TM *)0x0) &&
       (pLVar2 = (pTVar1->fields).languageChangedCallback, pLVar2 != (List_1_System_Action_ *)0x0))
    {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_9 = 0;
      LStack_10._8_8_ = pLStack_8;
      LStack_10._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_8 = &LStack_10;
      LStack_10._list = (List_1_System_Object_ *)pLVar2;
      while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_10,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                               ), bVar11 != 0) {
        if (LStack_10._current == (Object *)0x0) goto code_?;
        (*(code *)LStack_10._current[1].monitor)
                  (LStack_10._current[4].klass,LStack_10._current[2].monitor);
      }
      pTVar1 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar1 != (TM *)0x0) &&
         (pLVar2 = (pTVar1->fields).languageChangedCallback, pLVar2 != (List_1_System_Action_ *)0x0)
         ) {
        piVar12 = &(pLVar2->fields)._version;
        *piVar12 = *piVar12 + 1;
        length = (pLVar2->fields)._size;
        (pLVar2->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar2->fields)._items,0,length,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::TM::TM_StreamingAssetCallback(UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__Catalog);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_loading_text__0___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      arg0 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      arg1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_Error_loading_text__0___1_;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_2,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
      PStack_3._arg0 = PStack_2._arg0;
      PStack_3._arg1 = PStack_2._arg1;
      PStack_3._arg2 = PStack_2._arg2;
      PStack_3._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
    pCVar5 = (Catalog *)FUN_?(TypeInfo__GNU__Gettext__Catalog);
    GNU::Gettext::Catalog::Catalog__ctor(pCVar5,(MethodInfo *)0x0);
    if (pTVar4 == (TM *)0x0) goto code_?;
    (pTVar4->fields).catalog = pCVar5;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pTVar4->fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar4 != (TM *)0x0) {
      pCVar5 = (pTVar4->fields).catalog;
      pDVar11 = (www->fields).m_DownloadHandler;
      if (pDVar11 != (DownloadHandler *)0x0) {
        pSVar1 = (String *)
                  (*(pDVar11->klass->vtable).GetText.methodPtr)
                            (pDVar11,(pDVar11->klass->vtable).GetText.method);
        pTVar4 = TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 != (TM *)0x0) {
          if (pCVar5 != (Catalog *)0x0) {
            GNU::Gettext::Catalog::Catalog_Load
                      (pCVar5,pSVar1,(pTVar4->fields).fileName,(MethodInfo *)0x0);
            pTVar4 = TM_get_Instance((MethodInfo *)0x0);
            pTVar12 = TM_get_Instance((MethodInfo *)0x0);
            if (pTVar12 != (TM *)0x0) {
              pSVar1 = (pTVar12->fields).fileName;
              if (pSVar1 != (String *)0x0) {
                pSVar1 = mscorlib.dll::System::String::String_Replace
                                    (pSVar1,0x5f,0x2d,(MethodInfo *)0x0);
                if (pTVar4 != (TM *)0x0) {
                  (pTVar4->fields).cultureName = pSVar1;
                  if (iRam_? != 0) {
                    uVar6 = (uint)((ulonglong)&(pTVar4->fields).cultureName >> 0xc);
                    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                      LOCK();
                      bVar10 = uVar8 == *puVar9;
                      if (bVar10) {
                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar10);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<System::Action>__Clear__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pTVar4 = TM_get_Instance((MethodInfo *)0x0);
                  if (pTVar4 != (TM *)0x0) {
                    (pTVar4->fields).languageLoadingDone = 1;
                    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
                    if ((pTVar4 != (TM *)0x0) &&
                       (pLVar13 = (pTVar4->fields).languageChangedCallback,
                       pLVar13 != (List_1_System_Action_ *)0x0)) {
                      if (iRam_? != 0) {
                        uVar6 = (uint)((ulonglong)&PStack_2._arg1 >> 0xc);
                        puVar9 = (ulonglong *)
                                 ((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                        do {
                          uVar14 = *puVar9;
                          LOCK();
                          uVar8 = *puVar9;
                          if (uVar14 == uVar8) {
                            *puVar9 = uVar14 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                        } while (uVar14 != uVar8);
                      }
                      PStack_2._arg2 =
                           (Object *)((ulonglong)(uint)(pLVar13->fields)._version << 0x20);
                      PStack_2._args = (Object__Array *)0x0;
                      PStack_3._arg1 = PStack_2._arg2;
                      PStack_3._arg2 = (Object *)0x0;
                      PStack_2._arg1 = (Object *)0x0;
                      PStack_2._arg2 = (Object *)&PStack_3;
                      PStack_3._arg0 = (Object *)pLVar13;
                      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                                     List`1[T]+Enumerator[System::Object]::
                                     List_1_T_Enumerator_System_Object__MoveNext
                                               ((List_1_T_Enumerator_System_Object_ *)&PStack_3,
                                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                                               ), bVar15 != 0) {
                        if (PStack_3._arg2 == (Object *)0x0) goto code_?;
                        (*(code *)PStack_3._arg2[1].monitor)
                                  (PStack_3._arg2[4].klass,PStack_3._arg2[2].monitor);
                      }
                      pTVar4 = TM_get_Instance((MethodInfo *)0x0);
                      if ((pTVar4 != (TM *)0x0) &&
                         (pLVar13 = (pTVar4->fields).languageChangedCallback,
                         pLVar13 != (List_1_System_Action_ *)0x0)) {
                        piVar16 = &(pLVar13->fields)._version;
                        *piVar16 = *piVar16 + 1;
                        length = (pLVar13->fields)._size;
                        (pLVar13->fields)._size = 0;
                        if (0 < length) {
                          mscorlib.dll::System::Array::Array_Clear
                                    ((Array *)(pLVar13->fields)._items,0,length,(MethodInfo *)0x0);
                        }
                        return;
                      }
                    }
                  }
                  FUN_?();
code_?:
                  FUN_?();
                  FUN_?();
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* String StripAssetStringFromFuncIdentifier(String) */

String * Assembly-CSharp.dll::TM::TM_StripAssetStringFromFuncIdentifier
                   (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return (String *)0x0;
  }
  this = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this != (Regex *)0x0) {
    startat = 0;
    if (((this->fields).roptions & 0x40) != 0) {
      startat = (key->fields)._stringLength;
    }
    pMVar1 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this,0,-1,key,0,(key->fields)._stringLength,startat,(MethodInfo *)0x0);
    if (pMVar1 != (Match *)0x0) {
      if ((pMVar1->fields)._._capcount != 0) {
        this_00 = (GroupCollection *)
                  (*(pMVar1->klass->vtable).get_Groups.methodPtr)
                            (pMVar1,(pMVar1->klass->vtable).get_Groups.method);
        if (((this_00 == (GroupCollection *)0x0) ||
            (pGVar2 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_00,1,(MethodInfo *)0x0), pGVar2 == (Group *)0x0)
            ) || (pSVar3 = (String *)
                           (*(pGVar2->klass->vtable).ToString.methodPtr)
                                     (pGVar2,(pGVar2->klass->vtable).ToString.method),
                 pSVar3 == (String *)0x0)) goto DAT_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar3,1,(pSVar3->fields)._stringLength + -2,(MethodInfo *)0x0);
        key = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                        (pSVar3,(MethodInfo *)0x0);
      }
      return key;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void TryGetTextAsset(String) */

void Assembly-CSharp.dll::TM::TM_TryGetTextAsset(String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Languages_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 == (TM *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pTVar1->fields).fileName = fileName;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pTVar1->fields).fileName >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pSVar8 = mscorlib.dll::System::String::String_Concat_5
                      (StringLiteral_Languages_,fileName,StringLiteral__txt,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar8,(MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
  AsyncWebRequest::AsyncWebRequest__ctor
            (this_01,pSVar8,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
             WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedGetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
    if (this_01 != (AsyncWebRequest *)0x0) {
      bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if ((bVar9 <= (this_01->klass->_1).naturalAligment) &&
         ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        pAVar10 = this_01->klass;
        bVar9 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
        if (((pAVar10->_1).naturalAligment < bVar9) ||
           ((pAVar10->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            (Il2CppClass *)TypeInfo__CachedGetRequest)) {
          FUN_?(this_01,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar10,
                        unaff_RBX);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar11 = (*(code *)pAVar10[1]._0.image)
                          (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                           pAVar10[1]._0.gc_desc);
        if (cVar11 != '\0') {
          return;
        }
      }
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    this = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (((this_01 != (AsyncWebRequest *)0x0) &&
        (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
       (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                            (this_01->fields).requestPriority,
                            MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                           ), pOVar12 != (Object *)0x0)) {
      if (pOVar12[1].klass != (Object__Class *)0x0) {
        if (*(int *)&pOVar12[2].klass == *(int *)&((pOVar12[1].klass)->_0).namespaze) {
          pOVar13 = pOVar12[1].klass;
          iVar14 = *(int *)&(pOVar13->_0).namespaze * 2;
          if (iVar14 < *(int *)&(pOVar13->_0).namespaze + 4) {
            iVar14 = *(int *)&(pOVar13->_0).namespaze + 4;
          }
          FUN_?(pOVar12,iVar14,
                        MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                        ->klass->rgctx_data[5].rgctxDataDummy);
        }
        if (pOVar12[1].klass != (Object__Class *)0x0) {
          FUN_?(pOVar12[1].klass,(longlong)*(int *)((longlong)&pOVar12[1].monitor + 4),this_01
                       );
          if (pOVar12[1].klass != (Object__Class *)0x0) {
            iVar15 = *(int *)((longlong)&pOVar12[1].monitor + 4) + 1;
            iVar14 = 0;
            if (iVar15 != *(int *)&((pOVar12[1].klass)->_0).namespaze) {
              iVar14 = iVar15;
            }
            *(int *)((longlong)&pOVar12[1].monitor + 4) = iVar14;
            *(int *)&pOVar12[2].klass = *(int *)&pOVar12[2].klass + 1;
            piVar16 = (int *)((longlong)&pOVar12[2].klass + 4);
            *piVar16 = *piVar16 + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* String _(String) */

String * Assembly-CSharp.dll::TM::TM__(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return (String *)0x0;
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_00 != (Regex *)0x0) {
    if (((this_00->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (key->fields)._stringLength;
    }
    pMVar1 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_00,0,-1,key,0,(key->fields)._stringLength,startat,(MethodInfo *)0x0);
    if (pMVar1 != (Match *)0x0) {
      if ((pMVar1->fields)._._capcount != 0) {
        this_01 = (GroupCollection *)
                  (*(pMVar1->klass->vtable).get_Groups.methodPtr)
                            (pMVar1,(pMVar1->klass->vtable).get_Groups.method);
        if (((this_01 == (GroupCollection *)0x0) ||
            (pGVar2 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_01,1,(MethodInfo *)0x0), pGVar2 == (Group *)0x0)
            ) || (pSVar3 = (String *)
                           (*(pGVar2->klass->vtable).ToString.methodPtr)
                                     (pGVar2,(pGVar2->klass->vtable).ToString.method),
                 pSVar3 == (String *)0x0)) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar3,1,(pSVar3->fields)._stringLength + -2,(MethodInfo *)0x0);
        key = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                        (pSVar3,(MethodInfo *)0x0);
      }
      if ((key != (String *)0x0) && ((key->fields)._stringLength != 0)) {
        pTVar4 = TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) || (this = (pTVar4->fields).catalog, this == (Catalog *)0x0))
          goto code_?;
          this_02 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this,key,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_02 != (CatalogEntry *)0x0) &&
             ((pSVar3 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                  (this_02,0,(MethodInfo *)0x0), pSVar3 != (String *)0x0 &&
              ((pSVar3->fields)._stringLength != 0)))) {
            pSVar3 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (pSVar3,(MethodInfo *)0x0);
            return pSVar3;
          }
        }
      }
      return key;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* TM() */

void Assembly-CSharp.dll::TM::TM__ctor(TM *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__Catalog);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Action>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Action>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Catalog *)FUN_?(TypeInfo__GNU__Gettext__Catalog);
  GNU::Gettext::Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).catalog = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).fileName = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).fileName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_01 = (List_1_System_Action_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::Action>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Action>__List__);
  iVar1 = iRam_?;
  (this->fields).languageChangedCallback = this_01;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).languageChangedCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cultureName = StringLiteral_en_US;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cultureName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* TM get_Instance() */

TM * Assembly-CSharp.dll::TM::TM_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TM);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__TM->static_fields;
  if (pTVar1->instance == (TM *)0x0) {
    this = (TM *)FUN_?();
    TM__ctor(this,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    TypeInfo__TM->static_fields->instance = this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)TypeInfo__TM->static_fields >> 0xc);
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
    pTVar1 = TypeInfo__TM->static_fields;
  }
  return pTVar1->instance;
}


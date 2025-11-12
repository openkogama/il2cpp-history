
/* Void Awake() */

void Assembly-CSharp.dll::PortalControl::PortalControl_Awake(PortalControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PortalPrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PortalPrefabPool>_PortalPrefabPool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__SessionLocator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PortalControl->static_fields->_Instance_k__BackingField = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PortalControl->static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pSVar6 = (this->fields).sessionLocatorUrl;
  pSVar7 = (SessionLocator *)FUN_?(TypeInfo__UGUI__Portal__Scripts__SessionLocator);
  iVar8 = iRam_?;
  (pSVar7->fields).url = pSVar6;
  if (iVar8 != 0) {
    uVar1 = (uint)((ulonglong)&pSVar7->fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).sessionLocator = pSVar7;
  if (iVar8 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).sessionLocator >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  data = (this->fields).portalPrefabPoolPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  PortalPrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PortalPrefabPool>_PortalPrefabPool_;
  if ((
      PortalPrefabPool_MethodInfo__UnityEngine__Object__Instantiate<PortalPrefabPool>_PortalPrefabPool_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_Object_you_want_to_instantia);
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = StringLiteral_The_Object_you_want_to_instantia;
  if (data == (PortalPrefabPool *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar10);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__UnityEngine__Object__CheckNullArgument_System__Object__System__String_
                               );
    FUN_?(this_00,uVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Internal_CloneSingle
                     ((Object_1 *)data,(MethodInfo *)0x0);
  pvVar13 = ((pMVar9->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
    pvVar13 = (void *)FUN_?(pvVar13);
  }
  if (pOVar12 == (Object_1 *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_?(pOVar12,pvVar13);
    if (lVar2 == 0) {
      FUN_?(pOVar12,pvVar13);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
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
  if (lVar2 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      return;
    }
  }
  uVar10 = func_?(&TypeInfo__UnityEngine__UnityException);
  this_01 = (UnityException *)func_?(uVar10);
  pSVar6 = (String *)func_?(&StringLiteral_Instantiate_failed_because_the_c);
  UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
            (this_01,pSVar6,(MethodInfo *)0x0);
  FUN_?(this_01,pMVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ChangePage(PortalPageType) */

void Assembly-CSharp.dll::PortalControl::PortalControl_ChangePage
               (PortalControl *this,PortalPageType__Enum portalPageType,MethodInfo *method)

{
  uVar1 = CONCAT44(in_register_00000014,portalPageType);
  pPVar2 = (this->fields).pageMap;
  uVar3 = 0;
  if (pPVar2 != (PortalControl_PageMapClass__Array *)0x0) {
    uVar4 = (uint)pPVar2->max_length;
    method = (MethodInfo *)pPVar2->vector;
    while( true ) {
      if ((int)uVar4 <= (int)uVar3) {
        return;
      }
      if (uVar4 <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pPVar6 = (PortalControl_PageMapClass *)method->methodPointer;
      uVar1 = 0;
      if (pPVar6 == (PortalControl_PageMapClass *)0x0) break;
      if ((pPVar6->fields)._PageType_k__BackingField == portalPageType) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>,pPVar6,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__DG__Tweening__DOTween);
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__PortalControl____c__DisplayClass32_0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        lVar7 = FUN_?(TypeInfo__PortalControl____c__DisplayClass32_0);
        if (pPVar6 != (PortalControl_PageMapClass *)0x0) {
          (this->fields)._ActiveIndex_k__BackingField = (pPVar6->fields)._Index_k__BackingField;
          this_00 = (this->fields).screenList;
          (this->fields)._Clicked_k__BackingField = 1;
          if ((this_00 != (GameObject *)0x0) &&
             (pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (this_00,
                                   UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                                  ), lVar7 != 0)) {
            bVar9 = iRam_? != 0;
            *(Object **)(lVar7 + 0x10) = pOVar8;
            if (bVar9) {
              uVar3 = (uint)(lVar7 + 0x10U >> 0xc);
              uVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar11 == *puVar12;
                if (bVar9) {
                  *puVar12 = uVar11 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            getter = (DOGetter_1_System_Single_ *)
                     FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>);
            FUN_?(getter,lVar7,
                          MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
            setter = (DOSetter_1_System_Single_ *)
                     FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>);
            FUN_?(setter,lVar7,
                          MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_
                         );
            iVar13 = (this->fields)._ActiveIndex_k__BackingField;
            duration = (this->fields).pageSlideTime;
            if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
              FUN_?();
            }
            DOTween.dll::DG::Tweening::DOTween::DOTween_To
                      (getter,setter,(float)iVar13,duration,(MethodInfo *)0x0);
            pAVar14 = (this->fields).OnPageChanged;
            if (pAVar14 != (Action_1_PortalPageType_ *)0x0) {
              (*(pAVar14->fields)._._.invoke_impl)
                        ((pAVar14->fields)._._.method_code,(pPVar6->fields)._PageType_k__BackingField
                         ,(pAVar14->fields)._._.method);
            }
            return;
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = uVar3 + 1;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
  }
  FUN_?(this,uVar1,method);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DebugPrintGameSessionData(Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::PortalControl::PortalControl_DebugPrintGameSessionData
               (Dictionary_2_System_String_System_Object_ *gameSessionData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____GameSessionData_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).m_MaxCapacity = 0x7fffffff;
  pCVar1 = (Char__Array *)FUN_?(TypeInfo__System__Char,0x100);
  (this->fields).m_ChunkChars = pCVar1;
  func_?(&this->fields);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
            (this,StringLiteral_____GameSessionData_u000A,(MethodInfo *)0x0);
  if (gameSessionData == (Dictionary_2_System_String_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&PStack_3 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  PStack_3._arg1 = (Object *)(ulonglong)(uint)(gameSessionData->fields)._version;
  uStack_8 = 2;
  auStack_9._8_8_ = PStack_3._arg1;
  pOStack_10 = (Object *)0x0;
  pOStack_11 = (Object *)0x0;
  uStack_12._0_4_ = 2;
  uStack_12._4_4_ = 0;
  uStack_13 = 0;
  puStack_14 = auStack_9;
  PStack_3._arg0 = (Object *)gameSessionData;
  auStack_9._0_8_ = gameSessionData;
  while (bVar15 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            auStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                           ), format = StringLiteral__0_____1_u000A, bVar15 != 0) {
    PStack_16._arg0 = (Object *)0x0;
    PStack_16._arg1 = (Object *)0x0;
    PStack_16._arg2 = (Object *)0x0;
    PStack_16._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_16,pOStack_10,pOStack_11,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_16._arg0;
    PStack_3._arg1 = PStack_16._arg1;
    PStack_3._arg2 = PStack_16._arg2;
    PStack_3._args = PStack_16._args;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
              (this,(IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)this,(MethodInfo *)0x0);
  return;
}


/* Void DoChangePage(PortalControl+PageMapClass) */

void Assembly-CSharp.dll::PortalControl::PortalControl_DoChangePage
               (PortalControl *this,PortalControl_PageMapClass *pageMapClass,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PortalControl____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__PortalControl____c__DisplayClass32_0);
  if (pageMapClass != (PortalControl_PageMapClass *)0x0) {
    (this->fields)._ActiveIndex_k__BackingField = (pageMapClass->fields)._Index_k__BackingField;
    this_00 = (this->fields).screenList;
    (this->fields)._Clicked_k__BackingField = 1;
    if ((this_00 != (GameObject *)0x0) &&
       (pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_00,
                            UnityEngine__UI__ScrollRect_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::ScrollRect>__
                           ), lVar1 != 0)) {
      bVar3 = iRam_? != 0;
      *(Object **)(lVar1 + 0x10) = pOVar2;
      if (bVar3) {
        uVar4 = (uint)(lVar1 + 0x10U >> 0xc);
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
      getter = (DOGetter_1_System_Single_ *)
               FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>);
      FUN_?(getter,lVar1,
                    MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__0__);
      setter = (DOSetter_1_System_Single_ *)
               FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>);
      FUN_?(setter,lVar1,
                    MethodInfo__PortalControl____c__DisplayClass32_0___DoChangePage_b__1_float_);
      iVar8 = (this->fields)._ActiveIndex_k__BackingField;
      duration = (this->fields).pageSlideTime;
      if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
        FUN_?();
      }
      DOTween.dll::DG::Tweening::DOTween::DOTween_To
                (getter,setter,(float)iVar8,duration,(MethodInfo *)0x0);
      pAVar9 = (this->fields).OnPageChanged;
      if (pAVar9 != (Action_1_PortalPageType_ *)0x0) {
        (*(pAVar9->fields)._._.invoke_impl)
                  ((pAVar9->fields)._._.method_code,(pageMapClass->fields)._PageType_k__BackingField
                   ,(pAVar9->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandlePlayGame(GameDto) */

void Assembly-CSharp.dll::PortalControl::PortalControl_HandlePlayGame
               (PortalControl *this,GameDto *gameDto,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::SessionLocatorResponse>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PortalControl__StartGame_UGUI__Portal__Scripts__SessionLocatorResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PortalControl____c___HandlePlayGame_b__34_0_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PortalControl____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sessionLocator;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::SessionLocatorResponse>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__PortalControl__StartGame_UGUI__Portal__Scripts__SessionLocatorResponse_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PortalControl____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = TypeInfo__PortalControl____c->static_fields->__9__34_0;
  if (this_02 == (Action_1_String_ *)0x0) {
    if (*(int *)&(TypeInfo__PortalControl____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__PortalControl____c->static_fields->__9;
    this_02 = (Action_1_String_ *)FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__PortalControl____c___HandlePlayGame_b__34_0_System__String_,
               (MethodInfo *)0x0);
    TypeInfo__PortalControl____c->static_fields->__9__34_0 = this_02;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__PortalControl____c->static_fields->__9__34_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (this_00 == (SessionLocator *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar6 = UGUI::Portal::Scripts::SessionLocator::SessionLocator_CreateRequest
                     (this_00,gameDto,
                      (Action_1_UGUI_Portal_Scripts_SessionLocatorResponse_ *)this_01,this_02,
                      (MethodInfo *)0x0);
  if (pIVar6 == (IEnumerator *)0x0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_03 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_03,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_03,uVar7);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_04 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_04,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_04,uVar7);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
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
  if (this == (PortalControl *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar10 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar10,pIVar6);
  return;
}


/* Void OpenGameInfo(GameDto) */

void Assembly-CSharp.dll::PortalControl::PortalControl_OpenGameInfo
               (PortalControl *this,GameDto *gameDto,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PortalControl____c__DisplayClass33_0___OpenGameInfo_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PortalControl____c__DisplayClass33_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PortalControl____c__DisplayClass33_0);
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)this;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar6 = iRam_?;
    object[1].monitor = (MonitorData *)gameDto;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (object[1].monitor == (MonitorData *)0x0) {
      return;
    }
    pPVar7 = (this->fields).gameInfoPopup;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,object,MethodInfo__PortalControl____c__DisplayClass33_0___OpenGameInfo_b__0__
               ,(MethodInfo *)0x0);
    if ((pPVar7 != (PopupHandler *)0x0) &&
       (pTVar8 = (pPVar7->fields).titleText, pTVar8 != (TMP_Text *)0x0)) {
      (*(pTVar8->klass->vtable).set_text.methodPtr)();
      bVar5 = iRam_? != 0;
      (pPVar7->fields).actionButtonCallback = (Action *)this_02;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(pPVar7->fields).actionButtonCallback >> 0xc);
        uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
          puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pPVar7 = (this->fields).gameInfoPopup;
      if ((pPVar7 != (PopupHandler *)0x0) &&
         (this_00 = (pPVar7->fields).canvasGroup, this_00 != (CanvasGroup *)0x0)) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar7,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_03,1,(MethodInfo *)0x0);
          this_01 = (pPVar7->fields).fadingTween;
          if (this_01 != (FadingTween *)0x0) {
            UGUI::Portal::Scripts::FadingTween::FadingTween_FadeIn
                      (this_01,_UNK_?,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartGame(SessionLocatorResponse) */

void Assembly-CSharp.dll::PortalControl::PortalControl_StartGame
               (PortalControl *this,SessionLocatorResponse *response,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pingURL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newPlanetName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_referrer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ping__token_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__leave__token_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newToken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_disconnectURL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isSoftLaunch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if ((response != (SessionLocatorResponse *)0x0) &&
     (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0)) {
    uVar1 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_token,
               (Object *)(response->fields).token,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_newToken
               ,(Object *)(response->fields).sessionToken,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_newPlanetName,(Object *)(response->fields).sessionID,
               (InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = (response->fields).objectID;
    pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_planetID
               ,pOVar2,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = (response->fields).profileID;
    pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_profileID,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar4 = uStackX_10;
    lVar5 = lRam_?;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar3 = (ulonglong)(uVar4 & 0x3f);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << uVar3;
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      else {
        pOVar2 = (Object *)0x0;
      }
    }
    else {
      pOVar2 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_isSoftLaunch,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar4 = uStackX_10;
    lVar5 = lRam_?;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          uVar3 = (ulonglong)(uVar4 & 0x3f);
          do {
            uVar9 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar9 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar9 | 1L << uVar3;
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      else {
        pOVar2 = (Object *)0x0;
      }
    }
    else {
      pOVar2 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
    }
    uVar1 = CONCAT71((int7)(uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_embedded
               ,pOVar2,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_referrer
               ,(Object *)StringLiteral_gsm,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_language
               ,(Object *)StringLiteral_en_US,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 1;
    pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,&uStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_gameMode
               ,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = (response->fields).udpPort;
    pSVar10 = (response->fields).serverIP;
    pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
    pSVar11 = StringLiteral__0___1_;
    PStack_12._arg0 = (Object *)0x0;
    PStack_12._arg1 = (Object *)0x0;
    PStack_12._arg2 = (Object *)0x0;
    PStack_12._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_12,(Object *)pSVar10,pOVar2,(MethodInfo *)0x0);
    uVar1 = 0;
    PStack_13._arg0 = PStack_12._arg0;
    PStack_13._arg1 = PStack_12._arg1;
    PStack_13._arg2 = PStack_12._arg2;
    PStack_13._args = PStack_12._args;
    pSVar10 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar11,&PStack_13,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_serverIP
               ,(Object *)pSVar10,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pSVar10 = (response->fields).sessionToken;
    pSVar11 = mscorlib.dll::System::String::String_Concat_6
                       ((this->fields).sessionLocatorUrl,(response->fields).id,
                        StringLiteral__ping__token_,pSVar10,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pingURL,
               (Object *)pSVar11,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar10 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pSVar10 = (response->fields).sessionToken;
    pSVar11 = mscorlib.dll::System::String::String_Concat_6
                       ((this->fields).sessionLocatorUrl,(response->fields).id,
                        StringLiteral__leave__token_,pSVar10,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_disconnectURL,(Object *)pSVar11,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar10 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
    GameSessionData::GameSessionData__ctor_1
              (this_01,(Dictionary_2_System_String_System_Object_ *)this_00,(MethodInfo *)0x0);
    PortalControl_DebugPrintGameSessionData
              ((Dictionary_2_System_String_System_Object_ *)this_00,(MethodInfo *)0x0);
    FUN_?(this_01);
    PlayerPrefsManager::PlayerPrefsManager_Initialize(this_01,(MethodInfo *)0x0);
    if (this_01 != (GameSessionData *)0x0) {
      AwayMonitor::AwayMonitor_Initialize((this_01->fields).gameMode,(MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField = 1;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField = 0;
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar10 = StringLiteral_DesktopBase;
        if (cRam_? == '\0') {
          PStack_12._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          PStack_12._args = (Object__Array *)&UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          PStack_12._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          PStack_12._args = (Object__Array *)&UNK_?;
          FUN_?();
        }
        PStack_12._args = (Object__Array *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
        SceneManager_LoadSceneAsyncNameIndexInternal
                  (pSVar10,-1,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
        pcVar14 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          PStack_12._args = (Object__Array *)&UNK_?;
          pcVar14 = (code *)FUN_?(&UNK_?);
          if (pcVar14 == (code *)0x0) {
            PStack_12._args = (Object__Array *)&UNK_?;
            uVar1 = func_?(&UNK_?);
            PStack_12._args = (Object__Array *)&UNK_?;
            FUN_?(uVar1,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        pcRam_? = pcVar14;
        PStack_12._args = (Object__Array *)&UNK_?;
        iVar15 = (*pcRam_?)();
        PStack_12._args = (Object__Array *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
        SceneManager_GetSceneAt(iVar15 + -1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* PortalControl() */

void Assembly-CSharp.dll::PortalControl::PortalControl__ctor(PortalControl *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).pageSlideTime = 0.4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* PortalPageType get_ActivePortalPageType() */

PortalPageType__Enum
Assembly-CSharp.dll::PortalControl::PortalControl_get_ActivePortalPageType
          (PortalControl *this,MethodInfo *method)

{
  pPVar1 = (this->fields).pageMap;
  if (pPVar1 != (PortalControl_PageMapClass__Array *)0x0) {
    uVar2 = (this->fields)._ActiveIndex_k__BackingField;
    if ((uint)pPVar1->max_length <= uVar2) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      PVar4 = (*pcVar3)();
      return PVar4;
    }
    if (pPVar1->vector[(int)uVar2] != (PortalControl_PageMapClass *)0x0) {
      return (pPVar1->vector[(int)uVar2]->fields)._PageType_k__BackingField;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  PVar4 = (*pcVar3)();
  return PVar4;
}


/* PortalControl get_Instance() */

PortalControl * Assembly-CSharp.dll::PortalControl::PortalControl_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PortalControl->static_fields->_Instance_k__BackingField;
}


/* Void set_Instance(PortalControl) */

void Assembly-CSharp.dll::PortalControl::PortalControl_set_Instance
               (PortalControl *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PortalControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PortalControl->static_fields->_Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PortalControl->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


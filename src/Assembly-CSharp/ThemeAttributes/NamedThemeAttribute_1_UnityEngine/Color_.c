
/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__Initialize
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,SettingsWrapper *settings,String *key
               ,int32_t groups,Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ThemeAttribute::ThemeAttribute_Initialize
            ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.themeCallback = onChange;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.themeCallback >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).name = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).name >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,method->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
  if (pTVar8 != (TM *)0x0) {
    if ((pTVar8->fields).languageLoadingDone != 0) {
      return;
    }
    pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
    pMVar9 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
    if ((pTVar8 != (TM *)0x0) &&
       (pLVar10 = (pTVar8->fields).languageChangedCallback, pLVar10 != (List_1_System_Action_ *)0x0))
    {
      pAVar11 = (pLVar10->fields)._items;
      piVar12 = &(pLVar10->fields)._version;
      *piVar12 = *piVar12 + 1;
      if (pAVar11 == (Action__Array *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = (pLVar10->fields)._size;
      if (uVar3 < (uint)pAVar11->max_length) {
        (pLVar10->fields)._size = uVar3 + 1;
      }
      else {
        uVar3 = (pLVar10->fields)._size;
        FUN_?(pLVar10,uVar3 + 1,
                      (pMVar9->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pAVar11,unaff_RDI);
        pAVar11 = (pLVar10->fields)._items;
        (pLVar10->fields)._size = uVar3 + 1;
        if (pAVar11 == (Action__Array *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((uint)pAVar11->max_length <= uVar3) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = iRam_? != 0;
      pAVar11->vector[(int)uVar3] = (Action *)this_00;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(pAVar11->vector + (int)uVar3) >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar6;
          LOCK();
          uVar5 = *puVar6;
          if (uVar13 == uVar5) {
            *puVar6 = uVar13 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar5);
      }
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__LanguageLoadedCallback
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).name = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).name >> 0xc);
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
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__OnValidate
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  this_00 = (this->fields).name;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((this_00 != (String *)0x0) && (::StringLiteral____ != (String *)0x0)) &&
      (((iVar1 = (::StringLiteral____->fields)._stringLength, pSVar2 = ::StringLiteral____,
        iVar1 <= (this_00->fields)._stringLength &&
        ((pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             (this_00,0,iVar1,(MethodInfo *)0x0), pSVar2 = ::StringLiteral____,
         pSVar3 == ::StringLiteral____ ||
         ((((pSVar3 != (String *)0x0 && (::StringLiteral____ != (String *)0x0)) &&
           ((pSVar3->fields)._stringLength == (::StringLiteral____->fields)._stringLength)) &&
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar3->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral____->fields)._firstChar,
                              (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 != 0)))))) ||
       (this_00 = mscorlib.dll::System::String::String_Concat_4(pSVar2,this_00,(MethodInfo *)0x0),
       this_00 != (String *)0x0)))) && (::StringLiteral___ != (String *)0x0)) {
    iVar1 = (::StringLiteral___->fields)._stringLength;
    pSVar2 = ::StringLiteral___;
    if (((this_00->fields)._stringLength < iVar1) ||
       ((pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (this_00,(this_00->fields)._stringLength - iVar1,iVar1,(MethodInfo *)0x0
                            ), pSVar2 = ::StringLiteral___, pSVar3 != ::StringLiteral___ &&
        (((pSVar3 == (String *)0x0 || (::StringLiteral___ == (String *)0x0)) ||
         (((pSVar3->fields)._stringLength != (::StringLiteral___->fields)._stringLength ||
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar3->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                              (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 == 0)))))))) {
      this_00 = mscorlib.dll::System::String::String_Concat_4(this_00,pSVar2,(MethodInfo *)0x0);
    }
    bVar5 = iRam_? != 0;
    (this->fields).name = this_00;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).name >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
         NamedThemeAttribute_1_UnityEngine_Color__Validate
                   (NamedThemeAttribute_1_UnityEngine_Color_ *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((str == (String *)0x0) || (::StringLiteral____ == (String *)0x0)) ||
      (((iVar1 = (::StringLiteral____->fields)._stringLength, pSVar2 = ::StringLiteral____,
        (str->fields)._stringLength < iVar1 ||
        ((pSVar3 = mscorlib.dll::System::String::String_Substring_1(str,0,iVar1,(MethodInfo *)0x0),
         pSVar2 = ::StringLiteral____, pSVar3 != ::StringLiteral____ &&
         ((((pSVar3 == (String *)0x0 || (::StringLiteral____ == (String *)0x0)) ||
           ((pSVar3->fields)._stringLength != (::StringLiteral____->fields)._stringLength)) ||
          (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar3->fields)._firstChar,
                              (uint8_t *)&(::StringLiteral____->fields)._firstChar,
                              (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar4 == 0)))))) &&
       (str = mscorlib.dll::System::String::String_Concat_4(pSVar2,str,(MethodInfo *)0x0),
       str == (String *)0x0)))) || (::StringLiteral___ == (String *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  iVar1 = (::StringLiteral___->fields)._stringLength;
  pSVar2 = ::StringLiteral___;
  if (iVar1 <= (str->fields)._stringLength) {
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (str,(str->fields)._stringLength - iVar1,iVar1,(MethodInfo *)0x0);
    pSVar2 = ::StringLiteral___;
    if (pSVar3 == ::StringLiteral___) {
      return str;
    }
    if (((pSVar3 != (String *)0x0) && (::StringLiteral___ != (String *)0x0)) &&
       (((pSVar3->fields)._stringLength == (::StringLiteral___->fields)._stringLength &&
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar3->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral___->fields)._firstChar,
                            (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 != 0)))) {
      return str;
    }
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(str,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


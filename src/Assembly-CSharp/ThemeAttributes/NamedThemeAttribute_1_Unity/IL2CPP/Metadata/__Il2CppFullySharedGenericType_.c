
/* Void Initialize(SettingsWrapper, String, Int32,
   Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Initialize
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = method->klass->rgctx_data[2].method;
  (*pMVar2->methodPointer)(this,settings,key,groups,onChange,pMVar2);
  pFVar3 = method->klass->rgctx_data->klass->fields;
  pIVar4 = pFVar3->parent;
  puVar5 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar3->offset);
  iVar6._0_2_ = (pIVar4->byval_arg).attrs;
  iVar6._2_1_ = (pIVar4->byval_arg).type;
  iVar6._3_1_ = (pIVar4->byval_arg).field_0xb;
  puVar7 = puVar5 + -2;
  if (-1 < iVar6) {
    puVar7 = puVar5;
  }
  pSVar8 = TM::TM__((String *)*puVar7,(MethodInfo *)0x0);
  pFVar3 = method->klass->rgctx_data->klass->fields;
  pIVar4 = pFVar3->parent;
  puVar5 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar3->offset);
  iVar9._0_2_ = (pIVar4->byval_arg).attrs;
  iVar9._2_1_ = (pIVar4->byval_arg).type;
  iVar9._3_1_ = (pIVar4->byval_arg).field_0xb;
  puVar7 = puVar5 + -2;
  if (-1 < iVar9) {
    puVar7 = puVar5;
  }
  bVar10 = iRam_? != 0;
  *puVar7 = pSVar8;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)puVar7 >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (ulonglong)(uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
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
  pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
  if (pTVar15 != (TM *)0x0) {
    if ((pTVar15->fields).languageLoadingDone != 0) {
      return;
    }
    pTVar15 = TM::TM_get_Instance((MethodInfo *)0x0);
    pMVar2 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
    if ((pTVar15 != (TM *)0x0) &&
       (pLVar16 = (pTVar15->fields).languageChangedCallback, pLVar16 != (List_1_System_Action_ *)0x0))
    {
      pAVar17 = (pLVar16->fields)._items;
      piVar18 = &(pLVar16->fields)._version;
      *piVar18 = *piVar18 + 1;
      if (pAVar17 == (Action__Array *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar11 = (pLVar16->fields)._size;
      if (uVar11 < (uint)pAVar17->max_length) {
        (pLVar16->fields)._size = uVar11 + 1;
      }
      else {
        uVar11 = (pLVar16->fields)._size;
        FUN_?(pLVar16,uVar11 + 1,
                      (pMVar2->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pAVar17,unaff_RDI);
        pAVar17 = (pLVar16->fields)._items;
        (pLVar16->fields)._size = uVar11 + 1;
        if (pAVar17 == (Action__Array *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((uint)pAVar17->max_length <= uVar11) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar10 = iRam_? != 0;
      pAVar17->vector[(int)uVar11] = (Action *)this_00;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)(pAVar17->vector + (int)uVar11) >> 0xc);
        puVar14 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar14;
          LOCK();
          uVar12 = *puVar14;
          if (uVar13 == uVar12) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar12);
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

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__LanguageLoadedCallback
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1->parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  pSVar6 = TM::TM__((String *)*puVar5,(MethodInfo *)0x0);
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1->parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar7._0_2_ = (pIVar2->byval_arg).attrs;
  iVar7._2_1_ = (pIVar2->byval_arg).type;
  iVar7._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar7) {
    puVar5 = puVar3;
  }
  bVar8 = iRam_? != 0;
  *puVar5 = pSVar6;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)puVar5 >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnValidate
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  puVar2 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  pIVar3 = pFVar1->parent;
  iVar4._0_2_ = (pIVar3->byval_arg).attrs;
  iVar4._2_1_ = (pIVar3->byval_arg).type;
  iVar4._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar5 = puVar2 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar2;
  }
  uVar6 = (*(method->klass->rgctx_data[4].method)->methodPointer)
                    (this,*puVar5,method->klass->rgctx_data[4].rgctxDataDummy);
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar3 = pFVar1->parent;
  puVar2 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1->offset);
  iVar7._0_2_ = (pIVar3->byval_arg).attrs;
  iVar7._2_1_ = (pIVar3->byval_arg).type;
  iVar7._3_1_ = (pIVar3->byval_arg).field_0xb;
  puVar5 = puVar2 + -2;
  if (-1 < iVar7) {
    puVar5 = puVar2;
  }
  bVar8 = iRam_? != 0;
  *puVar5 = uVar6;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)puVar5 >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Validate
                   (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   String *str,MethodInfo *method)

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


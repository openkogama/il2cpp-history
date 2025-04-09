
/* Void Initialize(Theme, RectTransform) */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Initialize
               (ThemeSettingsMenuBase *this,Theme *theme,RectTransform *content,MethodInfo *method)

{
  (this->fields).theme = theme;
  func_?(&(this->fields).theme,theme);
  (this->fields).content = content;
  func_?(&(this->fields).content,content);
  if ((theme != (Theme *)0x0) &&
     (this_00 = (theme->fields)._Settings_k__BackingField, this_00 != (SettingsWrapper *)0x0)) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
              (this_00,(IMenu *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_OnDestroy
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  ppIStack_1 = (IMenu **)&stack0xfffffffc;
  pTVar2 = (this->fields).theme;
  if ((pTVar2 != (Theme *)0x0) &&
     (pSVar3 = (pTVar2->fields)._Settings_k__BackingField, pSVar3 != (SettingsWrapper *)0x0)) {
    (pSVar3->fields).menu = (IMenu *)0x0;
    ppIStack_1 = &(pSVar3->fields).menu;
    func_?();
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Refresh
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  pRStack_1 = (RectTransform *)0xffffffff;
  pRStack_2 = (RectTransform *)&DAT_?;
  RStack_3.fields._._._.m_CachedPtr = *(Transform__Fields *)unaff_FS_OFFSET;
  *(RectTransform__Fields **)unaff_FS_OFFSET = &RStack_3.fields;
  RStack_3.monitor = (MonitorData *)&stack0xffffff98;
  pRVar4 = (RectTransform *)&stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
    pRVar4 = (RectTransform *)RStack_3.monitor;
  }
  RStack_3.monitor = (MonitorData *)pRVar4;
  pRStack_5 = (RectTransform *)0x0;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  pTVar7 = (Transform *)(this->fields).content;
  if (pTVar7 != (Transform *)0x0) {
    RStack_3.klass =
         (RectTransform__Class *)
         UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                   (pTVar7,(MethodInfo *)0x0);
    LStack_8._version = (int32_t)&RStack_3;
    LStack_8._current = (RegexCharClass_SingleRange)&pRStack_5;
    LStack_8._index = 0;
    pRStack_1 = (RectTransform *)0x1;
    while (RStack_3.klass != (RectTransform__Class *)0x0) {
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,RStack_3.klass);
      pRVar10 = RStack_3.klass;
      if (cVar9 == '\0') {
        pRStack_1 = (RectTransform *)0xffffffff;
        pRStack_5 = (RectTransform *)func_?(RStack_3.klass,TypeInfo__System__IDisposable)
        ;
        if (pRStack_5 != (RectTransform *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pRStack_5);
        }
        pRStack_1 = (RectTransform *)0xffffffff;
        pTVar11 = (this->fields).theme;
        if ((pTVar11 != (Theme *)0x0) &&
           (this_00 = (pTVar11->fields)._Settings_k__BackingField, this_00 != (SettingsWrapper *)0x0)
           ) {
          pRStack_12 = ThemeSettings::SettingsWrapper::SettingsWrapper_get_SettingsUI
                                 (this_00,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pRStack_12 != (RectTransform__Array *)0x0) {
            ppRVar14 = pRStack_12->vector;
            goto code_?;
          }
        }
        break;
      }
      pRStack_15 = RStack_3.klass;
      if (RStack_3.klass == (RectTransform__Class *)0x0) break;
      pRStack_16 = (RectTransform__Class *)((RStack_3.klass)->_0).image;
      uVar17 = 0;
      pRStack_18 = (RectTransform *)0x0;
      uVar19._0_1_ = (pRStack_16->_1).rank;
      uVar19._1_1_ = (pRStack_16->_1).minimumAlignment;
      pRStack_12 = (RectTransform__Array *)(uint)uVar19;
      if (uVar19 != 0) {
        do {
          if (pRStack_16->interfaceOffsets[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pIVar20 = ((RStack_3.klass)->_0).image;
            pp_Var9 = &pIVar20[4].metadataHandle +
                      *(int *)(pIVar20[2].name + (uint)uVar17 * 8 + 4) * 2;
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      pp_Var9 = (Il2CppMetadataImageHandle *)
                func_?(RStack_3.klass,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      pCVar21 = (Component *)
                (*(code *)*pp_Var9)(pRVar10,(Il2CppNameToTypeHandleHashTable *)pp_Var9[1]);
      if (pCVar21 == (Component *)0x0) break;
      pCVar22 = (Component *)0x0;
      if ((RectTransform__Class *)pCVar21->klass == TypeInfo__UnityEngine__RectTransform) {
        pCVar22 = pCVar21;
      }
      pRVar10 = TypeInfo__UnityEngine__RectTransform;
      if (pCVar22 == (Component *)0x0) goto code_?;
      pCVar22 = (Component *)0x0;
      if ((RectTransform__Class *)pCVar21->klass == TypeInfo__UnityEngine__RectTransform) {
        pCVar22 = pCVar21;
      }
      unaff_EDI = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (pCVar22,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)unaff_EDI,(MethodInfo *)0x0);
    }
  }
  goto code_?;
code_?:
  if ((int)pRStack_12->max_length <= (int)uVar13) goto code_?;
  if (pRStack_12->max_length <= uVar13) goto code_?;
  if ((Transform *)*ppRVar14 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            ((Transform *)*ppRVar14,(Transform *)(this->fields).content,0,(MethodInfo *)0x0);
  uVar13 = uVar13 + 1;
  ppRVar14 = ppRVar14 + 1;
  goto code_?;
code_?:
  pTVar7 = (Transform *)(this->fields).controllerArea;
  if (pTVar7 != (Transform *)0x0) {
    RStack_3.klass =
         (RectTransform__Class *)
         UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                   (pTVar7,(MethodInfo *)0x0);
    LStack_8._version = (int32_t)&RStack_3;
    LStack_8._index = 0;
    LStack_8._current = (RegexCharClass_SingleRange)&pRStack_5;
    pRStack_1 = (RectTransform *)0x4;
    while (pRVar10 = RStack_3.klass, pRStack_16 = RStack_3.klass,
          RStack_3.klass != (RectTransform__Class *)0x0) {
      pRStack_15 = (RectTransform__Class *)((RStack_3.klass)->_0).image;
      uVar23 = 0;
      pRStack_12 = (RectTransform__Array *)0x0;
      uVar17._0_1_ = (pRStack_15->_1).rank;
      uVar17._1_1_ = (pRStack_15->_1).minimumAlignment;
      pRStack_18 = (RectTransform *)(uint)uVar17;
      if (uVar17 != 0) {
        do {
          if (pRStack_15->interfaceOffsets[uVar23].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pIVar20 = ((RStack_3.klass)->_0).image;
            puVar24 = &pIVar20[4].exportedTypeCount +
                      *(int *)(pIVar20[2].name + (uint)uVar23 * 8 + 4) * 2;
            goto code_?;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar17);
      }
      puVar24 = (uint32_t *)
                func_?(RStack_3.klass,TypeInfo__System__Collections__IEnumerator,0);
code_?:
      cVar9 = (*(code *)*puVar24)(pRVar10,puVar24[1]);
      pRVar10 = RStack_3.klass;
      if (cVar9 == '\0') {
        pRStack_1 = (RectTransform *)0xffffffff;
        pRStack_5 = (RectTransform *)func_?(RStack_3.klass,TypeInfo__System__IDisposable)
        ;
        if (pRStack_5 != (RectTransform *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pRStack_5);
        }
        pRStack_1 = (RectTransform *)0xffffffff;
        pTVar11 = (this->fields).theme;
        if ((pTVar11 != (Theme *)0x0) &&
           (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (*(code *)(pTVar11->klass->vtable).get_Controllers.method)
                                (pTVar11,(pTVar11->klass->vtable).ThemeReset.methodPtr),
           this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
          pLVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                              (&LStack_8,this_01,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__GetEnumerator__
                              );
          pRStack_26 = (RectTransform *)0x0;
          LStack_6._list = (List_1_System_Object_ *)pLVar25->_list;
          LStack_6._index = pLVar25->_index;
          LStack_6._version = pLVar25->_version;
          LStack_6._current = *(Object **)&pLVar25->_current;
          pRStack_1 = (RectTransform *)0x7;
          pRStack_12 = (RectTransform__Array *)&LStack_6;
          while( true ) {
            bVar27 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__MoveNext__
                              );
            if (bVar27 == 0) {
              pRStack_1 = (RectTransform *)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__Dispose__
                         ,unaff_EDI);
              *(Transform__Fields *)unaff_FS_OFFSET = RStack_3.fields._._._.m_CachedPtr;
              return;
            }
            if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
            break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      ((Transform *)LStack_6._current,(Transform *)(this->fields).controllerArea,0,
                       (MethodInfo *)0x0);
          }
        }
        break;
      }
      pRStack_16 = RStack_3.klass;
      if (RStack_3.klass == (RectTransform__Class *)0x0) break;
      pRStack_15 = (RectTransform__Class *)((RStack_3.klass)->_0).image;
      uVar17 = 0;
      pRStack_12 = (RectTransform__Array *)0x0;
      uVar23._0_1_ = (pRStack_15->_1).rank;
      uVar23._1_1_ = (pRStack_15->_1).minimumAlignment;
      pRStack_18 = (RectTransform *)(uint)uVar23;
      if (uVar23 != 0) {
        do {
          if (pRStack_15->interfaceOffsets[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pIVar20 = ((RStack_3.klass)->_0).image;
            pp_Var9 = &pIVar20[4].metadataHandle +
                      *(int *)(pIVar20[2].name + (uint)uVar17 * 8 + 4) * 2;
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar23);
      }
      pp_Var9 = (Il2CppMetadataImageHandle *)
                func_?(RStack_3.klass,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      pCVar21 = (Component *)
                (*(code *)*pp_Var9)(pRVar10,(Il2CppNameToTypeHandleHashTable *)pp_Var9[1]);
      if (pCVar21 == (Component *)0x0) goto code_?;
      pCVar22 = (Component *)0x0;
      if ((RectTransform__Class *)pCVar21->klass == TypeInfo__UnityEngine__RectTransform) {
        pCVar22 = pCVar21;
      }
      pRVar10 = TypeInfo__UnityEngine__RectTransform;
      if (pCVar22 == (Component *)0x0) goto code_?;
      pCVar22 = (Component *)0x0;
      if ((RectTransform__Class *)pCVar21->klass == TypeInfo__UnityEngine__RectTransform) {
        pCVar22 = pCVar21;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (pCVar22,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pCVar21 = extraout_ECX;
  pRVar10 = extraout_EDX;
code_?:
  func_?(pCVar21,pRVar10);
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


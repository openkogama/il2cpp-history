
/* KogamaSettingWrapperBase CreateDeepCopy(KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateDeepCopy
          (KogamaSettingWrapperBase *source,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  pDVar1 = KogamaSettingTools_KogamaSettingsToDictionary(source,(MethodInfo *)0x0);
  pSVar2 = (String__Class *)factoryFunc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar3 = (String *)FUN_?();
code_?:
    FUN_?(pSVar3,pSVar2);
  }
  else {
    uStack_4 = 0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    uStack_11 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_12 = 2;
    auStack_13._8_8_ = uStack_11;
    auStack_13._16_8_ = (String *)0x0;
    auStack_13._24_8_ = (Object *)0x0;
    puStack_14 = (undefined *)0x2;
    pDStack_7 = pDVar1;
    auStack_13._0_8_ = pDVar1;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_13,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar15 == 0) {
        return (KogamaSettingWrapperBase *)0x0;
      }
      if (source == (KogamaSettingWrapperBase *)0x0) break;
      pSVar16 = (source->fields).key;
      pSVar17 = (String *)0x0;
      if ((String *)auStack_13._16_8_ != (String *)0x0) {
        if (*(String__Class **)auStack_13._16_8_ == pSRam0000000182dbdde0) {
          pSVar17 = (String *)auStack_13._16_8_;
        }
        pSVar3 = (String *)auStack_13._16_8_;
        pSVar2 = pSRam0000000182dbdde0;
        if (pSVar17 == (String *)0x0) goto code_?;
      }
      if ((pSVar17 == pSVar16) ||
         ((((pSVar17 != (String *)0x0 && (pSVar16 != (String *)0x0)) &&
           ((pSVar17->fields)._stringLength == (pSVar16->fields)._stringLength)) &&
          (bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar17->fields)._firstChar,
                              (uint8_t *)&(pSVar16->fields)._firstChar,
                              (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar15 != 0)))) {
        KStack_18.key = (Object *)auStack_13._16_8_;
        KStack_18.value = (Object *)auStack_13._24_8_;
        pKVar19 = KogamaSettingTools_CreateFromValues_1
                           (&KStack_18,source,(KogamaSettingsCollectionBase *)0x0,factoryFunc,
                            (MethodInfo *)0x0);
        return pKVar19;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pKVar19 = (KogamaSettingWrapperBase *)(*pcVar20)();
  return pKVar19;
}


/* KogamaSettingWrapperBase CreateFromValues(Dictionary`2[System.Object,System.Object],
   KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateFromValues
          (Dictionary_2_System_Object_System_Object_ *values,KogamaSettingWrapperBase *prototypeRoot
          ,Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
           *factoryFunc,MethodInfo *method)

{
  pSVar1 = (String__Class *)factoryFunc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (values == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar2 = (String *)FUN_?();
code_?:
    FUN_?(pSVar2,pSVar1);
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(values->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key = (Object *)0x0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_6 = values;
    DStack_12._dictionary = values;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar13 == 0) {
        return (KogamaSettingWrapperBase *)0x0;
      }
      if (prototypeRoot == (KogamaSettingWrapperBase *)0x0) break;
      pSVar14 = (prototypeRoot->fields).key;
      pSVar15 = (String *)0x0;
      if ((String *)DStack_12._current.key != (String *)0x0) {
        if ((String__Class *)(DStack_12._current.key)->klass == pSRam0000000182dbdde0) {
          pSVar15 = (String *)DStack_12._current.key;
        }
        pSVar2 = (String *)DStack_12._current.key;
        pSVar1 = pSRam0000000182dbdde0;
        if (pSVar15 == (String *)0x0) goto code_?;
      }
      if ((pSVar15 == pSVar14) ||
         ((((pSVar15 != (String *)0x0 && (pSVar14 != (String *)0x0)) &&
           ((pSVar15->fields)._stringLength == (pSVar14->fields)._stringLength)) &&
          (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar15->fields)._firstChar,
                              (uint8_t *)&(pSVar14->fields)._firstChar,
                              (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar13 != 0)))) {
        KStack_16.key = DStack_12._current.key;
        KStack_16.value = DStack_12._current.value;
        pKVar17 = KogamaSettingTools_CreateFromValues_1
                           (&KStack_16,prototypeRoot,(KogamaSettingsCollectionBase *)0x0,factoryFunc
                            ,(MethodInfo *)0x0);
        return pKVar17;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  pKVar17 = (KogamaSettingWrapperBase *)(*pcVar18)();
  return pKVar17;
}


/* KogamaSettingWrapperBase CreateFromValues(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingWrapperBase, KogamaSettingsCollectionBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateFromValues_1
          (KeyValuePair_2_System_Object_System_Object_ *valuePair,
          KogamaSettingWrapperBase *prototype,KogamaSettingsCollectionBase *parent,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (prototype != (KogamaSettingWrapperBase *)0x0) {
    pKVar1 = prototype->klass;
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if ((bVar2 <= (pKVar1->_1).naturalAligment) &&
       ((pKVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar2 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pKVar1->_1).naturalAligment < bVar2) ||
         ((pKVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(prototype);
        pcVar3 = (code *)swi(3);
        pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
        return pKVar4;
      }
      parent_00 = (KogamaSettingsCollectionBase *)
                  (*(code *)pKVar1[1]._0.name)(prototype,parent,pKVar1[1]._0.namespaze);
      pDStack_5 = (Dictionary_2_System_Object_System_Object_ *)valuePair->value;
      bVar2 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((prototype->klass->_1).naturalAligment < bVar2) ||
         ((prototype->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(prototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                     );
        pcVar3 = (code *)swi(3);
        pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
        return pKVar4;
      }
      if (pDStack_5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar6 = pDStack_5->klass;
        bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar6->_1).naturalAligment < bVar2) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar6->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDStack_5);
          pcVar3 = (code *)swi(3);
          pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
          return pKVar4;
        }
        bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar6->_1).naturalAligment < bVar2) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar6->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDStack_5);
          pcVar3 = (code *)swi(3);
          pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
          return pKVar4;
        }
        uStack_7 = 0;
        uStack_8 = 0;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pDStack_5 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
        uStack_13 = (ulonglong)(uint)(pDStack_5->fields)._version;
        uStack_14 = 2;
        DStack_15._version = (undefined4)uStack_13;
        DStack_15._index = uStack_13._4_4_;
        DStack_15._current.key = (Object *)0x0;
        DStack_15._current.value = (Object *)0x0;
        DStack_15._getEnumeratorRetType = 2;
        DStack_15._36_4_ = 0;
        DStack_15._dictionary = pDStack_5;
        while( true ) {
          bVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_15,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             );
          pOVar17 = DStack_15._current.value;
          pOVar18 = DStack_15._current.key;
          if (bVar16 == 0) {
            return (KogamaSettingWrapperBase *)parent_00;
          }
          if (prototype[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
          key = (Object *)0x0;
          if (DStack_15._current.key != (Object *)0x0) {
            if ((DStack_15._current.key)->klass == pORam0000000182dbdde0) {
              key = DStack_15._current.key;
            }
            if (key == (Object *)0x0) goto code_?;
          }
          pKVar4 = (KogamaSettingWrapperBase *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              ((Dictionary_2_System_Object_System_Object_ *)prototype[1].klass,key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                              );
          KStack_19.key = pOVar18;
          KStack_19.value = pOVar17;
          pKVar4 = KogamaSettingTools_CreateFromValues_1
                              (&KStack_19,pKVar4,parent_00,factoryFunc,(MethodInfo *)0x0);
          if (parent_00 == (KogamaSettingsCollectionBase *)0x0) goto code_?;
          (*(parent_00->klass->vtable).AddChild.methodPtr)
                    (parent_00,pKVar4,(parent_00->klass->vtable).AddChild.method);
        }
        goto code_?;
      }
      goto code_?;
    }
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (((pKVar1->_1).naturalAligment < bVar2) ||
       ((pKVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      FUN_?(prototype);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
      return pKVar4;
    }
  }
  if (factoryFunc !=
      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
       *)0x0) {
    KStack_19.key = valuePair->key;
    KStack_19.value = valuePair->value;
    pKVar4 = (KogamaSettingWrapperBase *)
              (*(factoryFunc->fields)._._.invoke_impl)
                        ((factoryFunc->fields)._._.method_code,&KStack_19,prototype,parent,
                         (factoryFunc->fields)._._.method);
    return pKVar4;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pKVar4 = (KogamaSettingWrapperBase *)(*pcVar3)();
  return pKVar4;
}


/* KogamaSettingWrapperBase CreatePrototypeWithUserValues(Dictionary`2[System.Object,System.Object],
   KogamaSettingWrapperBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreatePrototypeWithUserValues
          (Dictionary_2_System_Object_System_Object_ *userValuesDict,
          KogamaSettingWrapperBase *prototypeRoot,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  source = KogamaSettingTools_CreateFromValues
                     (userValuesDict,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  values = KogamaSettingTools_KogamaSettingsToDictionary(prototypeRoot,(MethodInfo *)0x0);
  target = KogamaSettingTools_CreateFromValues(values,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  if (source != (KogamaSettingWrapperBase *)0x0) {
    KogamaSettingTools_OverrideValues(target,source,(MethodInfo *)0x0);
  }
  return target;
}


/* Dictionary`2[System.Object,System.Object] GetSettingBranch(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetSettingBranch(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  do {
    if (obj == (KogamaSettingWrapperBase *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
    pKVar1 = (KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass;
    if ((((pKVar1->_1).naturalAligment <
          ((Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
          )->naturalAligment) ||
        ((pKVar1->_1).typeHierarchy
         [(ulonglong)
          ((Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
          )->naturalAligment - 1] !=
         (Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
        )) || (obj == (KogamaSettingWrapperBase *)0x0)) {
      if ((((pKVar1->_1).naturalAligment <
            ((Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            )->naturalAligment) ||
          ((pKVar1->_1).typeHierarchy
           [(ulonglong)
            ((Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            )->naturalAligment - 1] !=
           (Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
          )) || (obj == (KogamaSettingWrapperBase *)0x0)) {
        FUN_?(obj);
        pcVar2 = (code *)swi(3);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
        return pDVar3;
      }
      key = (((KogamaSettingsCollectionBase *)obj)->fields)._.key;
      lVar4 = (*(code *)pKVar1[1]._0.image)(obj,pKVar1[1]._0.gc_desc);
      if ((lVar4 == 0) ||
         (value = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(0,
                                   TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                   ,lVar4),
         this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  *)0x0)) goto code_?;
      in_R9 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              ->klass;
      pIVar5 = in_R9->rgctx_data;
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
        return pDVar3;
      }
      key = (((KogamaSettingsCollectionBase *)obj)->fields)._.key;
      pIVar5 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data;
      value = this;
      this = this_00;
    }
    in_R9 = (Il2CppClass *)CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,(Object *)value,
               (InsertionBehavior__Enum)in_R9,pIVar5[0x22].method);
    obj = (KogamaSettingWrapperBase *)
          (((KogamaSettingsCollectionBase *)obj)->fields)._._Parent_k__BackingField;
  } while( true );
}


/* Dictionary`2[System.Object,System.Object] GetSubTree(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetSubTree(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  pMVar2 = (MethodInfo *)KogamaSettingTools_GetSettingBranch(obj,(MethodInfo *)0x0);
  pDVar3 = KogamaSettingTools_KogamaSettingsToDictionary(obj,(MethodInfo *)0x0);
  if (obj == (KogamaSettingWrapperBase *)0x0) {
code_?:
    FUN_?();
  }
  else {
    this = pMVar2;
    do {
      do {
        if (this == (MethodInfo *)0x0) goto code_?;
        in_R8 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                ->klass->rgctx_data[0x21].method;
        iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)this,(Object *)(obj->fields).key,in_R8);
        if (-1 < iVar4) {
          key = (obj->fields).key;
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar3,(Object *)key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        ->klass->rgctx_data[0x22].method;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                       method_00);
            return (Dictionary_2_System_Object_System_Object_ *)pMVar2;
          }
          goto code_?;
        }
        uStack_5 = 0;
        uStack_6 = 0;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pMStack_8 >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          in_R8 = (MethodInfo *)(ulonglong)(uVar7 & 0x3f);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (longlong)in_R8;
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        uStack_12 = (ulonglong)*(uint *)((longlong)&this->return_type + 4);
        uStack_13 = 2;
        DStack_1._version = (undefined4)uStack_12;
        DStack_1._index = uStack_12._4_4_;
        DStack_1._current.key = (Object *)0x0;
        DStack_1._current.value = (Object *)0x0;
        DStack_1._getEnumeratorRetType = 2;
        DStack_1._36_4_ = 0;
        uStack_14 = 0;
        pDStack_15 = &DStack_1;
        pMStack_8 = this;
        DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)this;
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
      } while ((bVar16 == 0) ||
              (this = (MethodInfo *)0x0, in_R8 = (MethodInfo *)DStack_1._current.value,
              (MethodInfo *)DStack_1._current.value == (MethodInfo *)0x0));
      cVar17 = (code)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
    } while (((byte)cVar17 <= (byte)*(code *)((longlong)(DStack_1._current.value)->klass + 0x130))
            && ((*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(longlong *)((longlong)(DStack_1._current.value)->klass + 200) + -8 +
                  (ulonglong)(byte)cVar17 * 8) ==
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                && (this = (MethodInfo *)DStack_1._current.value,
                   (MethodInfo *)DStack_1._current.value != (MethodInfo *)0x0))));
  }
  FUN_?(in_R8);
  FUN_?(&uStack_14);
  func_?();
  pcVar18 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
  return pDVar3;
}


/* Dictionary`2[System.Object,System.Object] KogamaSettingsToDictionary(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_KogamaSettingsToDictionary(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (obj,(Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Void KogamaSettingsToDictionary(KogamaSettingWrapperBase,
   Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_KogamaSettingsToDictionary_1
               (KogamaSettingWrapperBase *obj,
               Dictionary_2_System_Object_System_Object_ *settingsDictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  if (obj != (KogamaSettingWrapperBase *)0x0) {
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar2) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar2 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      if (((obj->klass->_1).naturalAligment < bVar2) ||
         ((obj->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        FUN_?(obj,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                     );
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      key = (obj->fields).key;
      lVar4 = (*(code *)obj->klass[1]._0.image)(obj,obj->klass[1]._0.gc_desc);
      if ((lVar4 != 0) &&
         (value = (Object *)
                  FUN_?(0,
                                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                ,lVar4),
         settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (settingsDictionary,(Object *)key,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
    else {
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (settingsDictionary,(Object *)(obj->fields).key,(Object *)this,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        bVar2 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                ->_1).naturalAligment;
        if (((obj->klass->_1).naturalAligment < bVar2) ||
           ((obj->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) {
          FUN_?(obj);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pKStack_5 = obj[1].klass;
        if (pKStack_5 != (KogamaSettingWrapperBase__Class *)0x0) {
          uStack_6 = 0;
          uStack_7 = 0;
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&pKStack_5 >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          uStack_12 = (ulonglong)*(uint *)&(pKStack_5->_0).byval_arg.field_0xc;
          uStack_13 = 2;
          DStack_1._version = (undefined4)uStack_12;
          DStack_1._index = uStack_12._4_4_;
          DStack_1._current.key = (Object *)0x0;
          DStack_1._current.value = (Object *)0x0;
          DStack_1._getEnumeratorRetType = 2;
          DStack_1._36_4_ = 0;
          DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKStack_5;
          while (bVar14 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                         Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   (&DStack_1,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                                   ), bVar14 != 0) {
            KogamaSettingTools_KogamaSettingsToDictionary_1
                      ((KogamaSettingWrapperBase *)DStack_1._current.value,
                       (Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OverrideValues(KogamaSettingWrapperBase, KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_OverrideValues
               (KogamaSettingWrapperBase *target,KogamaSettingWrapperBase *source,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  if (target == (KogamaSettingWrapperBase *)0x0) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar3 = (Exception *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_Entry_not_found_in_target);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                                );
    FUN_?(pEVar3,uVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (source == (KogamaSettingWrapperBase *)0x0) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar3 = (Exception *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_Source_is_null);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                                );
    FUN_?(pEVar3,uVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = FUN_?(&(source->klass->_0).byval_arg);
  lVar7 = FUN_?(&(target->klass->_0).byval_arg);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (lVar6 != lVar7) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    pEVar3 = (Exception *)func_?(uVar2);
    pSVar4 = (String *)func_?(&StringLiteral_Source_and_target_type_are_not_t);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                                );
    FUN_?(pEVar3,uVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pKVar8 = source->klass;
  bVar9 = (
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
          ->_1).naturalAligment;
  if (((pKVar8->_1).naturalAligment < bVar9) ||
     ((pKVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
      (Il2CppClass *)
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
     )) {
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar8->_1).naturalAligment < bVar9) ||
       ((pKVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((target->klass->_1).naturalAligment < bVar9) ||
       ((target->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(target);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((source->klass->_1).naturalAligment < bVar9) ||
       ((source->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      FUN_?(source);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pKStack_10 = source[1].klass;
    if (pKStack_10 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
    uStack_11 = 0;
    uStack_12 = 0;
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)&pKStack_10 >> 0xc);
      puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar15 = *puVar14;
        LOCK();
        uVar16 = *puVar14;
        if (uVar15 == uVar16) {
          *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (uVar15 != uVar16);
    }
    uStack_17 = (ulonglong)*(uint *)&(pKStack_10->_0).byval_arg.field_0xc;
    uStack_18 = 2;
    DStack_1._version = (undefined4)uStack_17;
    DStack_1._index = uStack_17._4_4_;
    DStack_1._current.key = (Object *)0x0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 2;
    DStack_1._36_4_ = 0;
    uStack_19 = 0;
    pDStack_20 = &DStack_1;
    DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKStack_10;
    while( true ) {
      bVar21 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                        );
      source_00 = DStack_1._current.value;
      if (bVar21 == 0) {
        return;
      }
      if (target[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
      target_00 = (KogamaSettingWrapperBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)target[1].klass,
                             DStack_1._current.key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                            );
      KogamaSettingTools_OverrideValues
                (target_00,(KogamaSettingWrapperBase *)source_00,(MethodInfo *)0x0);
    }
  }
  else {
    pKVar8 = target->klass;
    bVar9 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if ((bVar9 <= (pKVar8->_1).naturalAligment) &&
       ((pKVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      lVar6 = (*(code *)pKVar8[1]._0.image)(target,pKVar8[1]._0.gc_desc);
      pKVar8 = source->klass;
      bVar9 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      if (((pKVar8->_1).naturalAligment < bVar9) ||
         ((pKVar8->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        FUN_?(source,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                     );
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = (*(code *)pKVar8[1]._0.image)(source,pKVar8[1]._0.gc_desc);
      if ((lVar7 != 0) &&
         (uVar2 = FUN_?(0,
                                 TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                 ,lVar7), lVar6 != 0)) {
        FUN_?(1,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting,
                      lVar6,uVar2);
        return;
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(target);
  }
  FUN_?();
  FUN_?(&uStack_19);
code_?:
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar2);
  pSVar4 = (String *)func_?(&StringLiteral_Unknown_base_type);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
  uVar2 = func_?(&
                               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                              );
  FUN_?(pEVar3,uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Traverse(KogamaSettingWrapperBase,
   Action`1[MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingWrapperBase])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_Traverse
               (KogamaSettingWrapperBase *root,
               Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (root != (KogamaSettingWrapperBase *)0x0) {
    if (callback ==
        (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(callback->fields)._._.invoke_impl)
              ((callback->fields)._._.method_code,root,(callback->fields)._._.method);
    pKVar2 = root->klass;
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if ((bVar3 <= (pKVar2->_1).naturalAligment) &&
       ((pKVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pKVar2->_1).naturalAligment < bVar3) ||
         ((pKVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(root);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pKStack_4 = root[1].klass;
      if (pKStack_4 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pKStack_4 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      uStack_11 = (ulonglong)*(uint *)&(pKStack_4->_0).byval_arg.field_0xc;
      uStack_12 = 2;
      DStack_13._version = (undefined4)uStack_11;
      DStack_13._index = uStack_11._4_4_;
      DStack_13._current.key = (Object *)0x0;
      DStack_13._current.value = (Object *)0x0;
      DStack_13._getEnumeratorRetType = 2;
      DStack_13._36_4_ = 0;
      DStack_13._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKStack_4;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                               ), bVar14 != 0) {
        KogamaSettingTools_Traverse
                  ((KogamaSettingWrapperBase *)DStack_13._current.value,callback,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


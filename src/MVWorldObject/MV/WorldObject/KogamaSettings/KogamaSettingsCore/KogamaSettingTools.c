
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (source,(Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
  pKVar1 = KogamaSettingTools_CreateFromValues
                     ((Dictionary_2_System_Object_System_Object_ *)this,source,factoryFunc,
                      (MethodInfo *)0x0);
  return pKVar1;
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (values == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    pKVar5 = (KogamaSettingWrapperBase *)(*pcVar4)();
    return pKVar5;
  }
  pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]::
           Dictionary_2_System_UInt32_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                      &stack0xffffffb0,(Dictionary_2_System_UInt32_System_Object_ *)values,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  method_00 = (Object__Class *)pDVar6->_dictionary;
  pKVar7 = &pDVar6->_current;
  pSVar8 = (String *)pKVar7->key;
  valuePair.key = (Object *)pKVar7->key;
  valuePair.value = pKVar7->value;
  uStack_1 = 1;
  do {
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                       &stack0xffffffc8,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar9 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return (KogamaSettingWrapperBase *)0x0;
    }
    if (prototypeRoot == (KogamaSettingWrapperBase *)0x0) goto code_?;
    a = (String *)0x0;
    if (pSVar8 != (String *)0x0) {
      if (pSVar8->klass == TypeInfo__System__String) {
        a = pSVar8;
      }
      if (a == (String *)0x0) {
        func_?(pSVar8,TypeInfo__System__String);
        goto code_?;
      }
    }
    bVar9 = mscorlib.dll::System::String::String_op_Equality
                      (a,(prototypeRoot->fields).key,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      pKVar5 = KogamaSettingTools_CreateFromValues_1
                         (valuePair,prototypeRoot,(KogamaSettingsCollectionBase *)0x0,factoryFunc,
                          (MethodInfo *)0x0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)method_00);
      *unaff_FS_OFFSET = uStack_3;
      return pKVar5;
    }
  } while( true );
}


/* KogamaSettingWrapperBase CreateFromValues(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingWrapperBase, KogamaSettingsCollectionBase,
   Func`4[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object],MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingsCollectionBase,MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes.KogamaSettingValueWrapperBase])
    */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_CreateFromValues_1
          (KeyValuePair_2_System_Object_System_Object_ valuePair,KogamaSettingWrapperBase *prototype
          ,KogamaSettingsCollectionBase *parent,
          Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
          *factoryFunc,MethodInfo *method)

{
  pIStack_1 = (Il2CppInteropData *)0xffffffff;
  p_Stack_c = (Il2CppMetadataTypeHandle)&DAT_?;
  pIStack_2 = (Il2CppGenericClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff9c;
  pIVar4 = (Il2CppClass *)&stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    in_stack_5 =
         &
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    func_?();
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)prototype;
  if (prototype == (KogamaSettingWrapperBase *)0x0) {
code_?:
    if (factoryFunc !=
        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
         *)0x0) {
      pKVar7 = (KogamaSettingWrapperBase *)
               (*(factoryFunc->fields)._._.invoke_impl)
                         ((factoryFunc->fields)._._.method_code,valuePair.key,valuePair.value,
                          prototype,parent,(factoryFunc->fields)._._.method);
      *unaff_FS_OFFSET = pIStack_2;
      return pKVar7;
    }
code_?:
    func_?();
    pSVar8 = extraout_ECX;
code_?:
    uVar9 = func_?(unaff_EDI,pSVar8);
    func_?(uVar9);
    valuePair.value = extraout_EDX;
    pIVar4 = unaff_EDI;
code_?:
    pKVar10 = (KogamaSettingsCollectionBase__Class *)func_?(valuePair.value,pDVar6);
  }
  else {
    pKVar11 = prototype->klass;
    bVar12 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar11->_1).naturalAligment < bVar12) ||
       ((pKVar11->_1).typeHierarchy[bVar12 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar12 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      pIVar4 = (Il2CppClass *)
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((pKVar11->_1).naturalAligment < bVar12) ||
         (unaff_EDI = (Il2CppClass *)
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         , (pKVar11->_1).typeHierarchy[bVar12 - 1] !=
           (Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      goto code_?;
    }
    bVar12 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    pIVar4 = (Il2CppClass *)
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((pKVar11->_1).naturalAligment < bVar12) ||
       ((pKVar11->_1).typeHierarchy[bVar12 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    pIVar4 = (Il2CppClass *)
             (*(code *)pKVar11[1]._0.namespaze)(prototype,parent,pKVar11[1]._0.byval_arg.data.dummy);
    bVar12 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    pKVar10 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    pIStack_13 = pIVar4;
    if ((bVar12 <= (prototype->klass->_1).naturalAligment) &&
       ((prototype->klass->_1).typeHierarchy[bVar12 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      unaff_EDI = pIVar4;
      if (valuePair.value == (Object *)0x0) goto code_?;
      bVar12 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((bVar12 <= ((valuePair.value)->klass->_1).naturalAligment) &&
          ((Dictionary_2_System_Object_System_Object___Class *)
           ((valuePair.value)->klass->_1).typeHierarchy[bVar12 - 1] ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
         (valuePair.value != (Object *)0x0)) {
        pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           (&DStack_15,(Dictionary_2_System_UInt32_System_Object_ *)valuePair.value,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&DStack_16;
        _Stack_28.dummy = (void *)0x0;
        DStack_16._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar14->_dictionary;
        DStack_16._version = pDVar14->_version;
        DStack_16._index = pDVar14->_index;
        DStack_16._current.key = (Object *)(pDVar14->_current).key;
        DStack_16._16_8_ = *(undefined8 *)&(pDVar14->_current).value;
        pIStack_1 = (Il2CppInteropData *)0x1;
        pDStack_17 = pDVar6;
        while( true ) {
          bVar18 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_16,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          pOVar19 = DStack_16._current.key;
          if (bVar18 == 0) {
            pIStack_1 = (Il2CppInteropData *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pDVar6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,(MethodInfo *)in_stack_5);
            *unaff_FS_OFFSET = pIStack_2;
            return (KogamaSettingWrapperBase *)pIVar4;
          }
          _Stack_1c.__klassIndex = (TypeDefinitionIndex)DStack_16._current.value;
          unaff_EDI = (Il2CppClass *)DStack_16._current.key;
          if (prototype[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
          pIVar4 = (Il2CppClass *)0x0;
          if ((Il2CppClass *)DStack_16._current.key != (Il2CppClass *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&(DStack_16._current.key)->klass)->image ==
                TypeInfo__System__String) {
              pIVar4 = (Il2CppClass *)DStack_16._current.key;
            }
            pSVar8 = TypeInfo__System__String;
            if (pIVar4 == (Il2CppClass *)0x0) goto code_?;
          }
          prototype_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    prototype[1].klass,(Object *)pIVar4,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                                   );
          valuePair_00.value = _Stack_1c.dummy;
          valuePair_00.key = pOVar19;
          in_stack_5 = (KogamaSettingValueWrapperBase__Class **)pIStack_13;
          pKVar7 = KogamaSettingTools_CreateFromValues_1
                             (valuePair_00,(KogamaSettingWrapperBase *)prototype_00.m_Index,
                              (KogamaSettingsCollectionBase *)pIStack_13,factoryFunc,
                              (MethodInfo *)0x0);
          pIVar4 = pIStack_13;
          unaff_EDI = (Il2CppClass *)0x0;
          if (pIStack_13 == (Il2CppClass *)0x0) break;
          pOVar20 = (Object__Class *)((Il2CppClass_0 *)&pIStack_13->image)->image;
          (*(code *)pOVar20[1]._0.namespaze)(pIStack_13,pKVar7,pOVar20[1]._0.byval_arg.data.dummy);
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pDVar6,pKVar10);
  prototype = (KogamaSettingWrapperBase *)pDVar6;
code_?:
  func_?(prototype,pIVar4);
  pcVar21 = (code *)swi(3);
  pKVar7 = (KogamaSettingWrapperBase *)(*pcVar21)();
  return pKVar7;
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (prototypeRoot,(Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
  target = KogamaSettingTools_CreateFromValues
                     ((Dictionary_2_System_Object_System_Object_ *)this,prototypeRoot,factoryFunc,
                      (MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  do {
    if (obj == (KogamaSettingWrapperBase *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
    pKVar1 = (KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass;
    if (((pKVar1->_1).naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((pKVar1->_1).typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      if (((pKVar1->_1).naturalAligment <
           ((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )->naturalAligment) ||
         ((pKVar1->_1).typeHierarchy
          [((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )->naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        func_?(obj,
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                       );
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
        return pDVar3;
      }
      key = (((KogamaSettingsCollectionBase *)obj)->fields)._.key;
      iVar4 = func_?(5,obj);
      if ((iVar4 == 0) ||
         (value = (Object *)
                  func_?(0,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                  ,iVar4),
         this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)(((KogamaSettingsCollectionBase *)obj)->fields)._.key,(Object *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this = this_00;
    }
    obj = (KogamaSettingWrapperBase *)
          (((KogamaSettingsCollectionBase *)obj)->fields)._._Parent_k__BackingField;
  } while( true );
}


/* Dictionary`2[System.Object,System.Object] GetSubTree(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetSubTree(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  pDStack_7 = this;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  for (pKVar8 = (KogamaSettingsCollectionBase *)obj; pKVar8 != (KogamaSettingsCollectionBase *)0x0;
      pKVar8 = (pKVar8->fields)._._Parent_k__BackingField) {
    pKVar9 = (KogamaSettingWrapperBase__Class *)pKVar8->klass;
    if (((pKVar9->_1).naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((pKVar9->_1).typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      if (((pKVar9->_1).naturalAligment <
           ((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )->naturalAligment) ||
         ((pKVar9->_1).typeHierarchy
          [((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )->naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      pDStack_10 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pKVar8->fields)._.key;
      iVar11 = func_?();
      if ((iVar11 == 0) ||
         (value = (Object *)
                  func_?(0,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                  ,iVar11), this = pDStack_7,
         pDStack_7 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDStack_7,(Object *)pDStack_10,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)(pKVar8->fields)._.key,
                 (Object *)pDStack_7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pDStack_7 = this;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?();
  pDStack_10 = this_00;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (obj,(Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
  while( true ) {
    if ((obj == (KogamaSettingWrapperBase *)0x0) ||
       (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0)) goto code_?;
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                       (Object *)(obj->fields).key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar12 != 0) break;
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &pDStack_14,(Dictionary_2_System_UInt32_System_Object_ *)this,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_15 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar13->_dictionary;
    DStack_6._version = pDVar13->_version;
    DStack_6._index = pDVar13->_index;
    DStack_6._current.key = (Object *)(pDVar13->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar13->_current).value;
    pDStack_16 = &DStack_6;
    uStack_1 = 1;
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (pDStack_16,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar12 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_17);
      uStack_1 = 0xffffffff;
    }
    else {
      if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )DStack_6._current.value ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)0x0;
      }
      else {
        bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((((((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                 *)(DStack_6._current.value)->klass)->_1).naturalAligment < bVar18) ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                *)(DStack_6._current.value)->klass)->_1).typeHierarchy[bVar18 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
           (this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)DStack_6._current.value,
           (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)DStack_6._current.value ==
           (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)0x0)) goto code_?;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_17);
      uStack_1 = 0xffffffff;
    }
  }
  key = (obj->fields).key;
  if (pDStack_10 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pDStack_10
                          ,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
               (Object *)value_00.m_Index,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    *unaff_FS_OFFSET = uStack_3;
    return (Dictionary_2_System_Object_System_Object_ *)pDStack_7;
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pDStack_14 = (Dictionary_2_System_UInt32_System_Object_ *)*puStack_19;
  func_?();
  return (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
}


/* Dictionary`2[System.Object,System.Object] KogamaSettingsToDictionary(KogamaSettingWrapperBase) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_KogamaSettingsToDictionary(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  key = (String *)obj;
  if (obj != (KogamaSettingWrapperBase *)0x0) {
    bVar7 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar7) ||
       ((obj->klass->_1).typeHierarchy[bVar7 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      bVar7 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
              ->_1).naturalAligment;
      pKVar8 = (KogamaSettingsCollectionBase__Class *)
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((obj->klass->_1).naturalAligment < bVar7) ||
         ((obj->klass->_1).typeHierarchy[bVar7 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      key = (obj->fields).key;
      iVar9 = (*obj->klass[1]._0.gc_desc)(obj,obj->klass[1]._0.name);
      if (iVar9 != 0) {
        value = (Object *)
                func_?(0,
                                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                ,iVar9);
        if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (settingsDictionary,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    else {
      pDStack_10 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDStack_10,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (settingsDictionary,(Object *)(obj->fields).key,(Object *)pDStack_10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        bVar7 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                ->_1).naturalAligment;
        pKVar8 = 
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
        ;
        if (((obj->klass->_1).naturalAligment < bVar7) ||
           ((obj->klass->_1).typeHierarchy[bVar7 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) goto code_?;
        if (obj[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffa8,
                              (Dictionary_2_System_UInt32_System_Object_ *)obj[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                             );
          uStack_12 = 0;
          DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
          DStack_6._version = pDVar11->_version;
          DStack_6._index = pDVar11->_index;
          DStack_6._current.key = (Object *)(pDVar11->_current).key;
          DStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
          uStack_1 = 1;
          pDStack_13 = &DStack_6;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                              );
            if (bVar14 == 0) break;
            KogamaSettingTools_KogamaSettingsToDictionary_1
                      ((KogamaSettingWrapperBase *)DStack_6._current.value,
                       (Dictionary_2_System_Object_System_Object_ *)pDStack_10,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                     ,in_stack_15);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  uVar16 = func_?();
  func_?(uVar16);
  pKVar8 = extraout_EDX;
  obj = (KogamaSettingWrapperBase *)key;
code_?:
  func_?(obj,pKVar8);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OverrideValues(KogamaSettingWrapperBase, KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_OverrideValues
               (KogamaSettingWrapperBase *target,KogamaSettingWrapperBase *source,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (target == (KogamaSettingWrapperBase *)0x0) {
    uVar4 = func_?(&TypeInfo__System__Exception);
    pEVar5 = (Exception *)func_?(uVar4);
    pMVar6 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?(&StringLiteral_Entry_not_found_in_target);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    return;
  }
  if (source == (KogamaSettingWrapperBase *)0x0) goto code_?;
  left = (XNamespace *)
         mscorlib.dll::System::Object::Object_GetType((Object *)source,(MethodInfo *)0x0);
  right = (XNamespace *)
          mscorlib.dll::System::Object::Object_GetType((Object *)target,(MethodInfo *)0x0);
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar8 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                    (left,right,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    pKVar9 = source->klass;
    bVar10 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (bVar10 <= (pKVar9->_1).naturalAligment) {
      if ((pKVar9->_1).typeHierarchy[bVar10 - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ) {
        bVar10 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                ->_1).naturalAligment;
        if ((bVar10 <= (target->klass->_1).naturalAligment) &&
           ((target->klass->_1).typeHierarchy[bVar10 - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          piVar11 = (int *)(*target->klass[1]._0.gc_desc)();
          bVar10 = (
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                  ->_1).naturalAligment;
          if ((bVar10 <= (source->klass->_1).naturalAligment) &&
             ((source->klass->_1).typeHierarchy[bVar10 - 1] ==
              (Il2CppClass *)
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             )) {
            iVar12 = (*source->klass[1]._0.gc_desc)();
            if ((iVar12 != 0) && (func_?(), piVar11 != (int *)0x0)) {
              iVar12 = *piVar11;
              uVar13 = 0;
              if (*(ushort *)(iVar12 + 0xb6) != 0) {
                do {
                  if (*(IKogamaSetting__Class **)(*(int *)(iVar12 + 0x58) + (uint)uVar13 * 8) ==
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting)
                  {
                    puVar14 = (undefined4 *)
                             (iVar12 + 200 +
                             *(int *)(*(int *)(iVar12 + 0x58) + 4 + (uint)uVar13 * 8) * 8);
                    goto code_?;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(iVar12 + 0xb6));
              }
              puVar14 = (undefined4 *)func_?();
code_?:
              (*(code *)*puVar14)();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      pKVar9 = source->klass;
    }
    bVar10 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((pKVar9->_1).naturalAligment < bVar10) ||
       ((pKVar9->_1).typeHierarchy[bVar10 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
      pEVar5 = (Exception *)func_?();
      pMVar6 = (MethodInfo *)0x0;
      pSVar7 = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
      func_?();
      func_?();
    }
    else {
      bVar10 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((target->klass->_1).naturalAligment < bVar10) ||
         ((target->klass->_1).typeHierarchy[bVar10 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      bVar10 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if ((bVar10 <= (source->klass->_1).naturalAligment) &&
         ((source->klass->_1).typeHierarchy[bVar10 - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        if (source[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          iVar12 = func_?();
          key = *(Object **)(iVar12 + 0xc);
          uVar15 = *(undefined8 *)(iVar12 + 0x10);
          uStack_1 = 1;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffffbc,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                              );
            if (bVar8 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffbc,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                         ,(MethodInfo *)in_stack_16.m_Index);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pKStack_17 = (KogamaSettingWrapperBase *)uVar15;
            if (target[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
            in_stack_16 =
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            target[1].klass,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                           );
            KogamaSettingTools_OverrideValues
                      ((KogamaSettingWrapperBase *)in_stack_16.m_Index,pKStack_17,
                       (MethodInfo *)0x0);
          }
        }
        goto code_?;
      }
    }
    func_?();
  }
  func_?();
  pEVar5 = (Exception *)func_?();
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
  func_?();
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__Exception);
  pEVar5 = (Exception *)func_?(uVar4);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_Source_is_null);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
  func_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (root == (KogamaSettingWrapperBase *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (callback !=
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    (*(callback->fields)._._.invoke_impl)
              ((callback->fields)._._.method_code,root,(callback->fields)._._.method);
    bVar6 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    if (((root->klass->_1).naturalAligment < bVar6) ||
       ((root->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    bVar6 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            ->_1).naturalAligment;
    pKVar7 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((root->klass->_1).naturalAligment < bVar6) ||
       ((root->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (root[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,
                          (Dictionary_2_System_UInt32_System_Object_ *)root[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_10._version = pDVar8->_version;
      DStack_10._index = pDVar8->_index;
      DStack_10._current.key = (Object *)(pDVar8->_current).key;
      DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_10;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar12 == 0) break;
        KogamaSettingTools_Traverse
                  ((KogamaSettingWrapperBase *)DStack_10._current.value,callback,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_10,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,in_stack_13);
      goto code_?;
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pKVar7 = extraout_EDX;
code_?:
  func_?(root,pKVar7);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


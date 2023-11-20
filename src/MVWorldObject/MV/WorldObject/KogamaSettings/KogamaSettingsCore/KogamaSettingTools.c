
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
    in_stack_6 =
         &
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    func_?();
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  pDVar8 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)prototype;
  if (prototype == (KogamaSettingWrapperBase *)0x0) {
code_?:
    if (factoryFunc !=
        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
         *)0x0) {
      pKVar9 = (KogamaSettingWrapperBase *)
               (*(factoryFunc->fields)._._.invoke_impl)
                         ((factoryFunc->fields)._._.method_code,valuePair.key,valuePair.value,
                          prototype,parent,(factoryFunc->fields)._._.method);
      *unaff_FS_OFFSET = uStack_3;
      return pKVar9;
    }
code_?:
    func_?();
    pOVar10 = extraout_ECX;
    pSVar11 = extraout_EDX;
code_?:
    uVar12 = func_?(pOVar10,pSVar11);
    func_?(uVar12);
    prototype = (KogamaSettingWrapperBase *)pDVar8;
code_?:
    func_?(prototype,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    valuePair.value = extraout_EDX_00;
  }
  else {
    pKVar13 = prototype->klass;
    if (((pKVar13->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      pKVar14 = (KogamaSettingsCollectionBase__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((pKVar13->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment) ||
         ((pKVar13->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      goto code_?;
    }
    pKVar14 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((pKVar13->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    parent_00 = (MethodInfo *)
                (*(code *)pKVar13[1]._0.namespaze)
                          (prototype,parent,pKVar13[1]._0.byval_arg.data.dummy);
    pMStack_15 = parent_00;
    if ((valuePair.value == (Object *)0x0) ||
       ((((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment <= ((valuePair.value)->klass->_1).naturalAligment &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          ((valuePair.value)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
        (valuePair.value != (Object *)0x0)))) {
      pKStack_16 = prototype->klass;
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment <= (pKStack_16->_1).naturalAligment) &&
         ((pKStack_16->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        if (valuePair.value != (Object *)0x0) {
          pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_18,
                              (Dictionary_2_System_UInt32_System_Object_ *)valuePair.value,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          pDVar8 = &DStack_7;
          uStack_19 = 0;
          DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar17->_dictionary;
          DStack_7._version = pDVar17->_version;
          DStack_7._index = pDVar17->_index;
          DStack_7._current.key = (Object *)(pDVar17->_current).key;
          DStack_7._16_8_ = *(undefined8 *)&(pDVar17->_current).value;
          uStack_1 = 1;
          pDStack_20 = pDVar8;
          while( true ) {
            bVar21 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar21 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)pDVar8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_6);
              *unaff_FS_OFFSET = uStack_3;
              return (KogamaSettingWrapperBase *)parent_00;
            }
            pOStack_22 = DStack_7._current.value;
            pOStack_23 = DStack_7._current.key;
            pKStack_16 = prototype[1].klass;
            if (pKStack_16 == (KogamaSettingWrapperBase__Class *)0x0) break;
            key = (Object *)0x0;
            if (DStack_7._current.key != (Object *)0x0) {
              if ((String__Class *)(DStack_7._current.key)->klass == TypeInfo__System__String) {
                key = DStack_7._current.key;
              }
              pOVar10 = DStack_7._current.key;
              pSVar11 = TypeInfo__System__String;
              if (key == (Object *)0x0) goto code_?;
            }
            prototype_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)pKStack_16,key,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                                     );
            valuePair_00.value = pOStack_22;
            valuePair_00.key = pOStack_23;
            in_stack_6 = (KogamaSettingValueWrapperBase__Class **)parent_00;
            pKVar9 = KogamaSettingTools_CreateFromValues_1
                               (valuePair_00,(KogamaSettingWrapperBase *)prototype_00.m_Index,
                                (KogamaSettingsCollectionBase *)parent_00,factoryFunc,
                                (MethodInfo *)0x0);
            if (parent_00 == (MethodInfo *)0x0) break;
            (*(code *)(((KogamaSettingsCollectionBase__Class *)parent_00->methodPointer)->vtable).
                      AddChild.method)
                      (parent_00,pKVar9,
                       (((KogamaSettingsCollectionBase__Class *)parent_00->methodPointer)->vtable).
                       CopyWithOutChildren.methodPtr);
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(valuePair.value,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pKVar14 = extraout_EDX_01;
code_?:
  func_?(prototype,pKVar14);
  pcVar24 = (code *)swi(3);
  pKVar9 = (KogamaSettingWrapperBase *)(*pcVar24)();
  return pKVar9;
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
  pKVar1 = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
  ;
  do {
    if (obj == (KogamaSettingWrapperBase *)0x0) {
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           = pKVar1;
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         = pKVar1;
    if (((((KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass)->_1).
         naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((((KogamaSettingWrapperBase__Class *)((KogamaSettingsCollectionBase *)obj)->klass)->_1).
        typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      iVar2 = func_?(obj,pKVar1);
      if (iVar2 == 0) {
        func_?(obj,pKVar1);
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
        return pDVar4;
      }
      key = *(Object **)(iVar2 + 8);
      iVar2 = func_?(5,iVar2);
      if ((iVar2 == 0) ||
         (value = (Object *)
                  func_?(0,
                                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                  ,iVar2),
         this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
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
    pKVar1 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
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
    if (((((KogamaSettingWrapperBase__Class *)pKVar8->klass)->_1).naturalAligment <
         ((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment) ||
       ((((KogamaSettingWrapperBase__Class *)pKVar8->klass)->_1).typeHierarchy
        [((Il2CppClass *)
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )->naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
      pDStack_7 = *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     **)(iVar9 + 8);
      iVar9 = func_?();
      if ((iVar9 == 0) ||
         (value = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(0,
                                     TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                     ,iVar9), pDVar10 = pDStack_7,
         this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)0x0)) goto code_?;
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
      pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(pKVar8->fields)._.key;
      value = pDStack_7;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pDVar10,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pDStack_7 = this;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?();
  pDStack_11 = pDVar10;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar10,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingTools_KogamaSettingsToDictionary_1
            (obj,(Dictionary_2_System_Object_System_Object_ *)pDVar10,(MethodInfo *)0x0);
  if (obj != (KogamaSettingWrapperBase *)0x0) {
    while (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)0x0) {
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                         (Object *)(obj->fields).key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar12 != 0) {
        key = (obj->fields).key;
        if (pDStack_11 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                pDStack_11,(Object *)(obj->fields).key,
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
        break;
      }
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
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
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (pDStack_16,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (((bVar12 != 0) &&
          (this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)DStack_6._current.value,
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )DStack_6._current.value !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0)) &&
         (((((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
              *)(DStack_6._current.value)->klass)->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment ||
          (((Dictionary_2_System_Object_System_Object___Class *)
            (((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
               *)(DStack_6._current.value)->klass)->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> ||
           ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)DStack_6._current.value ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0)))))) goto code_?;
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_17);
      uStack_1 = 0xffffffff;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pDStack_14 = (Dictionary_2_System_UInt32_System_Object_ *)*puStack_18;
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
    pKVar7 = obj->klass;
    if (((pKVar7->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar7->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      pKVar8 = (KogamaSettingsCollectionBase__Class *)
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((obj->klass->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment) ||
         ((obj->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment - 1] !=
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
      pKVar8 = 
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
      ;
      if (((pKVar7->_1).naturalAligment <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment) ||
         ((pKVar7->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (settingsDictionary,(Object *)(obj->fields).key,(Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (obj[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffb0,
                              (Dictionary_2_System_UInt32_System_Object_ *)obj[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                             );
          uStack_11 = 0;
          DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
          DStack_6._version = pDVar10->_version;
          DStack_6._index = pDVar10->_index;
          DStack_6._current.key = (Object *)(pDVar10->_current).key;
          DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
          uStack_1 = 1;
          pDStack_12 = &DStack_6;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                              );
            if (bVar13 == 0) break;
            KogamaSettingTools_KogamaSettingsToDictionary_1
                      ((KogamaSettingWrapperBase *)DStack_6._current.value,
                       (Dictionary_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                     ,in_stack_14);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pKVar8 = extraout_EDX;
  obj = (KogamaSettingWrapperBase *)key;
code_?:
  func_?(obj,pKVar8);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
  if (target == (KogamaSettingWrapperBase *)0x0) {
    uVar7 = func_?(&TypeInfo__System__Exception);
    pEVar8 = (Exception *)func_?(uVar7);
    pMVar9 = (MethodInfo *)0x0;
    pSVar10 = (String *)func_?(&StringLiteral_Entry_not_found_in_target);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
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
  pTVar11 = mscorlib.dll::System::Object::Object_GetType((Object *)source,(MethodInfo *)0x0);
  pTVar12 = mscorlib.dll::System::Object::Object_GetType((Object *)target,(MethodInfo *)0x0);
  if (pTVar11 == pTVar12) {
    pKVar13 = source->klass;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment <= (pKVar13->_1).naturalAligment) &&
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment <= (target->klass->_1).naturalAligment) &&
         ((target->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).naturalAligment - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        piVar14 = (int *)(*target->klass[1]._0.gc_desc)();
        pKVar13 = source->klass;
        if (((
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).naturalAligment <= (pKVar13->_1).naturalAligment) &&
           ((pKVar13->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).naturalAligment - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          iVar15 = (*pKVar13[1]._0.gc_desc)();
          if ((iVar15 != 0) &&
             (pDStack_16 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           func_?(), piVar14 != (int *)0x0)) {
            iStack_17 = *piVar14;
            uVar18 = 0;
            uStack_19 = 0;
            if (*(ushort *)(iStack_17 + 0xb6) != 0) {
              do {
                if (*(IKogamaSetting__Class **)(*(int *)(iStack_17 + 0x58) + (uint)uVar18 * 8) ==
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting) {
                  puVar20 = (undefined4 *)
                           (iStack_17 +
                           (*(int *)(*(int *)(iStack_17 + 0x58) + 4 + (uint)uVar18 * 8) + 0x19) * 8)
                  ;
                  goto code_?;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < *(ushort *)(iStack_17 + 0xb6));
            }
            puVar20 = (undefined4 *)func_?();
code_?:
            (*(code *)*puVar20)();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (((pKVar13->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
      pEVar8 = (Exception *)func_?();
      pMVar9 = (MethodInfo *)0x0;
      pSVar10 = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
      func_?();
      func_?();
code_?:
      func_?();
    }
    else if (((
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment <= (pKVar13->_1).naturalAligment) &&
            ((pKVar13->_1).typeHierarchy
             [(
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment - 1] ==
             (Il2CppClass *)
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            )) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment <= (target->klass->_1).naturalAligment) &&
         ((target->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).naturalAligment - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        if (source[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          puVar20 = (undefined4 *)func_?();
          uStack_21 = 0;
          DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar20;
          DStack_6._version = puVar20[1];
          DStack_6._index = puVar20[2];
          DStack_6._current.key = (Object *)puVar20[3];
          DStack_6._16_8_ = *(undefined8 *)(puVar20 + 4);
          uStack_1 = 1;
          pDStack_16 = &DStack_6;
          while( true ) {
            bVar22 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                              );
            if (bVar22 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                         ,(MethodInfo *)in_stack_23.m_Index);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            source_00 = DStack_6._current.value;
            if (target[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
            in_stack_23 =
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            target[1].klass,DStack_6._current.key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                           );
            KogamaSettingTools_OverrideValues
                      ((KogamaSettingWrapperBase *)in_stack_23.m_Index,
                       (KogamaSettingWrapperBase *)source_00,(MethodInfo *)0x0);
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    func_?();
  }
  func_?();
  pEVar8 = (Exception *)func_?();
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
  func_?();
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__System__Exception);
  pEVar8 = (Exception *)func_?(uVar7);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Source_is_null);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
  func_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
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
    if (((root->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((root->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    pKVar7 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((root->klass->_1).naturalAligment <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment) ||
       ((root->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).naturalAligment - 1] !=
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
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_6._version = pDVar8->_version;
      DStack_6._index = pDVar8->_index;
      DStack_6._current.key = (Object *)(pDVar8->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pDStack_10 = &DStack_6;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar11 == 0) break;
        KogamaSettingTools_Traverse
                  ((KogamaSettingWrapperBase *)DStack_6._current.value,callback,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,in_stack_12);
      goto code_?;
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
  pKVar7 = extraout_EDX;
code_?:
  func_?(root,pKVar7);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


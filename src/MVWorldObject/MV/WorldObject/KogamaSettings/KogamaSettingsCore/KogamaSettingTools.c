
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
  values = KogamaSettingTools_KogamaSettingsToDictionary(source,(MethodInfo *)0x0);
  pKVar1 = KogamaSettingTools_CreateFromValues(values,source,factoryFunc,(MethodInfo *)0x0);
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
  pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                      &stack0xffffffb0,values,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  method_00 = (Object__Class *)pDVar6->_dictionary;
  pSVar7 = (String *)(pDVar6->_current).key;
  valuePair = pDVar6->_current;
  uStack_1 = 1;
  do {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                       &stack0xffffffc8,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar8 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return (KogamaSettingWrapperBase *)0x0;
    }
    if (prototypeRoot == (KogamaSettingWrapperBase *)0x0) goto code_?;
    a = (String *)0x0;
    if (pSVar7 != (String *)0x0) {
      if (pSVar7->klass == TypeInfo__System__String) {
        a = pSVar7;
      }
      if (a == (String *)0x0) {
        func_?(pSVar7,TypeInfo__System__String);
        goto code_?;
      }
    }
    bVar8 = mscorlib.dll::System::String::String_op_Equality
                      (a,(prototypeRoot->fields).key,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      pKVar5 = KogamaSettingTools_CreateFromValues_1
                         (valuePair,prototypeRoot,(KogamaSettingsCollectionBase *)0x0,factoryFunc,
                          (MethodInfo *)0x0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if (((pKVar13->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      pKVar14 = (KogamaSettingsCollectionBase__Class *)
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((pKVar13->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth) ||
         ((pKVar13->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      goto code_?;
    }
    pKVar14 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((pKVar13->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    parent_00 = (MethodInfo *)(*(code *)pKVar13[1]._0.name)(prototype,parent,pKVar13[1]._0.namespaze);
    pMStack_15 = parent_00;
    if ((valuePair.value == (Object *)0x0) ||
       ((((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth <= ((valuePair.value)->klass->_1).typeHierarchyDepth &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          ((valuePair.value)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
        (valuePair.value != (Object *)0x0)))) {
      pKStack_16 = prototype->klass;
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth <= (pKStack_16->_1).typeHierarchyDepth) &&
         ((pKStack_16->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        if (valuePair.value != (Object *)0x0) {
          pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             (&DStack_18,
                              (Dictionary_2_System_Object_System_Object_ *)valuePair.value,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          pDVar8 = &DStack_7;
          uStack_19 = 0;
          DStack_7._dictionary = pDVar17->_dictionary;
          DStack_7._version = pDVar17->_version;
          DStack_7._index = pDVar17->_index;
          DStack_7._current.key = (pDVar17->_current).key;
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
            pKVar9 = (KogamaSettingWrapperBase *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)pKStack_16,key,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                               );
            valuePair_00.value = pOStack_22;
            valuePair_00.key = pOStack_23;
            in_stack_6 = (KogamaSettingValueWrapperBase__Class **)parent_00;
            pKVar9 = KogamaSettingTools_CreateFromValues_1
                               (valuePair_00,pKVar9,(KogamaSettingsCollectionBase *)parent_00,
                                factoryFunc,(MethodInfo *)0x0);
            if (parent_00 == (MethodInfo *)0x0) break;
            (*(((KogamaSettingsCollectionBase__Class *)parent_00->methodPointer)->vtable).AddChild.
              methodPtr)(parent_00,pKVar9,
                         (((KogamaSettingsCollectionBase__Class *)parent_00->methodPointer)->vtable)
                         .AddChild.method);
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
  values = KogamaSettingTools_KogamaSettingsToDictionary(prototypeRoot,(MethodInfo *)0x0);
  target = KogamaSettingTools_CreateFromValues(values,prototypeRoot,factoryFunc,(MethodInfo *)0x0);
  if (source != (KogamaSettingWrapperBase *)0x0) {
    KogamaSettingTools_OverrideValues(target,source,(MethodInfo *)0x0);
  }
  return target;
}


/* Void EnforceSettingsConstraints(AttributeSettingWoType,
   Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_EnforceSettingsConstraints
               (AttributeSettingWoType__Enum attributeSettingWoType,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    cRam_? = '\x01';
  }
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar1 = SpecializedSettingsTypes::AttributeSettings::AttributePrototypeSettings::
           AttributePrototypeSettingsManager::AttributePrototypeSettingsManager_GetRoot
                     (attributeSettingWoType,(MethodInfo *)0x0);
  this = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
          *)func_?(
                           TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  if (this != (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
               *)0x0) {
    mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System
    ::Object],Object,Object,Object]::
    Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
              (this,(Object *)0x0,
               MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingsFactory__KogamaSettingValueFactory_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
               ,(MethodInfo *)0x0);
    pKVar1 = KogamaSettingTools_CreateFromValues
                       (data,pKVar1,
                        (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                         *)this,(MethodInfo *)0x0);
    if (pKVar1 != (KogamaSettingWrapperBase *)0x0) {
      source = KogamaSettingTools_KogamaSettingsToDictionary(pKVar1,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (data,source,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* KogamaSettingWrapperBase GetRoot(KogamaSettingWrapperBase) */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
KogamaSettingTools_GetRoot(KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (obj == (KogamaSettingWrapperBase *)0x0) {
    uVar2 = func_?(auStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    pKVar5 = (KogamaSettingWrapperBase *)(*pcVar4)();
    return pKVar5;
  }
  for (; (((KogamaSettingsCollectionBase *)obj)->fields)._._Parent_k__BackingField !=
         (KogamaSettingsCollectionBase *)0x0;
      obj = (KogamaSettingWrapperBase *)
            (((KogamaSettingsCollectionBase *)obj)->fields)._._Parent_k__BackingField) {
  }
  return obj;
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    unaff_ESI = (KogamaSettingsCollectionBase *)obj;
    unaff_EBX = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    do {
      if (unaff_ESI == (KogamaSettingsCollectionBase *)0x0) {
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             = unaff_EBX;
        return pDVar1;
      }
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           = unaff_EBX;
      if (((((KogamaSettingWrapperBase__Class *)unaff_ESI->klass)->_1).typeHierarchyDepth <
           ((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )->typeHierarchyDepth) ||
         ((((KogamaSettingWrapperBase__Class *)unaff_ESI->klass)->_1).typeHierarchy
          [((Il2CppClass *)
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )->typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        iVar2 = func_?(unaff_ESI,unaff_EBX);
        if (iVar2 == 0) goto code_?;
        unaff_EBX = *(KogamaSettingValueWrapperBase__Class **)(iVar2 + 8);
        iVar2 = func_?(5,iVar2);
        if ((iVar2 == 0) ||
           (value = (Object *)
                    func_?(0,
                                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                                    ,iVar2),
           pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)unaff_EBX,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      else {
        this = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        unaff_EBX = (KogamaSettingValueWrapperBase__Class *)0x0;
        if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)(unaff_ESI->fields)._.key,(Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pDVar1 = this;
      }
      unaff_ESI = (unaff_ESI->fields)._._Parent_k__BackingField;
      unaff_EBX = 
      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
    } while( true );
  }
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EBX);
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar1;
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
  }
  pOStack_4 = (Object__Class *)0x0;
  pDVar5 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           KogamaSettingTools_GetSettingBranch(obj,(MethodInfo *)0x0);
  this = KogamaSettingTools_KogamaSettingsToDictionary(obj,(MethodInfo *)0x0);
  pDStack_6 = pDVar5;
  if (obj != (KogamaSettingWrapperBase *)0x0) {
    while (pDStack_6 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDStack_6,(Object *)(obj->fields).key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar7 != 0) {
        key = (obj->fields).key;
        if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this,(Object *)(obj->fields).key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_6,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return (Dictionary_2_System_Object_System_Object_ *)pDVar5;
        }
        break;
      }
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffa8,(Dictionary_2_System_Object_System_Object_ *)pDStack_6,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                         );
      pOStack_4 = (Object__Class *)pDVar8->_dictionary;
      method_00 = (MethodInfo *)(pDVar8->_current).key;
      uVar9 = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         &pOStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (((bVar7 != 0) &&
          (pDStack_6 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)uVar9,
          pDStack_6 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) &&
         (((pDStack_6->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth ||
          (((Dictionary_2_System_Object_System_Object___Class *)
            (pDStack_6->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> ||
           (pDStack_6 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))))))
      goto code_?;
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
    }
  }
  func_?();
code_?:
  func_?();
  pOStack_4 = (Object__Class *)*puStack_10;
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    KogamaSettingTools_KogamaSettingsToDictionary_1(obj,pDVar1,(MethodInfo *)0x0);
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
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
    if (((pKVar7->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar7->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      pKVar8 = (KogamaSettingsCollectionBase__Class *)
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
      ;
      if (((obj->klass->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth) ||
         ((obj->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) goto code_?;
      key = (obj->fields).key;
      iVar9 = (*(code *)obj->klass[1]._0.image)(obj,obj->klass[1]._0.gc_desc);
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
      if (((pKVar7->_1).typeHierarchyDepth <
           (
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth) ||
         ((pKVar7->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) goto code_?;
      settingsDictionary_00 =
           (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
      if (settingsDictionary_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)settingsDictionary_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (settingsDictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (settingsDictionary,(Object *)(obj->fields).key,(Object *)settingsDictionary_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if (obj[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
            pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                                &stack0xffffffb0,
                                (Dictionary_2_System_Object_System_Object_ *)obj[1].klass,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                               );
            uStack_11 = 0;
            DStack_6._dictionary = pDVar10->_dictionary;
            DStack_6._version = pDVar10->_version;
            DStack_6._index = pDVar10->_index;
            DStack_6._current.key = (pDVar10->_current).key;
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
                        ((KogamaSettingWrapperBase *)DStack_6._current.value,settingsDictionary_00,
                         (MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
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
    func_?(pEVar8);
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
         ->_1).typeHierarchyDepth <= (pKVar13->_1).typeHierarchyDepth) &&
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth <= (target->klass->_1).typeHierarchyDepth) &&
         ((target->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         )) {
        piVar14 = (int *)(*(code *)target->klass[1]._0.image)();
        pKVar13 = source->klass;
        if (((
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).typeHierarchyDepth <= (pKVar13->_1).typeHierarchyDepth) &&
           ((pKVar13->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
             ->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          iVar15 = (*(code *)pKVar13[1]._0.image)();
          if (iVar15 != 0) {
            pDStack_16 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         func_?();
            if (piVar14 != (int *)0x0) {
              uVar17 = 0;
              uVar18 = *(ushort *)(*piVar14 + 0xb2);
              if (uVar18 != 0) {
                do {
                  if (*(IKogamaSetting__Class **)(*(int *)(*piVar14 + 0x58) + (uint)uVar17 * 8) ==
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting)
                  {
                    puVar19 = (undefined4 *)
                              (*(int *)(*(int *)(*piVar14 + 0x58) + 4 + (uint)uVar17 * 8) * 8 + 0xc4
                              + *piVar14);
                    goto code_?;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar18);
              }
              puVar19 = (undefined4 *)func_?();
code_?:
              (*(code *)*puVar19)();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (((pKVar13->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar13->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) {
      func_?();
      pEVar8 = (Exception *)func_?();
      func_?();
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
              ->_1).typeHierarchyDepth <= (pKVar13->_1).typeHierarchyDepth) &&
            ((pKVar13->_1).typeHierarchy
             [(
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).typeHierarchyDepth - 1] ==
             (Il2CppClass *)
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            )) {
      if (((
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth <= (target->klass->_1).typeHierarchyDepth) &&
         ((target->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           ->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        if (source[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          puVar19 = (undefined4 *)func_?();
          uStack_20 = 0;
          DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar19;
          DStack_6._version = puVar19[1];
          DStack_6._index = puVar19[2];
          DStack_6._current.key = (Object *)puVar19[3];
          DStack_6._16_8_ = *(undefined8 *)(puVar19 + 4);
          uStack_1 = 1;
          pDStack_16 = &DStack_6;
          while( true ) {
            bVar21 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                              );
            if (bVar21 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                         ,in_stack_22);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            source_00 = DStack_6._current.value;
            if (target[1].klass == (KogamaSettingWrapperBase__Class *)0x0) break;
            in_stack_22 =
                 (MethodInfo *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)target[1].klass,
                            DStack_6._current.key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                           );
            KogamaSettingTools_OverrideValues
                      ((KogamaSettingWrapperBase *)in_stack_22,
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
  func_?();
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
  func_?();
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__System__Exception);
  pEVar8 = (Exception *)func_?(uVar7);
  func_?(pEVar8);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Source_is_null);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar8,pSVar10,pMVar9);
  func_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools__OverrideValues_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Boolean RootDestinationContains(KogamaSettingWrapperBase, KogamaSettingWrapperBase) */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_RootDestinationContains
               (KogamaSettingWrapperBase *obj,KogamaSettingWrapperBase *destinationNode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools____c__DisplayClass1___RootDestinationContains_b__0_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools____c__DisplayClass1
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools____c__DisplayClass1
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)destinationNode;
    func_?(&value[1].monitor,destinationNode);
    data = KogamaSettingTools_GetSettingBranch(obj,(MethodInfo *)0x0);
    *(undefined1 *)&value[1].klass = 1;
    this = (UnityAction_1_UnityEngine_Vector2_ *)
           func_?(
                          TypeInfo__System__Action<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>_>
                          );
    if (this != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this,value,
                 MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTools____c__DisplayClass1___RootDestinationContains_b__0_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      KogamaSettingTools_Traverse_1
                (data,(Action_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
                       *)this,(MethodInfo *)0x0);
      return *(bool *)&value[1].klass;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
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
    if (((root->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((root->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    pKVar7 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((root->klass->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((root->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (root[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffb0,
                          (Dictionary_2_System_Object_System_Object_ *)root[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      uStack_9 = 0;
      DStack_6._dictionary = pDVar8->_dictionary;
      DStack_6._version = pDVar8->_version;
      DStack_6._index = pDVar8->_index;
      DStack_6._current.key = (pDVar8->_current).key;
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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


/* Void Traverse(Dictionary`2[System.Object,System.Object],
   Action`1[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object]]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_Traverse_1
               (Dictionary_2_System_Object_System_Object_ *data,
               Action_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
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
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffb0,data,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar10 == 0) break;
      data_00.value = DStack_6._current.value;
      data_00.key = DStack_6._current.key;
      KogamaSettingTools_Traverse_2(data_00,callback,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,in_stack_11);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Traverse(KeyValuePair`2[System.Object,System.Object],
   Action`1[System.Collections.Generic.KeyValuePair`2[System.Object,System.Object]]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTools::
     KogamaSettingTools_Traverse_2
               (KeyValuePair_2_System_Object_System_Object_ data,
               Action_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
               *callback,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (callback !=
      (Action_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    (*(callback->fields)._._.invoke_impl)
              ((callback->fields)._._.method_code,data.key,data.value,(callback->fields)._._.method)
    ;
    if ((((data.value != (Object *)0x0) &&
         ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth <= ((data.value)->klass->_1).typeHierarchyDepth)) &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         ((data.value)->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
       (data.value != (Object *)0x0)) {
      pDVar7 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((((data.value)->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          ((data.value)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffb8,(Dictionary_2_System_Object_System_Object_ *)data.value,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_6._dictionary = pDVar8->_dictionary;
      DStack_6._version = pDVar8->_version;
      DStack_6._index = pDVar8->_index;
      DStack_6._current.key = (pDVar8->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar9 == 0) break;
        data_00.value = DStack_6._current.value;
        data_00.key = DStack_6._current.key;
        KogamaSettingTools_Traverse_2(data_00,callback,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,in_stack_10);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar11 = func_?();
  func_?(uVar11);
  pDVar7 = extraout_EDX;
  data.value = unaff_ESI;
code_?:
  func_?(data.value,pDVar7);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}



/* Boolean ValidateDeltaChild(IAttributeSetting, KogamaSettingWrapperBase,
   AttributeSettingsExclusivityFlag) */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsValidation::AttributeSettingsValidation_ValidateDeltaChild
               (IAttributeSetting *rootDeltaChild,KogamaSettingWrapperBase *rootDestination,
               AttributeSettingsExclusivityFlag__Enum destinationExclusivityFlag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase
                   );
    cRam_? = '\x01';
  }
  if (rootDeltaChild == (IAttributeSetting *)0x0) {
    obj = (KogamaSettingWrapperBase *)0x0;
  }
  else if (((rootDeltaChild->klass->_1).typeHierarchyDepth <
            (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase
            ->_1).typeHierarchyDepth) ||
          (obj = (KogamaSettingWrapperBase *)rootDeltaChild,
          (rootDeltaChild->klass->_1).typeHierarchy
          [(
           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase
           ->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase
          )) {
    func_?(rootDeltaChild,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase
                   );
    goto code_?;
  }
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
    value[1].monitor = (MonitorData *)rootDestination;
    func_?(&value[1].monitor,rootDestination);
    data = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSettingBranch
                     (obj,(MethodInfo *)0x0);
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
      KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse_1
                (data,(Action_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
                       *)this,(MethodInfo *)0x0);
      cVar1 = *(char *)&value[1].klass;
      if (rootDeltaChild != (IAttributeSetting *)0x0) {
        AVar2 = func_?(1,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                ,rootDeltaChild);
        if (cVar1 != '\0') {
          return 1;
        }
        return (destinationExclusivityFlag & AVar2) == AttributeSettingsExclusivityFlag__Enum_None;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean ValidateUpdate(KogamaSettingWrapperBase, KogamaSettingWrapperBase) */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsValidation::AttributeSettingsValidation_ValidateUpdate
               (KogamaSettingWrapperBase *rootDelta,KogamaSettingWrapperBase *rootDestination,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsValidation____c__DisplayClass1___ValidateUpdate_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsValidation____c__DisplayClass1
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsValidation____c__DisplayClass1
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    this = (Action_1_Object_ *)
           func_?(
                          TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                          );
    if (this != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this,value,
                 MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsValidation____c__DisplayClass1___ValidateUpdate_b__0_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 ,(MethodInfo *)0x0);
      KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_Traverse
                (rootDestination,
                 (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                  *)this,(MethodInfo *)0x0);
      bVar1 = AttributeSettingsValidation_ValidateUpdateRecursion
                        (rootDelta,rootDestination,
                         (AttributeSettingsExclusivityFlag__Enum)value[1].klass,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean ValidateUpdateRecursion(KogamaSettingWrapperBase, KogamaSettingWrapperBase,
   AttributeSettingsExclusivityFlag) */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsValidation::AttributeSettingsValidation_ValidateUpdateRecursion
               (KogamaSettingWrapperBase *rootDelta,KogamaSettingWrapperBase *rootDestination,
               AttributeSettingsExclusivityFlag__Enum destinationExclusivityFlag,MethodInfo *method)

{
  pSStack_1 = (String *)0xffffffff;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
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
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
  }
  if (rootDestination == (KogamaSettingWrapperBase *)0x0) {
code_?:
    *unaff_FS_OFFSET = pOStack_3;
    return 1;
  }
  if (rootDelta == (KogamaSettingWrapperBase *)0x0) {
    uVar4 = func_?(&TypeInfo__System__Exception);
    rootDelta = (KogamaSettingWrapperBase *)func_?(uVar4);
    func_?(rootDelta);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_delta_root_can_not_be_null);
    mscorlib.dll::System::Exception::Exception__ctor_1((Exception *)rootDelta,message,method_00);
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsValidation__ValidateUpdateRecursion_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag_
                   );
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pKVar5 = rootDelta->klass;
    if (((pKVar5->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar5->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    pKVar6 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
    ;
    if (((pKVar5->_1).typeHierarchyDepth <
         (
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth) ||
       ((pKVar5->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         ->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
       )) goto code_?;
    if (rootDelta[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffac,
                          (Dictionary_2_System_Object_System_Object_ *)rootDelta[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                         );
      rootDelta = (KogamaSettingWrapperBase *)&stack0xffffffc4;
      method_01 = (Exception__Class *)pDVar7->_dictionary;
      uVar8 = *(undefined8 *)&(pDVar7->_current).value;
      pSStack_1 = (String *)0x1;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           &stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                          );
        if (bVar9 == 0) break;
        pKStack_10 = (KogamaSettingWrapperBase *)uVar8;
        if ((((pKStack_10 == (KogamaSettingWrapperBase *)0x0) ||
             ((pKStack_10->klass->_1).typeHierarchyDepth <
              (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).typeHierarchyDepth)) ||
            ((pKStack_10->klass->_1).typeHierarchy
             [(
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).typeHierarchyDepth - 1] !=
             (Il2CppClass *)
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
            )) || (pKStack_10 == (KogamaSettingWrapperBase *)0x0)) {
          if (pKStack_10 == (KogamaSettingWrapperBase *)0x0) {
            rootDeltaChild = (IAttributeSetting *)0x0;
          }
          else {
            rootDeltaChild = (IAttributeSetting *)func_?();
            if (rootDeltaChild == (IAttributeSetting *)0x0) goto code_?;
          }
          bVar9 = AttributeSettingsValidation_ValidateDeltaChild
                            (rootDeltaChild,rootDestination,destinationExclusivityFlag,
                             (MethodInfo *)0x0);
        }
        else {
          bVar9 = AttributeSettingsValidation_ValidateUpdateRecursion
                            (pKStack_10,rootDestination,destinationExclusivityFlag,(MethodInfo *)0x0
                            );
        }
        if (bVar9 == 0) {
          pSStack_1 = (String *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)rootDelta,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                     ,(MethodInfo *)method_01);
          *unaff_FS_OFFSET = pOStack_3;
          return 0;
        }
      }
      pSStack_1 = (String *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)rootDelta,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 ,in_stack_11);
      goto code_?;
    }
  }
  func_?();
  pKVar6 = extraout_EDX;
code_?:
  func_?(rootDelta,pKVar6);
  pcVar12 = (code *)swi(3);
  bVar9 = (*pcVar12)();
  return bVar9;
}


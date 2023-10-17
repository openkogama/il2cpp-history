
/* Void SetKogamaPackageToProfileID(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaDataPackage::
     KogamaDataPackage_SetKogamaPackageToProfileID
               (KogamaDataPackage *this,int32_t profileID,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MVPrototype>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MVPrototype>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MVPrototype>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVPrototype>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).prototypes;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MVPrototype>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MVPrototype>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (DStack_6._current.value == (Object *)0x0) break;
      DStack_6._current.value[4].klass = (Object__Class *)profileID;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaDataPackage::KogamaDataPackage_ToString
                   (KogamaDataPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Prototypes_);
    func_?(&StringLiteral__WorldObjects_);
    func_?(&StringLiteral__ObjectLinks_);
    func_?(&StringLiteral__rootIdWo_);
    func_?(&StringLiteral__Links_);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,10);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_Prototypes_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Prototypes_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral_Prototypes_;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Prototypes_;
    func_?(args->vector,pSVar3);
    pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).prototypes;
    if (pDVar4 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    iStack_5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                         (pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__get_Count__
                         );
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar6;
    func_?(args->vector + 1,pOVar6);
    if ((StringLiteral__WorldObjects_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__WorldObjects_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral__WorldObjects_;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__WorldObjects_;
    func_?(args->vector + 2,pSVar3);
    pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).worldObjects;
    if (pDVar4 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    iStack_7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                         (pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>__get_Count__
                         );
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar6;
    func_?(args->vector + 3,pOVar6);
    if ((StringLiteral__Links_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__Links_,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral__Links_;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral__Links_;
    func_?(args->vector + 4,pSVar3);
    pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).links;
    if (pDVar4 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    iStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (pDVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                          );
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar6;
    func_?(args->vector + 5,pOVar6);
    if ((StringLiteral__ObjectLinks_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__ObjectLinks_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral__ObjectLinks_;
    if (args->max_length < 7) goto code_?;
    args->vector[6] = (Object *)StringLiteral__ObjectLinks_;
    func_?(args->vector + 6,pSVar3);
    pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).objectLinks;
    if (pDVar4 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    iStack_9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (pDVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                          );
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 8) goto code_?;
    args->vector[7] = pOVar6;
    func_?(args->vector + 7,pOVar6);
    if ((StringLiteral__rootIdWo_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__rootIdWo_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral__rootIdWo_;
    if (args->max_length < 9) goto code_?;
    args->vector[8] = (Object *)StringLiteral__rootIdWo_;
    func_?(args->vector + 8,pSVar3);
    iStack_10 = (this->fields).rootIdWo;
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
    if ((pOVar6 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 != 0)) {
      if (9 < args->max_length) {
        args->vector[9] = pOVar6;
        func_?(args->vector + 9,pOVar6);
        pSVar3 = mscorlib.dll::System::String::String_Concat_2(args,(MethodInfo *)0x0);
        return pSVar3;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar11)();
  return pSVar3;
}


/* KogamaDataPackage() */

void MVWorldObject.dll::MV::WorldObject::KogamaDataPackage::KogamaDataPackage__ctor
               (KogamaDataPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>)
    ;
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                   );
    cRam_? = '\x01';
  }
  (this->fields).rootIdWo = -1;
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVPrototype_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVPrototype_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVPrototype>__Dictionary__
              );
    (this->fields).prototypes = this_00;
    func_?(&(this->fields).prototypes,this_00);
    this_01 = (Dictionary_2_System_Int32_MV_WorldObject_MVWorldObject_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_MVWorldObject_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVWorldObject>__Dictionary__
                );
      (this->fields).worldObjects = this_01;
      func_?(&(this->fields).worldObjects,this_01);
      this_02 = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                               );
      if (this_02 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                  );
        (this->fields).links = this_02;
        func_?(&(this->fields).links,this_02);
        this_03 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                                 );
        if (this_03 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                    );
          method_00 = (MethodInfo *)&(this->fields).objectLinks;
          (this->fields).objectLinks = this_03;
          func_?(method_00,this_03);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,method_00);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


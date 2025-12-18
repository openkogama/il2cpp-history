
/* List`1[System.String] GetMigratedDataKeysBasedOnVersion(Int32) */

List_1_System_String_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
MvTextMsgData_GetMigratedDataKeysBasedOnVersion(int32_t version,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (version == 2) {
    return (List_1_System_String_ *)0x0;
  }
  collection = (IEnumerable_1_System_Object_ *)FUN_?(TypeInfo__System__String,1);
  if (collection != (IEnumerable_1_System_Object_ *)0x0) {
    FUN_?(collection,0,StringLiteral_version);
    pLVar1 = (List_1_System_String_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar1,collection,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    if (version == 1) {
      if (pLVar1 == (List_1_System_String_ *)0x0) goto DAT_?;
      FUN_?(pLVar1,StringLiteral_text,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    }
    return pLVar1;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_System_String_ *)(*pcVar2)();
  return pLVar1;
}


/* Single MaxValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
      MvTextMsgData_MaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
         maxValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
  ;
  fVar2 = _UNK_?;
  if ((
      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    return fVar2;
  }
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar5 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
    pvVar5 = (void *)FUN_?(pvVar5);
  }
  lVar6 = FUN_?(pOVar4,pvVar5);
  if (lVar6 == 0) {
    pvVar5 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar5 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(pvVar5,1);
    plVar7 = (longlong *)FUN_?(lVar6 + 0x20);
    if (plVar7 == (longlong *)0x0) goto code_?;
    cVar8 = (**(code **)(*plVar7 + 0x588))(plVar7,*(undefined8 *)(*plVar7 + 0x590));
    if (cVar8 == '\0') {
      return fVar2;
    }
    if (pOVar4 == (Object *)0x0) {
      return fVar2;
    }
    pOVar9 = (Object *)0x0;
    if (pOVar4->klass == pORam0000000182dc5078) {
      pOVar9 = pOVar4;
    }
    if (pOVar9 == (Object *)0x0) {
      return fVar2;
    }
  }
  lVar6 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_?(lVar6);
  }
  if (pOVar4 != (Object *)0x0) {
    if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lVar6 + 0x40)) {
      return *(float *)&pOVar4[1].klass;
    }
    FUN_?(pOVar4,lVar6);
    pcVar10 = (code *)swi(3);
    fVar2 = (float)(*pcVar10)();
    return fVar2;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar2 = (float)(*pcVar10)();
  return fVar2;
}


/* Dictionary`2[System.Object,System.Object]
   MigrateDataBasedOnVersion(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
MvTextMsgData_MigrateDataBasedOnVersion
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__MatchEvaluator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData____c__DisplayClass9_0___MigrateDataBasedOnVersion_b__0_System__Text__RegularExpressions__Match_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData____c__DisplayClass9_0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__size___d___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_version);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData____c__DisplayClass9_0
                        );
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)data;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pOVar6 = object[1].klass;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar7 = Extensions::Extensions_GetValueOrDefault_2
                      ((Dictionary_2_System_Object_System_Object_ *)pOVar6,StringLiteral_version,1,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if ((IVar7 == 2) || (IVar7 != 1)) {
code_?:
      return (Dictionary_2_System_Object_System_Object_ *)object[1].klass;
    }
    pOVar6 = object[1].klass;
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    }
    pDVar8 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
             DefaultData;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_text,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      defaultValue = (Object *)0x0;
      if (pOVar9 != (Object *)0x0) {
        if (pOVar9->klass == pORam0000000182dc50c0) {
          defaultValue = pOVar9;
        }
        if (defaultValue == (Object *)0x0) {
          FUN_?(pOVar9);
          pcVar10 = (code *)swi(3);
          pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar10)();
          return pDVar8;
        }
      }
      pSVar11 = (String *)
               Extensions::Extensions_GetValueOrDefault_3
                         ((Dictionary_2_System_Object_System_Object_ *)pOVar6,StringLiteral_text,
                          defaultValue,
                          System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                         );
      this = (ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             FUN_?(TypeInfo__System__Text__RegularExpressions__MatchEvaluator);
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType]::
      ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this,object,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData____c__DisplayClass9_0___MigrateDataBasedOnVersion_b__0_System__Text__RegularExpressions__Match_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
        FUN_?();
      }
      pattern = StringLiteral__size___d___;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
        FUN_?();
      }
      matchTimeout._ticks =
           (TypeInfo__System__Text__RegularExpressions__Regex->static_fields->s_defaultMatchTimeout)
           ._ticks;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
      System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_3
                (this_00,pattern,RegexOptions__Enum_None,matchTimeout,1,(MethodInfo *)0x0);
      if (this_00 != (Regex *)0x0) {
        if (pSVar11 == (String *)0x0) {
          uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
          this_01 = (ArgumentNullException *)func_?(uVar12);
          pSVar11 = (String *)func_?(&StringLiteral_input);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_01,pSVar11,(MethodInfo *)0x0);
          uVar12 = func_?(&
                                       MethodInfo__System__Text__RegularExpressions__Regex__Replace_System__String__System__Text__RegularExpressions__MatchEvaluator_
                                      );
          FUN_?(this_01,uVar12);
          pcVar10 = (code *)swi(3);
          pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar10)();
          return pDVar8;
        }
        if (((this_00->fields).roptions & 0x40) == 0) {
          startat = 0;
        }
        else {
          startat = (pSVar11->fields)._stringLength;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar12 = 0xffffffff;
        pSVar11 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace_8
                           ((MatchEvaluator *)this,this_00,pSVar11,-1,startat,(MethodInfo *)0x0);
        if (object[1].klass != (Object__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)object[1].klass,
                     (Object *)StringLiteral_text,(Object *)pSVar11,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar10)();
  return pDVar8;
}


/* Single MinValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
      MvTextMsgData_MinValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
         minValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
  ;
  if ((
      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
    return 0.0;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar4 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  lVar5 = FUN_?(pOVar3,pvVar4);
  if (lVar5 == 0) {
    pvVar4 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar4 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pvVar4,1);
    plVar6 = (longlong *)FUN_?(lVar5 + 0x20);
    if (plVar6 == (longlong *)0x0) goto code_?;
    cVar7 = (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
    if ((cVar7 == '\0') || (pOVar3 == (Object *)0x0)) {
      return 0.0;
    }
    pOVar8 = (Object *)0x0;
    if (pOVar3->klass == pORam0000000182dc5078) {
      pOVar8 = pOVar3;
    }
    if (pOVar8 == (Object *)0x0) {
      return 0.0;
    }
  }
  lVar5 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_?(lVar5);
  }
  if (pOVar3 != (Object *)0x0) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lVar5 + 0x40)) {
      FUN_?(pOVar3,lVar5);
      pcVar9 = (code *)swi(3);
      fVar10 = (float)(*pcVar9)();
      return fVar10;
    }
    return *(float *)&pOVar3[1].klass;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float)(*pcVar9)();
  return fVar10;
}


/* MvTextMsgData() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
     MvTextMsgData__cctor(MethodInfo *method)

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
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&_13AC5D639E46A8417678C76D1EADC8C36ADC8114D496430ED3E78AD584C3EB36_Field);
    LOCK();
    UNLOCK();
    FUN_?(&F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fontSelection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundWidth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textUnderscored);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundRadius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textItalic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_version);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_background);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_10 = 2;
  pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_version,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_text,
               (Object *)StringLiteral_test,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    lVar5 = lRam_?;
    pOVar2 = (Object *)0x0;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar7 & 0x3f);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
    }
    else {
      pOVar6 = (Object *)((ulonglong)uStackX_14 << 0x20);
    }
    uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_fontSelection,pOVar6,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3e4ccccd;
    pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_textSize,
               pOVar6,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0;
    pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_textThickness,pOVar6,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar12,_F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field,
               (MethodInfo *)0x0);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_textColor
               ,(Object *)pAVar12,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar7 = uStackX_10;
    lVar5 = lRam_?;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar7 & 0x3f);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
    }
    else {
      pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
    }
    uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_textOutline,pOVar6,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3dcccccd;
    pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_textOutlineThickness,pOVar6,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar6 = (Object *)FUN_?(TypeInfo__System__Single,4);
    if (pOVar6 != (Object *)0x0) {
      if (*(uint *)&pOVar6[1].monitor < 4) {
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(undefined4 *)((longlong)&pOVar6[2].monitor + 4) = 0x3f800000;
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_textOutlineColor,pOVar6,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar7 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar7 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_textItalic,pOVar6,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar7 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar7 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_textUnderscored,pOVar6,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar7 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar7 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
      }
      uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_background,pOVar6,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x41f00000;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_backgroundWidth,pOVar6,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pOVar6 = (Object *)FUN_?(TypeInfo__System__Single,4);
      if (pOVar6 != (Object *)0x0) {
        if (*(uint *)&pOVar6[1].monitor < 4) goto code_?;
        *(undefined4 *)((longlong)&pOVar6[2].monitor + 4) = 0x3f000000;
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_backgroundColor,pOVar6,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x41200000;
        pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_backgroundRadius,pOVar6,(InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar7 = uStackX_10;
        lVar5 = lRam_?;
        uStackX_10 = uStackX_10 & 0xffffff00;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             (pOVar6 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar6 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              uVar4 = (ulonglong)(uVar7 & 0x3f);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << uVar4;
                }
                UNLOCK();
              } while (!bVar11);
            }
          }
        }
        else {
          pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
        }
        uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_backgroundOutline,pOVar6,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x40000000;
        pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_backgroundOutlineThickness,pOVar6,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  (pAVar12,__13AC5D639E46A8417678C76D1EADC8C36ADC8114D496430ED3E78AD584C3EB36_Field,
                   (MethodInfo *)0x0);
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_backgroundOutlineColor,(Object *)pAVar12,
                   (InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar7 = uStackX_10;
        lVar5 = lRam_?;
        uStackX_10 = uStackX_10 & 0xffffff00;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar2 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              uVar4 = (ulonglong)(uVar7 & 0x3f);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << uVar4;
                }
                UNLOCK();
              } while (!bVar11);
            }
          }
        }
        else {
          pOVar2 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
        }
        uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_billboard,pOVar2,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
        DefaultData = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                          static_fields >> 0xc);
          uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar8 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  *)FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        uStackX_10 = 0x3f800000;
        pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)0x0) {
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_textSize,pOVar2,(InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0xbf800000;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_textThickness,pOVar2,(InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3c23d70a;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_textOutlineThickness,pOVar2,
                     (InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_backgroundWidth,pOVar2,(InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_backgroundRadius,pOVar2,(InsertionBehavior__Enum)uVar3
                     ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3dcccccd;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_backgroundOutlineThickness,pOVar2,
                     (InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
          minValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)
                            &TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                             static_fields->minValues >> 0xc);
            uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar8 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          uStackX_10 = 0x43480000;
          pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)0x0) {
            uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_textSize,pOVar2,(InsertionBehavior__Enum)uVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uStackX_10 = 0x3f800000;
            pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
            uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_textThickness,pOVar2,(InsertionBehavior__Enum)uVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uStackX_10 = 0x3e800000;
            pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
            uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_textOutlineThickness,pOVar2,
                       (InsertionBehavior__Enum)uVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uStackX_10 = 0x43160000;
            pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
            uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_backgroundWidth,pOVar2,
                       (InsertionBehavior__Enum)uVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uStackX_10 = 0x42c80000;
            pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
            uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_backgroundRadius,pOVar2,
                       (InsertionBehavior__Enum)uVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uStackX_10 = 0x41a00000;
            pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                       (Object *)StringLiteral_backgroundOutlineThickness,pOVar2,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
            maxValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)
                              &TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                               ->static_fields->maxValues >> 0xc);
              uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar8 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


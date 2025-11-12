
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
         AttributeSettingEnum_ToString(AttributeSettingEnum *this,MethodInfo *method)

{
  pAStackX_8 = this;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttributeValue__0___AttributePoi);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0____1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pSStackX_20 = ::StringLiteral__;
  pDVar2 = (this->fields).valueAttributeValueMap;
  if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    iStack_8 = (pDVar2->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_4._0_4_ = SUB84(pDVar2,0);
    uStack_4._4_4_ = (undefined4)((ulonglong)pDVar2 >> 0x20);
    uStack_11 = (undefined4)uStack_4;
    uStack_12 = uStack_4._4_4_;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 2;
    uStack_4 = 0;
    puStack_16 = &uStack_11;
    while (pSStackX_20 = pSVar1,
          cVar17 = FUN_?(&uStack_11,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                               ), cVar17 != '\0') {
      uStack_18 = uStack_14;
      auStackX_18[0] = (undefined4)uStack_14;
      pOVar19 = (Object *)FUN_?(lRam_?,auStackX_18);
      auStackX_18[0] = uStack_18._4_4_;
      arg1 = (Object *)FUN_?(lRam_?,auStackX_18);
      pSVar20 = StringLiteral___0____1__;
      PStack_21._arg0 = (Object *)0x0;
      PStack_21._arg1 = (Object *)0x0;
      PStack_21._arg2 = (Object *)0x0;
      PStack_21._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_21,pOVar19,arg1,(MethodInfo *)0x0);
      PStack_22._arg0 = PStack_21._arg0;
      PStack_22._arg1 = PStack_21._arg1;
      PStack_22._arg2 = PStack_21._arg2;
      PStack_22._args = PStack_21._args;
      pSVar20 = mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar20,&PStack_22,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar20,(MethodInfo *)0x0);
    }
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).valueAttributeValueMap;
    pKVar23 = (this->fields)._.KogamaSettingEnum;
    if ((pKVar23 != (KogamaSettingEnum *)0x0) &&
       (pOVar19 = (pKVar23->fields)._.value, pOVar19 != (Object *)0x0)) {
      if ((pOVar19->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar19,lRam_?);
        pcVar24 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar24)();
        return pSVar1;
      }
      if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
        uVar25 = FUN_?(pDVar2,*(undefined4 *)&pOVar19[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
        pAStackX_8 = (AttributeSettingEnum *)CONCAT44(pAStackX_8._4_4_,uVar25);
        lVar26 = FUN_?(lRam_?,&pAStackX_8);
        if (args != (Object__Array *)0x0) {
          if ((lVar26 != 0) &&
             (lVar27 = FUN_?(lVar26,(args->klass->_0).element_class), lVar27 == 0)) {
            uVar28 = FUN_?();
            FUN_?(uVar28,0);
            pcVar24 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar24)();
            return pSVar1;
          }
          FUN_?(args,0,lVar26);
          if ((pSVar1 != (String *)0x0) &&
             (lVar26 = FUN_?(pSVar1,(args->klass->_0).element_class), lVar26 == 0)) {
            uVar28 = FUN_?();
            FUN_?(uVar28,0);
            pcVar24 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar24)();
            return pSVar1;
          }
          FUN_?(args,1,pSVar1);
          pAStackX_8 = (AttributeSettingEnum *)
                       CONCAT44(pAStackX_8._4_4_,(this->fields)._ExclusivityFlag_k__BackingField);
          lVar26 = FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                                 ,&pAStackX_8);
          if ((lVar26 != 0) &&
             (lVar27 = FUN_?(lVar26,(args->klass->_0).element_class), lVar27 == 0)) {
            uVar28 = FUN_?();
            FUN_?(uVar28,0);
            pcVar24 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar24)();
            return pSVar1;
          }
          FUN_?(args,2,lVar26);
          pKVar23 = (this->fields)._.KogamaSettingEnum;
          if ((pKVar23 != (KogamaSettingEnum *)0x0) &&
             (lVar26 = FUN_?(pKVar23,(args->klass->_0).element_class), lVar26 == 0)) {
            uVar28 = FUN_?();
            FUN_?(uVar28,0);
            pcVar24 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar24)();
            return pSVar1;
          }
          FUN_?(args,3);
          pSVar1 = StringLiteral_AttributeValue__0___AttributePoi;
          PStack_21._arg0 = (Object *)0x0;
          PStack_21._arg1 = (Object *)0x0;
          PStack_21._arg2 = (Object *)0x0;
          PStack_21._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_21,args,(MethodInfo *)0x0);
          PStack_22._arg0 = PStack_21._arg0;
          PStack_22._arg1 = PStack_21._arg1;
          PStack_22._arg2 = PStack_21._arg2;
          PStack_22._args = PStack_21._args;
          pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                              ((IFormatProvider *)0x0,pSVar1,&PStack_22,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar24 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar24)();
  return pSVar1;
}


/* AttributeSettingEnum(String, Int32, Dictionary`2[System.Int32,System.Int32], Int32, Int32,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingEnum::AttributeSettingEnum__ctor
               (AttributeSettingEnum *this,String *key,int32_t value,
               Dictionary_2_System_Int32_System_Int32_ *valueAttributeValueMap,int32_t min,
               int32_t max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
            ((KogamaSettingEnumBase *)this,key,value,min,max,parent,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).valueAttributeValueMap = valueAttributeValueMap;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).valueAttributeValueMap >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* AttributeSettingEnum(String, Int32, Dictionary`2[System.Int32,System.Int32], Int32, Int32,
   AttributeSettingsExclusivityFlag, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingEnum::AttributeSettingEnum__ctor_1
               (AttributeSettingEnum *this,String *key,int32_t value,
               Dictionary_2_System_Int32_System_Int32_ *valueAttributeValueMap,int32_t min,
               int32_t max,AttributeSettingsExclusivityFlag__Enum attributeSettingsExclusivityFlag,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
            ((KogamaSettingEnumBase *)this,key,value,min,max,parent,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).valueAttributeValueMap = valueAttributeValueMap;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).valueAttributeValueMap >> 0xc);
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
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingEnum::
        AttributeSettingEnum_get_AttributeValue(AttributeSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_;
  pKVar2 = (this->fields)._.KogamaSettingEnum;
  if (pKVar2 != (KogamaSettingEnum *)0x0) {
    pOVar3 = (pKVar2->fields)._.value;
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      this_00 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).valueAttributeValueMap;
      if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
        uVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__FindEntry
                          (this_00,*(int32_t *)&pOVar3[1].klass,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar6 < 0) {
          uVar7 = func_?(pMVar1->klass->rgctx_data,0xe);
          pOVar3 = (Object *)func_?(uVar7);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (pOVar3,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
        pDVar8 = (this_00->fields)._entries;
        if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0) {
          if (uVar6 < (uint)pDVar8->max_length) {
            return (int32_t)pDVar8->vector[(int)uVar6].value;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


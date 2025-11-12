
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting_AddChild
               (GameBoosterSettingWithGoldSetting *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_tsk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (kogamaSetting == (KogamaSettingWrapperBase *)0x0) goto code_?;
  pSVar1 = (kogamaSetting->fields).key;
  if (pSVar1 != StringLiteral_sk) {
    if (((pSVar1 != (String *)0x0) && (StringLiteral_sk != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral_sk->fields)._stringLength)) {
      in_R9 = 0;
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar1->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_sk->fields)._firstChar,
                         (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar2 != 0) goto code_?;
    }
    pSVar1 = (kogamaSetting->fields).key;
    if (pSVar1 != StringLiteral_gsk) {
      if (((pSVar1 != (String *)0x0) && (StringLiteral_gsk != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength == (StringLiteral_gsk->fields)._stringLength)) {
        in_R9 = 0;
        bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_gsk->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar2 != 0) goto code_?;
      }
      pSVar1 = (kogamaSetting->fields).key;
      if (pSVar1 != StringLiteral_tsk) {
        if (((pSVar1 == (String *)0x0) || (StringLiteral_tsk == (String *)0x0)) ||
           ((pSVar1->fields)._stringLength != (StringLiteral_tsk->fields)._stringLength)) {
code_?:
          uVar3 = func_?(&TypeInfo__System__Exception);
          this_01 = (Exception *)func_?(uVar3);
          pSVar1 = (String *)func_?(&StringLiteral_Only_child_with_setting_key_is_a);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
          uVar3 = func_?(&
                                      MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting__AddChild_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                                     );
          FUN_?(this_01,uVar3);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        in_R9 = 0;
        bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_tsk->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
    }
  }
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)(kogamaSetting->fields).key,(Object *)kogamaSetting,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ->klass->rgctx_data[0x22].method);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase) */

KogamaSettingsCollectionBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_CopyWithOutChildren
          (GameBoosterSettingWithGoldSetting *this,KogamaSettingsCollectionBase *parent,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = (this->fields)._._.key;
  this_00 = (KogamaSettingsCollectionBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                         );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this_00,key,parent,(MethodInfo *)0x0);
  return this_00;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
         GameBoosterSettingWithGoldSetting_ToString
                   (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tsk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___Setting___1__GoldSetting___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._.key;
  args_00 = (Object__Array *)
            System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                      (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  if (args_00 == (Object__Array *)0x0) {
    ppSVar2 = &StringLiteral_format;
    if (pSVar1 != (String *)0x0) {
      ppSVar2 = &StringLiteral_args;
    }
    pSVar1 = (String *)func_?(ppSVar2);
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar3);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                MethodInfo__System__String__Format_MethodInfo__System__String__System__Object____
                               );
    FUN_?(this_00,uVar3);
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  PStack_5._arg0 = (Object *)0x0;
  PStack_5._arg1 = (Object *)0x0;
  PStack_5._arg2 = (Object *)0x0;
  PStack_5._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_5,args_00,(MethodInfo *)0x0);
  PStack_6._arg0 = PStack_5._arg0;
  PStack_6._arg1 = PStack_5._arg1;
  PStack_6._arg2 = PStack_5._arg2;
  PStack_6._args = PStack_5._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_6,(MethodInfo *)0x0);
  if (args != (Object__Array *)0x0) {
    if (pSVar1 != (String *)0x0) {
      lVar7 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar7 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,0,pSVar1);
    pDVar8 = (this->fields)._.children;
    if (pDVar8 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) {
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar8,
                          (Object *)StringLiteral_sk,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                         );
      if (pOVar9 != (Object *)0x0) {
        lVar7 = FUN_?(pOVar9,(args->klass->_0).element_class);
        if (lVar7 == 0) {
          uVar3 = FUN_?();
          FUN_?(uVar3,0);
          pcVar4 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar4)();
          return pSVar1;
        }
      }
      FUN_?(args,1,pOVar9);
      pDVar8 = (this->fields)._.children;
      if (pDVar8 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)0x0) {
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)pDVar8,
                            (Object *)StringLiteral_gsk,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                           );
        if (pOVar9 != (Object *)0x0) {
          lVar7 = FUN_?(pOVar9,(args->klass->_0).element_class);
          if (lVar7 == 0) {
            uVar3 = FUN_?();
            FUN_?(uVar3,0);
            pcVar4 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar4)();
            return pSVar1;
          }
        }
        FUN_?(args,2,pOVar9);
        pDVar8 = (this->fields)._.children;
        if (pDVar8 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                       *)0x0) {
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar8,
                              (Object *)StringLiteral_tsk,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                             );
          if (pOVar9 != (Object *)0x0) {
            lVar7 = FUN_?(pOVar9,(args->klass->_0).element_class);
            if (lVar7 == 0) {
              uVar3 = FUN_?();
              FUN_?(uVar3,0);
              pcVar4 = (code *)swi(3);
              pSVar1 = (String *)(*pcVar4)();
              return pSVar1;
            }
          }
          FUN_?(args,3);
          pSVar1 = StringLiteral__0___Setting___1__GoldSetting___;
          PStack_5._arg0 = (Object *)0x0;
          PStack_5._arg1 = (Object *)0x0;
          PStack_5._arg2 = (Object *)0x0;
          PStack_5._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_5,args,(MethodInfo *)0x0);
          PStack_6._arg0 = PStack_5._arg0;
          PStack_6._arg1 = PStack_5._arg1;
          PStack_6._arg2 = PStack_5._arg2;
          PStack_6._args = PStack_5._args;
          pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar1,&PStack_6,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* GameBoosterSettingWithGoldSetting(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting__ctor
               (GameBoosterSettingWithGoldSetting *this,String *key,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                  ,key,kogamaSettingsCollection,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.children =
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.children >> 0xc);
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
  iVar6 = iRam_?;
  (this->fields)._._._Parent_k__BackingField = kogamaSettingsCollection;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._._.key = key;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.key >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* KogamaSettingNumericBase`1[System.Int32] get_GoldPrice() */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_GoldPrice
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pKVar2 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar1)();
    return pKVar2;
  }
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this_00,
                      (Object *)StringLiteral_gsk,
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                     );
  if (pKVar2 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      FUN_?(pKVar2,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
      pcVar1 = (code *)swi(3);
      pKVar2 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar1)();
      return pKVar2;
    }
  }
  return pKVar2;
}


/* KogamaSettingValueWrapperBase get_Setting() */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_Setting
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pKVar2 = (KogamaSettingValueWrapperBase *)(*pcVar1)();
    return pKVar2;
  }
  pKVar2 = (KogamaSettingValueWrapperBase *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this_00,
                      (Object *)StringLiteral_sk,
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                     );
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (((pKVar2->klass->_1).naturalAligment < bVar3) ||
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      FUN_?(pKVar2,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
      pcVar1 = (code *)swi(3);
      pKVar2 = (KogamaSettingValueWrapperBase *)(*pcVar1)();
      return pKVar2;
    }
  }
  return pKVar2;
}



/* KogamaSettingValueWrapperBase
   KogamaSettingValueFactory(KeyValuePair`2[System.Object,System.Object],
   KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase) */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingsFactory::
KogamaSettingsFactory_KogamaSettingValueFactory
          (KeyValuePair_2_System_Object_System_Object_ *valuePair,
          KogamaSettingValueWrapperBase *kogamaSettingBasePrototype,
          KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((kogamaSettingBasePrototype != (KogamaSettingValueWrapperBase *)0x0) &&
     (lVar1 = (*(kogamaSettingBasePrototype->klass->vtable).__unknown.methodPtr)
                        (kogamaSettingBasePrototype,
                         (kogamaSettingBasePrototype->klass->vtable).__unknown.method), lVar1 != 0))
  {
    iVar2 = FUN_?(2,
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting
                          ,lVar1);
    if (iVar2 == 0) {
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar4 = valuePair->value;
      this_02 = (KogamaSettingBoolBase *)
                FUN_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
                             );
      if (pOVar4 != (Object *)0x0) {
        if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
                    (this_02,pSVar3,*(bool *)&pOVar4[1].klass,parent,(MethodInfo *)0x0);
          return (KogamaSettingValueWrapperBase *)this_02;
        }
        FUN_?(pOVar4);
        pcVar5 = (code *)swi(3);
        pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
        return pKVar6;
      }
    }
    else if (iVar2 == 1) {
      bVar7 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                     );
        pcVar5 = (code *)swi(3);
        pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
        return pKVar6;
      }
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar4 = valuePair->value;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar8 != (Il2CppArrayType *)0x0)) {
        min = *(float *)&pIVar8->sizes;
        max = *(float *)((longlong)&pIVar8->sizes + 4);
        this_01 = (KogamaSettingNumericBase_1_System_Single_ *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                               );
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single___ctor
                      (this_01,pSVar3,*(float *)&pOVar4[1].klass,min,max,parent,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__KogamaSettingNumericBase_System__String__float__float__float__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                      );
            return (KogamaSettingValueWrapperBase *)this_01;
          }
          FUN_?(pOVar4);
          pcVar5 = (code *)swi(3);
          pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
          return pKVar6;
        }
      }
    }
    else if (iVar2 == 2) {
      bVar7 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                     );
        pcVar5 = (code *)swi(3);
        pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
        return pKVar6;
      }
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar4 = valuePair->value;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar8 != (Il2CppArrayType *)0x0)) {
        iVar9 = *(int32_t *)&pIVar8->sizes;
        iVar10 = *(int32_t *)((longlong)&pIVar8->sizes + 4);
        this_00 = (KogamaSettingNumericBase_1_System_Int32_ *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                               );
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
            KogamaSettingNumericBase_1_System_Int32___ctor
                      (this_00,pSVar3,*(int32_t *)&pOVar4[1].klass,iVar9,iVar10,parent,
                       MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__KogamaSettingNumericBase_System__String__int__int__int__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                      );
            return (KogamaSettingValueWrapperBase *)this_00;
          }
          FUN_?(pOVar4);
          pcVar5 = (code *)swi(3);
          pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
          return pKVar6;
        }
      }
    }
    else {
      if ((iVar2 == 3) || (iVar2 != 4)) {
        return (KogamaSettingValueWrapperBase *)0x0;
      }
      bVar7 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
              ->_1).naturalAligment;
      if (((kogamaSettingBasePrototype->klass->_1).naturalAligment < bVar7) ||
         ((kogamaSettingBasePrototype->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
         )) {
        FUN_?(kogamaSettingBasePrototype,
                      TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                     );
        pcVar5 = (code *)swi(3);
        pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
        return pKVar6;
      }
      pSVar3 = (kogamaSettingBasePrototype->fields)._.key;
      pOVar4 = valuePair->value;
      if ((kogamaSettingBasePrototype[1].klass != (KogamaSettingValueWrapperBase__Class *)0x0) &&
         (pIVar8 = ((kogamaSettingBasePrototype[1].klass)->_0).byval_arg.data.array,
         pIVar8 != (Il2CppArrayType *)0x0)) {
        iVar9 = *(int32_t *)&pIVar8->sizes;
        iVar10 = *(int32_t *)((longlong)&pIVar8->sizes + 4);
        this = (KogamaSettingEnumBase *)
               FUN_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnumBase
                            );
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            KogamaSettingTypes::KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
                      (this,pSVar3,*(int32_t *)&pOVar4[1].klass,iVar9,iVar10,parent,(MethodInfo *)0x0
                      );
            return (KogamaSettingValueWrapperBase *)this;
          }
          FUN_?(pOVar4);
          pcVar5 = (code *)swi(3);
          pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
          return pKVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
  return pKVar6;
}


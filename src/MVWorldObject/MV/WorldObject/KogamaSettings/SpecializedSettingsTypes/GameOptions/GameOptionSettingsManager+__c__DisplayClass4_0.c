
/* Void <GetSettingsSettingsList>b__0(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameOptions::
     GameOptionSettingsManager+<>c__DisplayClass4_0::
     GameOptionSettingsManager_c_DisplayClass4_0__GetSettingsSettingsList_b__0
               (GameOptionSettingsManager_c_DisplayClass4_0 *this,
               KogamaSettingWrapperBase *settingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Add_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Add_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase_
  ;
  if (settingNode != (KogamaSettingWrapperBase *)0x0) {
    pKVar2 = settingNode->klass;
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if ((bVar3 <= (pKVar2->_1).naturalAligment) &&
       ((pKVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      this_00 = (this->fields).inv;
      if (this_00 !=
          (List_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
           *)0x0) {
        bVar3 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                ->_1).naturalAligment;
        if (((pKVar2->_1).naturalAligment < bVar3) ||
           ((pKVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
           )) {
          FUN_?(settingNode);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar5 = &(this_00->fields)._version;
        *piVar5 = *piVar5 + 1;
        pKVar6 = (this_00->fields)._items;
        if (pKVar6 != (KogamaSettingValueWrapperBase__Array *)0x0) {
          uVar7 = (this_00->fields)._size;
          if ((uint)pKVar6->max_length <= uVar7) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)settingNode,
                       pMVar1->klass->rgctx_data[0xe].method);
            return;
          }
          (this_00->fields)._size = uVar7 + 1;
          if (uVar7 < (uint)pKVar6->max_length) {
            bVar8 = iRam_? != 0;
            pKVar6->vector[(int)uVar7] = (KogamaSettingValueWrapperBase *)settingNode;
            if (bVar8) {
              uVar7 = (uint)((ulonglong)(pKVar6->vector + (int)uVar7) >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            return;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


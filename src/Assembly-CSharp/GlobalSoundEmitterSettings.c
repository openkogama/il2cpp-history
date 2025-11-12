
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
               (GlobalSoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter,
               (MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        this_01 = (pMVar1->fields)._.data;
        pGVar2 = (this->fields).keys;
        pSVar3 = (this->fields).volumeSlider;
        if ((pGVar2 != (GlobalSoundEmitterSettings_Keys *)0x0) &&
           (pSVar4 = (pGVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
          if ((int)pSVar4->max_length == 0) {
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pSVar6 = pSVar4->vector[0];
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)((((this->fields).keys)->fields).keys)->vector[0],
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((pSVar3 != (SettingsSlider *)0x0) && (pOVar7 != (Object *)0x0)) {
              if ((pOVar7->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar7);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar3,pSVar6,*(float *)&pOVar7[1].klass,0.0,_UNK_?,
                         (MethodInfo *)0x0);
              pGVar2 = (this->fields).keys;
              pSVar3 = (this->fields).pitchSlider;
              if ((pGVar2 != (GlobalSoundEmitterSettings_Keys *)0x0) &&
                 (pSVar4 = (pGVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
                if ((uint)pSVar4->max_length < 2) goto code_?;
                pSVar6 = pSVar4->vector[1];
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_01,(Object *)
                                            ((((this->fields).keys)->fields).keys)->vector[1],
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((pSVar3 != (SettingsSlider *)0x0) && (pOVar7 != (Object *)0x0)) {
                  if ((pOVar7->klass->_0).element_class ==
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar3,pSVar6,*(float *)&pOVar7[1].klass,_UNK_?,
                               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
                    return;
                  }
                  FUN_?(pOVar7);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GlobalSoundEmitterSettings() */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings__ctor
               (GlobalSoundEmitterSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GlobalSoundEmitterSettings__Keys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GlobalSoundEmitterSettings_Keys *)
           FUN_?(TypeInfo__GlobalSoundEmitterSettings__Keys);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = (String__Array *)FUN_?(TypeInfo__System__String,2);
  if (pSVar2 == (String__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pSVar2,0,StringLiteral_volume);
  FUN_?(pSVar2,1,StringLiteral_pitch);
  iVar4 = iRam_?;
  (pGVar1->fields).keys = pSVar2;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&pGVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).keys = pGVar1;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).keys >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


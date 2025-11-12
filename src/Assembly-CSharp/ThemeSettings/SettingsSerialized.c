
/* Void CommitChanges() */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized_CommitChanges
               (SettingsSerialized *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
  pWVar2 = (this->fields).worldObjectRef;
  if ((pWVar2 != (WorldObjectClientRef_1_ThemeWorldObject_ *)0x0) &&
     (this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     this_01 != (MVWorldObjectClientManager *)0x0)) {
    this_02 = (ThemeWorldObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                        (this_01,(pWVar2->fields).woId,pMVar1->klass->rgctx_data[1].method);
    if (this_02 == (ThemeWorldObject *)0x0) {
      return;
    }
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
      FUN_?(&StringLiteral_settings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar3 != (MVGameControllerBase *)0x0) &&
       (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
      this_00 = (pMVar4->fields).operationRequests;
      worldObjectID = (this_02->fields)._._.id;
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value = ThemeWorldObject::ThemeWorldObject_get_SettingsData(this_02,(MethodInfo *)0x0);
      if ((this_03 !=
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0) &&
         (pIVar5 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data,
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__TryInsert
                   ((Dictionary_2_System_Object_System_Object_ *)this_03,
                    (Object *)StringLiteral_settings,(Object *)value,
                    (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),2),
                    pIVar5[0x22].method), this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                  (this_00,worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_03,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SettingsSerialized(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsSerialized::SettingsSerialized__ctor
               (SettingsSerialized *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SettingsWrapper::SettingsWrapper__ctor((SettingsWrapper *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar2 = 
  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
  ;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    if ((
        WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClientRef<ThemeWorldObject>_int_
                   );
    }
    if ((*(byte *)((longlong)((pMVar2->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135) & 1) == 0)
    {
      FUN_?(((pMVar2->field7_0x38).rgctx_data)->rgctxDataDummy);
    }
    pWVar3 = (WorldObjectClientRef_1_ThemeWorldObject_ *)FUN_?();
    bVar4 = iRam_? != 0;
    (pWVar3->fields).woId = woid;
    (this->fields).worldObjectRef = pWVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).worldObjectRef >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pMVar2 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
    pWVar3 = (this->fields).worldObjectRef;
    if (((pWVar3 != (WorldObjectClientRef_1_ThemeWorldObject_ *)0x0) &&
        (pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar1 != (MVWorldObjectClientManager *)0x0)) &&
       (this_00 = (ThemeWorldObject *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar1,(pWVar3->fields).woId,pMVar2->klass->rgctx_data[1].method),
       this_00 != (ThemeWorldObject *)0x0)) {
      pDVar9 = ThemeWorldObject::ThemeWorldObject_get_SettingsData(this_00,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields)._.settingsData = pDVar9;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


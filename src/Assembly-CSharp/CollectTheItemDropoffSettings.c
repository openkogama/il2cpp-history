
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
               (CollectTheItemDropoffSettings *this,int32_t woID,GameObject *root,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBlueprintBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_doOnce);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_01,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0))
  {
    bVar2 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVBlueprintBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (pMVar1->fields)._.data;
    woID_00 = (pMVar1->fields)._.id;
    if ((pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar4->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar4->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dictionary = (IDictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar4,(Object *)StringLiteral_ChildrenMap,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      this_02 = (Dictionary_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      if (dictionary != (IDictionary_2_System_Object_System_Object_ *)0x0) {
        bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((dictionary->klass->_1).naturalAligment < bVar2) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (dictionary->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(dictionary);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_4
                (this_02,dictionary,(IEqualityComparer_1_System_Object_ *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[8].method);
      bVar5 = iRam_? != 0;
      (this->fields).childMap = this_02;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).childMap >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      this_00 = (this->fields).settingsBase;
      if (this_00 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_Initialize
                  (this_00,woID_00,root,MVWorldObjectDocumentationType__Enum_CollectTheItem,
                   (MethodInfo *)0x0);
        pSVar10 = (this->fields).toggle;
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,(Object *)StringLiteral_doOnce,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar12 = StringLiteral_doOnce;
        if ((pSVar10 != (SettingsToggle *)0x0) && (pOVar11 != (Object *)0x0)) {
          if ((pOVar11->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar11,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          value = *(bool *)&pOVar11[1].klass;
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar5 = iRam_? != 0;
          (pSVar10->fields).key = pSVar12;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(pSVar10->fields).key >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
          pTVar13 = (pSVar10->fields).toggle;
          if (pTVar13 != (Toggle *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                      (pTVar13,value,1,(MethodInfo *)0x0);
            pTVar13 = (pSVar10->fields).toggle;
            if (pTVar13 != (Toggle *)0x0) {
              pTVar14 = (pTVar13->fields).onValueChanged;
              uVar15 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
              FUN_?(uVar15,pSVar10,MethodInfo__SettingsToggle__ValueChanged_bool_);
              if (pTVar14 != (Toggle_ToggleEvent *)0x0) {
                pMVar16 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                         ->klass->rgctx_data[2].method;
                pIVar17 = pMVar16->klass;
                if ((pIVar17->field_0x135 & 1) == 0) {
                  pIVar17 = (Il2CppClass *)FUN_?(pIVar17);
                }
                pvVar18 = pIVar17->rgctx_data[5].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar18 + 0x135) & 1) == 0) {
                  pvVar18 = (void *)FUN_?(pvVar18);
                }
                uVar19 = FUN_?(pvVar18);
                pIVar17 = pMVar16->klass;
                if ((pIVar17->field_0x135 & 1) == 0) {
                  pIVar17 = (Il2CppClass *)FUN_?(pIVar17);
                }
                FUN_?(uVar19,uVar15,
                              (pIVar17->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
                if ((pTVar14 != (Toggle_ToggleEvent *)0x0) &&
                   (pIVar20 = (pTVar14->fields)._._.m_Calls, pIVar20 != (InvokableCallList *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar21 = (pIVar20->fields).m_RuntimeCalls;
                  if (pLVar21 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                    FUN_?(pLVar21,uVar19);
                    (pIVar20->fields).m_NeedsUpdate = 1;
                    return;
                  }
                }
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::
     CollectTheItemDropoffSettings_OnSettingChanged
               (CollectTheItemDropoffSettings *this,String *key,Object *value,MethodInfo *method)

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
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,value,
               (InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_ChildrenMap,(Object *)(this->fields).childMap,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    key_00 = StringLiteral_BlueprintData;
    pSVar2 = (this->fields).settingsBase;
    if (pSVar2 != (SettingsBase *)0x0) {
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
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((((pSVar2->fields).woID != -1) && (key_00 != (String *)0x0)) &&
         ((key_00->fields)._stringLength != 0)) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,(pSVar2->fields).woID,(MethodInfo *)0x0);
          if (wo == (MVWorldObjectClient *)0x0) {
            return;
          }
          if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
            FUN_?();
          }
          uVar1 = 0;
          WorldObjectDataValidator::WorldObjectDataValidator_Validate
                    (wo,key_00,(Object *)this_01,(MethodInfo *)0x0);
          this_00 = (pSVar2->fields).result;
          if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_00,(Object *)key_00,(Object *)this_01,(InsertionBehavior__Enum)uVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
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
            if (this_03 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key_00,
                         (Object *)this_01,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                        (wo,this_03,(wo->klass->vtable).PartialUpdateWOData.method);
              return;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


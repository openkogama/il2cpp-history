
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     RewardedAdRequirementSettings::RewardedAdRequirementSettings_Initialize
               (RewardedAdRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rewarded_ad_requirement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Rewarded_ad_requirement,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    pTVar2 = (this_00->fields).headerText;
    (this_00->fields).woID = woID;
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
      uVar3 = 0;
      SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_02,woID,(MethodInfo *)0x0),
          pMVar4 != (MVWorldObjectClient *)0x0)) &&
         (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar4->fields)._.data,
         this_01 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (this_01,(Object *)StringLiteral_rewardedAd,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        lVar6 = lRam_?;
        if (iVar5 < 0) {
          pOStackX_10 = (Object *)((ulonglong)pOStackX_10 & 0xffffffffffffff00);
          pOVar7 = pOStackX_10;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar7 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar7 + 1,&pOStackX_10,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
                uVar3 = (ulonglong)(uVar8 & 0x3f);
                puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar10 = *puVar9;
                  LOCK();
                  uVar11 = *puVar9;
                  if (uVar10 == uVar11) {
                    *puVar9 = uVar10 | 1L << uVar3;
                  }
                  UNLOCK();
                } while (uVar10 != uVar11);
              }
            }
            else {
              pOVar7 = (Object *)0x0;
            }
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_rewardedAd,pOVar7,
                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pSVar12 = (this->fields).toggle;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_01,
                             (Object *)StringLiteral_rewardedAd,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar1 = StringLiteral_rewardedAd;
        if ((pSVar12 != (SettingsToggle *)0x0) && (pOVar7 != (Object *)0x0)) {
          if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar7,lRam_?);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          value = *(bool *)&pOVar7[1].klass;
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
          bVar14 = iRam_? != 0;
          (pSVar12->fields).key = pSVar1;
          if (bVar14) {
            uVar8 = (uint)((ulonglong)&(pSVar12->fields).key >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar11 = *puVar9;
              LOCK();
              uVar3 = *puVar9;
              if (uVar11 == uVar3) {
                *puVar9 = uVar11 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar11 != uVar3);
          }
          pTVar15 = (pSVar12->fields).toggle;
          if (pTVar15 != (Toggle *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                      (pTVar15,value,1,(MethodInfo *)0x0);
            pTVar15 = (pSVar12->fields).toggle;
            if (pTVar15 != (Toggle *)0x0) {
              pTVar16 = (pTVar15->fields).onValueChanged;
              uVar17 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
              FUN_?(uVar17,pSVar12,MethodInfo__SettingsToggle__ValueChanged_bool_);
              if (pTVar16 != (Toggle_ToggleEvent *)0x0) {
                pMVar18 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                         ->klass->rgctx_data[2].method;
                pIVar19 = pMVar18->klass;
                if ((pIVar19->field_0x135 & 1) == 0) {
                  pIVar19 = (Il2CppClass *)FUN_?(pIVar19);
                }
                pvVar20 = pIVar19->rgctx_data[5].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar20 + 0x135) & 1) == 0) {
                  pvVar20 = (void *)FUN_?(pvVar20);
                }
                uVar21 = FUN_?(pvVar20);
                pIVar19 = pMVar18->klass;
                if ((pIVar19->field_0x135 & 1) == 0) {
                  pIVar19 = (Il2CppClass *)FUN_?(pIVar19);
                }
                FUN_?(uVar21,uVar17,
                              (pIVar19->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
                if ((pTVar16 != (Toggle_ToggleEvent *)0x0) &&
                   (pIVar22 = (pTVar16->fields)._._.m_Calls, pIVar22 != (InvokableCallList *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar23 = (pIVar22->fields).m_RuntimeCalls;
                  if (pLVar23 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                    FUN_?(pLVar23,uVar21);
                    (pIVar22->fields).m_NeedsUpdate = 1;
                    return;
                  }
                }
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
          }
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


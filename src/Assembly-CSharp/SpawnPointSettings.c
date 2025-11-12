
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SpawnPointSettings::SpawnPointSettings_Initialize
               (SpawnPointSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVSpawnPoint);
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
    pMVar2 = pMVar1->klass;
    bVar3 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
    if (((pMVar2->_1).naturalAligment < bVar3) ||
       ((MVSpawnPoint__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__MVSpawnPoint)) {
      FUN_?(pMVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = (this->fields).settingsBase;
    iVar6 = (pMVar1->fields)._.id;
    documentationType =
         (*(pMVar2->vtable).get_DocumentationType.methodPtr)
                   (pMVar1,(pMVar2->vtable).get_DocumentationType.method);
    if (pSVar5 != (SettingsBase *)0x0) {
      uVar7 = (ulonglong)documentationType;
      SettingsBase::SettingsBase_Initialize(pSVar5,iVar6,root,documentationType,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(pMVar1->fields)._.data;
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::StyleComplexSelector+PseudoStateData]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                           (this_00,(Object *)StringLiteral_onlyFirstSpawn,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            ->klass->rgctx_data[0x21].method);
        lVar8 = lRam_?;
        if (iVar6 < 0) {
          pOStackX_10 = (Object *)((ulonglong)pOStackX_10 & 0xffffffffffffff00);
          pOVar9 = pOStackX_10;
          if ((*(int *)(lRam_? + 0x28) < 0) &&
             ((*(longlong *)(lRam_? + 0x60) == 0 ||
              (pOVar9 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            pOVar9 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar9 + 1,&pOStackX_10,(longlong)*(int *)(lVar8 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
              uVar7 = (ulonglong)(uVar10 & 0x3f);
              lVar8 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar11 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar12 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << uVar7;
                }
                UNLOCK();
              } while (!bVar13);
            }
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_onlyFirstSpawn,pOVar9,
                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar7 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          lVar8 = lRam_?;
          pSVar5 = (this->fields).settingsBase;
          pOStackX_10 = (Object *)((ulonglong)pOStackX_10 & 0xffffffffffffff00);
          pOVar9 = pOStackX_10;
          if ((*(int *)(lRam_? + 0x28) < 0) &&
             ((*(longlong *)(lRam_? + 0x60) == 0 ||
              (pOVar9 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            pOVar9 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar9 + 1,&pOStackX_10,(longlong)*(int *)(lVar8 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
              lVar8 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar12 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar13 = uVar7 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar7 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
          }
          if (pSVar5 == (SettingsBase *)0x0) goto code_?;
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar5,StringLiteral_onlyFirstSpawn,pOVar9,(MethodInfo *)0x0);
        }
        pSVar14 = (this->fields).toggle;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)StringLiteral_onlyFirstSpawn,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar15 = StringLiteral_onlyFirstSpawn;
        if ((pSVar14 != (SettingsToggle *)0x0) && (pOVar9 != (Object *)0x0)) {
          if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar9,lRam_?);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          value = *(bool *)&pOVar9[1].klass;
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
          bVar13 = iRam_? != 0;
          (pSVar14->fields).key = pSVar15;
          if (bVar13) {
            uVar10 = (uint)((ulonglong)&(pSVar14->fields).key >> 0xc);
            puVar12 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar11 = *puVar12;
              LOCK();
              uVar7 = *puVar12;
              if (uVar11 == uVar7) {
                *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (uVar11 != uVar7);
          }
          pTVar16 = (pSVar14->fields).toggle;
          if (pTVar16 != (Toggle *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                      (pTVar16,value,1,(MethodInfo *)0x0);
            pTVar16 = (pSVar14->fields).toggle;
            if (pTVar16 != (Toggle *)0x0) {
              pTVar17 = (pTVar16->fields).onValueChanged;
              uVar18 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
              FUN_?(uVar18,pSVar14,MethodInfo__SettingsToggle__ValueChanged_bool_);
              if (pTVar17 != (Toggle_ToggleEvent *)0x0) {
                pMVar19 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                         ->klass->rgctx_data[2].method;
                pIVar20 = pMVar19->klass;
                if ((pIVar20->field_0x135 & 1) == 0) {
                  pIVar20 = (Il2CppClass *)FUN_?(pIVar20);
                }
                pvVar21 = pIVar20->rgctx_data[5].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
                  pvVar21 = (void *)FUN_?(pvVar21);
                }
                uVar22 = FUN_?(pvVar21);
                pIVar20 = pMVar19->klass;
                if ((pIVar20->field_0x135 & 1) == 0) {
                  pIVar20 = (Il2CppClass *)FUN_?(pIVar20);
                }
                FUN_?(uVar22,uVar18,
                              (pIVar20->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
                if ((pTVar17 != (Toggle_ToggleEvent *)0x0) &&
                   (pIVar23 = (pTVar17->fields)._._.m_Calls, pIVar23 != (InvokableCallList *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar24 = (pIVar23->fields).m_RuntimeCalls;
                  if (pLVar24 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                    FUN_?(pLVar24,uVar22);
                    (pIVar23->fields).m_NeedsUpdate = 1;
                    return;
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


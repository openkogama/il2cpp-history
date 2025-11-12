
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::LeverSettings::LeverSettings_Initialize
               (LeverSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_beginActivated);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  uVar1 = 0;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Lever,(MethodInfo *)0x0);
  if (woID == -1) {
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar2 = lRam_?;
    pOStackX_10 = (Object *)((ulonglong)pOStackX_10 & 0xffffffffffffff00);
    pOVar3 = pOStackX_10;
    if ((*(int *)(lRam_? + 0x28) < 0) &&
       ((*(longlong *)(lRam_? + 0x60) == 0 ||
        (pOVar3 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&pOStackX_10,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    if (this_02 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_02,
               (Object *)StringLiteral_beginActivated,pOVar3,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pSVar8 = (this->fields).toggle;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_01,woID,(MethodInfo *)0x0), pMVar9 == (MVWorldObjectClient *)0x0)
       ) goto code_?;
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)(pMVar9->fields)._.data;
    pSVar8 = (this->fields).toggle;
    if (this_02 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,
                       (Object *)StringLiteral_beginActivated,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pSVar10 = StringLiteral_beginActivated;
  if ((pSVar8 != (SettingsToggle *)0x0) && (pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    value = *(bool *)&pOVar3[1].klass;
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
    bVar12 = iRam_? != 0;
    (pSVar8->fields).key = pSVar10;
    if (bVar12) {
      uVar4 = (uint)((ulonglong)&(pSVar8->fields).key >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pTVar13 = (pSVar8->fields).toggle;
    if (pTVar13 != (Toggle *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar13,value,1,(MethodInfo *)0x0);
      pTVar13 = (pSVar8->fields).toggle;
      if (pTVar13 != (Toggle *)0x0) {
        pTVar14 = (pTVar13->fields).onValueChanged;
        uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
        FUN_?(uVar1,pSVar8,MethodInfo__SettingsToggle__ValueChanged_bool_);
        if (pTVar14 != (Toggle_ToggleEvent *)0x0) {
          pMVar15 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                   ->klass->rgctx_data[2].method;
          pIVar16 = pMVar15->klass;
          if ((pIVar16->field_0x135 & 1) == 0) {
            pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
          }
          pvVar17 = pIVar16->rgctx_data[5].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
            pvVar17 = (void *)FUN_?(pvVar17);
          }
          uVar18 = FUN_?(pvVar17);
          pIVar16 = pMVar15->klass;
          if ((pIVar16->field_0x135 & 1) == 0) {
            pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
          }
          FUN_?(uVar18,uVar1,
                        (pIVar16->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
          if ((pTVar14 != (Toggle_ToggleEvent *)0x0) &&
             (pIVar19 = (pTVar14->fields)._._.m_Calls, pIVar19 != (InvokableCallList *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar20 = (pIVar19->fields).m_RuntimeCalls;
            if (pLVar20 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
              FUN_?(pLVar20,uVar18);
              (pIVar19->fields).m_NeedsUpdate = 1;
              return;
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


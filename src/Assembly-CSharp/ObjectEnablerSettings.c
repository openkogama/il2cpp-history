
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::ObjectEnablerSettings::ObjectEnablerSettings_Initialize
               (ObjectEnablerSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showOutline);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    uVar1 = 0;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_ModelToggle,(MethodInfo *)0x0)
    ;
    if (woID == -1) {
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
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
      uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_showOutline,pOVar3,(InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_01 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_01,woID,(MethodInfo *)0x0),
          pMVar8 == (MVWorldObjectClient *)0x0)) ||
         (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)(pMVar8->fields)._.data,
         this_02 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)0x0)) goto code_?;
    }
    iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)this_02,(Object *)StringLiteral_showOutline,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (iVar9 < 0) {
      pOStackX_10 = (Object *)CONCAT71(pOStackX_10._1_7_,1);
      pOVar3 = (Object *)FUN_?(lRam_?,&pOStackX_10);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_showOutline,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    pSVar10 = (this->fields).toggle;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,
                         (Object *)StringLiteral_showOutline,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pSVar11 = StringLiteral_showOutline;
    if ((pSVar10 != (SettingsToggle *)0x0) && (pOVar3 != (Object *)0x0)) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
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
      bVar13 = iRam_? != 0;
      (pSVar10->fields).key = pSVar11;
      if (bVar13) {
        uVar4 = (uint)((ulonglong)&(pSVar10->fields).key >> 0xc);
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
      pTVar14 = (pSVar10->fields).toggle;
      if (pTVar14 != (Toggle *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar14,value,1,(MethodInfo *)0x0);
        pTVar14 = (pSVar10->fields).toggle;
        if (pTVar14 != (Toggle *)0x0) {
          pTVar15 = (pTVar14->fields).onValueChanged;
          uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
          FUN_?(uVar1,pSVar10,MethodInfo__SettingsToggle__ValueChanged_bool_);
          if (pTVar15 != (Toggle_ToggleEvent *)0x0) {
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
            FUN_?(uVar19,uVar1,
                          (pIVar17->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
            if ((pTVar15 != (Toggle_ToggleEvent *)0x0) &&
               (pIVar20 = (pTVar15->fields)._._.m_Calls, pIVar20 != (InvokableCallList *)0x0)) {
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
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


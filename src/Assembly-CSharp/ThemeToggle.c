
/* Void Initialize(BoolAttribute, Action`1[Boolean]) */

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_Initialize
               (ThemeToggle *this,BoolAttribute *attrib,Action_1_Boolean_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__get_Name__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onChange = onChange;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
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
  if ((attrib != (BoolAttribute *)0x0) && (pTVar6 = (this->fields).label, pTVar6 != (Text *)0x0)) {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,(attrib->fields)._.name,(pTVar6->klass->vtable).set_text.method);
    pSVar7 = (this->fields).toggle;
    if (pSVar7 != (SettingsToggle *)0x0) {
      value = (attrib->fields)._._.value;
      pSVar8 = (attrib->fields)._._._._Key_k__BackingField;
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
      bVar1 = iRam_? != 0;
      (pSVar7->fields).key = pSVar8;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pSVar7->fields).key >> 0xc);
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
      pTVar9 = (pSVar7->fields).toggle;
      if (pTVar9 != (Toggle *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar9,value,1,(MethodInfo *)0x0);
        pTVar9 = (pSVar7->fields).toggle;
        if (pTVar9 != (Toggle *)0x0) {
          pTVar10 = (pTVar9->fields).onValueChanged;
          uVar11 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
          FUN_?(uVar11,pSVar7,MethodInfo__SettingsToggle__ValueChanged_bool_);
          if (pTVar10 != (Toggle_ToggleEvent *)0x0) {
            pMVar12 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                     ->klass->rgctx_data[2].method;
            pIVar13 = pMVar12->klass;
            if ((pIVar13->field_0x135 & 1) == 0) {
              pIVar13 = (Il2CppClass *)FUN_?(pIVar13);
            }
            pvVar14 = pIVar13->rgctx_data[5].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
              pvVar14 = (void *)FUN_?(pvVar14);
            }
            uVar15 = FUN_?(pvVar14);
            pIVar13 = pMVar12->klass;
            if ((pIVar13->field_0x135 & 1) == 0) {
              pIVar13 = (Il2CppClass *)FUN_?(pIVar13);
            }
            FUN_?(uVar15,uVar11,
                          (pIVar13->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
            if ((pTVar10 != (Toggle_ToggleEvent *)0x0) &&
               (pIVar16 = (pTVar10->fields)._._.m_Calls, pIVar16 != (InvokableCallList *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar17 = (pIVar16->fields).m_RuntimeCalls;
              if (pLVar17 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                FUN_?(pLVar17,uVar15);
                (pIVar16->fields).m_NeedsUpdate = 1;
                return;
              }
            }
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_OnSettingChanged
               (ThemeToggle *this,String *key,Object *value,MethodInfo *method)

{
  pAVar1 = (this->fields).onChange;
  if ((pAVar1 != (Action_1_Boolean_ *)0x0) && (value != (Object *)0x0)) {
    if ((value->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,*(undefined1 *)&value[1].klass,
                 (pAVar1->fields)._._.method);
      return;
    }
    FUN_?(value,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

